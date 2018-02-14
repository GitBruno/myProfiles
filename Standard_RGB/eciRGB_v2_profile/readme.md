## eciRGB_v2

The eciRGB_v2 profile is a **technical revision** of ECI's existing RGB working colour space profile eciRGB 1.0. Currently ECI is submitting eciRGB_v2 into ISO standardization such that it is expected to be incorporated – including a complete and detailed specification of its characteristics – into the **ISO 22028** series of standards. For ECI this is an important step in order to further extend the already wide spread use of the eciRGB profile - the publication as an ISO standard will establish it as a worldwide RGB standard profile for use as a working colour space in the graphic arts industry.

The **most relevant improvement** is that luminance is now encoded in an equidistant way – 'conversion losses' between data and the human eye are thus a matter of the past: The gamma of 1.8 has been replaced by an L* characterization as used in the theoretically ideal CIELAB color space. This improved encoding efficiency brings with it substantial advantages in the shadows, as the risk of posterization effects – especially while retouching – is significantly reduced. Errors caused by colour space conversions – e.g. banding or reversal – are minimized as much as currently technically feasible.

The focus of the eciRGB_v2 profile still is on the **print and publishing industry** – the gamut of the eciRGB_v2 profile as well as its white point are identical to the gamut and white point of the original eciRGB 1.0 profile.

In general, ECI now recommends to always use the eciRGB_v2 profile for new projects or when creating new data. This is especially true when converting from RAW data or from 16 bit image data.

For **existing projects** and files which are not using eciRGB_v2 it is not recommended to convert them to eciRGB_v2 in order to avoid unnecessary conversion or – even more dangeorus – assigning the wrong profile to the data. Especially 8 bit data using eciRGB 1.0 should be kept in eciRGB 1.0 (preferably with the eciRGB 1.0 profile embedded) as any colour space conversion will lead to at least some loss of quality.

If you still have the need to bring your old data into the new colour space you have to perform an ICC profile conversion to the new eciRGB_v2 profile. Do not just “assign” eciRGB_V2 as the source profile, as it will lead to color and luminance shifts. As already mentioned before, there is no technical reason to do so.
