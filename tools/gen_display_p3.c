#include <lcms2.h>
#include <math.h>
#include <stdio.h>

static cmsFloat64Number srgbToLinear(cmsFloat64Number v) {
	if (v <= 0.04045) {
		return v / 12.92;
	}
	return pow((v + 0.055) / 1.055, 2.4);
}

int main(int argc, char** argv) {
	const char* outPath = argc > 1 ? argv[1] : "Standard_P3/DisplayP3.icc";
	cmsCIExyY d65 = {0.3127, 0.3290, 1.0};
	cmsCIExyYTRIPLE primaries = {{0.680, 0.320, 1.0}, {0.265, 0.690, 1.0}, {0.150, 0.060, 1.0}};
	cmsToneCurve* curves[3];
	cmsFloat32Number table[256];
	int i;
	for (i = 0; i < 256; ++i) {
		table[i] = (cmsFloat32Number)srgbToLinear((cmsFloat64Number)i / 255.0);
	}
	curves[0] = cmsBuildTabulatedToneCurveFloat(NULL, 256, table);
	curves[1] = curves[0];
	curves[2] = curves[0];
	if (!curves[0]) {
		fprintf(stderr, "tone curve failed\n");
		return 1;
	}
	cmsHPROFILE h = cmsCreateRGBProfile(&d65, &primaries, curves);
	cmsFreeToneCurve(curves[0]);
	if (!h) {
		fprintf(stderr, "cmsCreateRGBProfile failed\n");
		return 1;
	}
	cmsSetDeviceClass(h, cmsSigDisplayClass);
	cmsSetColorSpace(h, cmsSigRgbData);
	cmsSetPCS(h, cmsSigXYZData);
	if (!cmsSaveProfileToFile(h, outPath)) {
		fprintf(stderr, "save failed: %s\n", outPath);
		cmsCloseProfile(h);
		return 1;
	}
	cmsCloseProfile(h);
	printf("wrote %s\n", outPath);
	return 0;
}
