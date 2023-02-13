# pixmap-ops

Image manipulation demos based on the PPM image format.

killua+gon.jpg

## How to build

*Windows*

Open git bash to the directory containing this repository.

```
pixmap-ops $ mkdir build
pixmap-ops $ cd build
pixmap-ops/build $ cmake -G "Visual Studio 17 2022" ..
pixmap-ops/build $ start pixmap-ops.sln
```

Your solution file should contain two projects: `pixmap_art` and `pixmap_test`.
To run from the git bash command shell, 

```
pixmap-ops/build $ ../bin/Debug/pixmap_test
pixmap-ops/build $ ../bin/Debug/pixmap_art
```

*macOS*

Open terminal to the directory containing this repository.

```
pixmap-ops $ mkdir build
pixmap-ops $ cd build
pixmap-ops/build $ cmake ..
pixmap-ops/build $ make
```

To run each program from build, you would type

```
pixmap-ops/build $ ../bin/pixmap_test
pixmap-ops/build $ ../bin/pixmap_art
```

## Image operators

Resizes This Image to 200 x 300:
killua+gon-200-300.png

Subimage of This Image
killua+gon-subimage.png

Flips This Image Horizontally
killua+gon-flip.png

Flips This Image Vertically
killua+gon-flip-vertical.png

This Image Rotated 90 Degrees
killua+gon-rotated90.png

Blends Soup Image with This Image
killua+gon-blend-0.5.png

Gamma Effect of 0.6
killua+gon-gamma-0.6.png

Gamma Effect of 2.2
killua+gon-gamma-2.2.png

This Image with Grayscale Effect
killua+gon-grayscale.png

Multiplies This Image Pixels with Inverted Image Pixels
killua+gon-multiplied.png

Difference of This Image Pixels with Inverted Image Pixels
killua+gon-subtracted.png

Sum of This Image Pixels with Subtracted Image Pixels
killua+gon-added.png

This Image Inverted
killua+gon-inverted.png

Lightest Pixels between This Image and Inverted Pixels
killua+gon-lightest.png

Darkest Pixels between This Image and Inverted Pixels
killua+gon-darkest.png

Swirl of This Image
killua+gon-swirl.png

Color Jitter of This Image
killua+gon-colorjitter.png



