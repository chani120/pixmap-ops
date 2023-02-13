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

![killua+gon-200-300](https://user-images.githubusercontent.com/44120884/218378866-2f35557b-da6a-4c78-9827-070a422d2e6a.png)

Subimage of This Image:

![killua+gon-subimage](https://user-images.githubusercontent.com/44120884/218378915-fd73e8c3-df8a-43af-ad10-5e23b02435d9.png)

Flips This Image Horizontally:

![killua+gon-flip](https://user-images.githubusercontent.com/44120884/218378946-218b6498-0842-4cf8-9ae6-829ad40d355b.png)

Flips This Image Vertically
![killua+gon-flip-vertical](https://user-images.githubusercontent.com/44120884/218379089-c1153c5d-e269-498f-8279-bf790562640c.png)

This Image Rotated 90 Degrees:

![killua+gon-rotated90](https://user-images.githubusercontent.com/44120884/218379135-b86372cb-0fcb-47b8-8cbf-0cd0fb058522.png)

Blends Soup Image with This Image:

![killua+gon-blend-0 5](https://user-images.githubusercontent.com/44120884/218379161-6626ca8b-0a85-4cce-93ce-edf246e7c231.png)

Gamma Effect of 0.6"

![killua+gon-gamma-0 6](https://user-images.githubusercontent.com/44120884/218379207-85041187-9bcf-4295-aeaf-3780f0e32dfd.png)

Gamma Effect of 2.2:

![killua+gon-gamma-2 2](https://user-images.githubusercontent.com/44120884/218379256-9ba69513-04eb-48ea-8143-38306467d5f4.png)

This Image with Grayscale Effect:

![killua+gon-grayscale](https://user-images.githubusercontent.com/44120884/218379286-b29d8c15-a42d-44c1-bd64-1d59051ac4ee.png)

Multiplies This Image Pixels with Inverted Image Pixels:

![killua+gon-multiplied](https://user-images.githubusercontent.com/44120884/218379313-f8c0e0ba-e833-429d-9923-789fb104b950.png)

Difference of This Image Pixels with Inverted Image Pixels:

![killua+gon-subtracted](https://user-images.githubusercontent.com/44120884/218379332-bd1532ee-2df3-408d-ba9d-9200cebe5f11.png)

Sum of This Image Pixels with Subtracted Image Pixels:

![killua+gon-added](https://user-images.githubusercontent.com/44120884/218379351-478bf8f3-9925-4829-9b33-b15641766947.png)

This Image Inverted:

![killua+gon-inverted](https://user-images.githubusercontent.com/44120884/218379376-71e528ac-8583-43c3-b1aa-e299feae42be.png)

Lightest Pixels between This Image and Inverted Pixels:

![killua+gon-lightest](https://user-images.githubusercontent.com/44120884/218379407-43803f52-a012-4ef8-905f-6076927a5c04.png)

Darkest Pixels between This Image and Inverted Pixels:

![killua+gon-darkest](https://user-images.githubusercontent.com/44120884/218379444-5b3bb4c4-7a0d-4f20-a4c7-f62ccb5fc575.png)

Swirl of This Image:

![killua+gon-swirl](https://user-images.githubusercontent.com/44120884/218379468-c5d461ac-b03a-4762-8851-594626554206.png)

Color Jitter of This Image:

![killua+gon-colorjitter](https://user-images.githubusercontent.com/44120884/218379483-2f611183-a7ec-497d-865d-d3f771cafca4.png)



