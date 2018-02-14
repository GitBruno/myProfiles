# About the RGB (working) profiles

Adobe RGB (1998) represents the RGB gamut that could be successfully translated from RGB to CMYK and then printed on a digital printer. Adobe RGB has a gamut of 52.1% of visible colors.

The European Color Initiative developed a standard meant to supersede Adobe RGB. The [eciRGB-V2 ](http://www.eci.org/en/colourstandards/workingcolorspaces)standard is targeted at printing. It has a gamut of just over 55% of visible colors. The eciRGB-V2 space was designed to minimize posterization, banding and reversal effects. The eciRGB_v2 profile has been submitted for ISO standardization. It is certain to be accepted into the **ISO 22028** series of color standards. This profile will likely gain traction as the worldwide RGB standard profile for use as a working color space in the graphic arts industry. The eciRGB-V2 profile can be downloaded at [eci.org](http://www.eci.org/en/downloads).

The sRGB space meets the [ITU-R BT.709-5](http://www.itu.int/rec/R-REC-BT.709/en) production standard for HDTV last revised in 2008. Although this standard was originally developed for cathode ray tube (CRT) monitors, manufacturers of LCD monitors use firmware corrections so that the LCD monitors meet this standard. Color proofing and other high end monitors often are capable of exceeding this standard.

The following profiles are worth mentioning but are not ideal candidates for use in the digital design and print workflow. 

Adobe developed that Wide-Gamut RGB color space to account for colors available using more powerful processors. The wide-gamut RGB color space encompasses 77.6% of the visible colors specified by the [Lab color space](http://en.wikipedia.org/wiki/Lab_color_space), while the standard Adobe RGB color space covers just 52.1% and sRGB covers only 35.9%. Depending on the rendering engine, this space may cause posterized output when printed.

There are a number of other wide gamut RGB color spaces. Perhaps the most well know is  ProPhotoRGBdeveloped by Kodak to represent the full photographic color space. This space has been adopted as a international standard and is now known as [ROMM RGB](http://www.color.org/chardata/rgb/rommrgb.xalter). This space encompasses about 90% of surface colors but also includes 13% of colors that are imaginary and cannot be reproduced. ﻿