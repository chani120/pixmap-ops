# pixmap-ops

Image manipulation demos based on the PPM image format.

![killua+gon](https://user-images.githubusercontent.com/44120884/218390316-c3f5e0e4-de4d-4701-a108-1b3040c70e3e.jpg)

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

![killua+gon-200-300](https://user-images.githubusercontent.com/44120884/218390555-d5c19804-a174-4826-b4e9-98679893202f.png)

Subimage of This Image:

![killua+gon-subimage](https://user-images.githubusercontent.com/44120884/218390590-42db0cd2-fad5-4bab-8d2c-440c2d22c8ce.png)

Flips This Image Horizontally:

![killua+gon-flip](https://user-images.githubusercontent.com/44120884/218390656-bf61845b-a17a-427c-86c8-85630ea75ec0.png)

Flips This Image Vertically:

![killua+gon-flip-vertical](https://user-images.githubusercontent.com/44120884/218390708-b214e159-1059-4b69-bdb5-09a16185cd72.png)

This Image Rotated 90 Degrees:

![killua+gon-rotated90](https://user-images.githubusercontent.com/44120884/218390769-88be8dff-cb42-43d3-bb5d-4286f6ec7063.png)

Blends Soup Image with This Image:

![killua+gon-blend-0 5](https://user-images.githubusercontent.com/44120884/218390847-075c365c-6ae2-48ca-85f3-55bbf5ab22d4.png)

Gamma Effect of 0.6"

![killua+gon-gamma-0 6](https://user-images.githubusercontent.com/44120884/218390898-fffbc1ac-b089-41c0-a1b7-057cde07c28a.png)

Gamma Effect of 2.2:

![killua+gon-gamma-2 2](https://user-images.githubusercontent.com/44120884/218390924-ebe59683-558f-4335-a4a5-c5e5323416d2.png)

This Image with Grayscale Effect:

![killua+gon-grayscale](https://user-images.githubusercontent.com/44120884/218390960-666ec1ff-ce3d-4022-a555-c5986899ab68.png)

Multiplies This Image Pixels with Inverted Image Pixels:

![killua+gon-multiplied](https://user-images.githubusercontent.com/44120884/218391143-18b26e77-f488-4472-a61d-5a998c1b2776.png)

Difference of This Image Pixels with Inverted Image Pixels:

![killua+gon-subtracted](https://user-images.githubusercontent.com/44120884/218391118-50897788-0ef7-4a45-b727-4f24d9699fc9.png)

Sum of This Image Pixels with Subtracted Image Pixels:

![killua+gon-added](https://user-images.githubusercontent.com/44120884/218391319-0b88152d-6ee5-4278-a728-63028204b413.png)

This Image Inverted:

![killua+gon-inverted](https://user-images.githubusercontent.com/44120884/218391297-01cd483a-144f-4263-ad11-7564b80bdf12.png)

Lightest Pixels between This Image and Inverted Pixels:

![killua+gon-lightest](https://user-images.githubusercontent.com/44120884/218391155-21643d19-82fe-4451-9263-10a6e94141e9.png)

Darkest Pixels between This Image and Inverted Pixels:

![killua+gon-darkest](https://user-images.githubusercontent.com/44120884/218391193-d865e92e-fe5d-4784-b4db-c2cf45e3ec2c.png)

Swirl of This Image:

![killua+gon-swirl](https://user-images.githubusercontent.com/44120884/218391097-fc9a0c17-8fad-4e12-84c4-781b95a203a9.png)

Color Jitter of This Image:

![killua+gon-colorjitter](https://user-images.githubusercontent.com/44120884/218391241-69c0c734-75b8-4f08-8d36-272311d93d55.png)


