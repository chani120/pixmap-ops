// Copyright 2021, Aline Normoyle, alinen

#include <iostream>
#include "image.h"
using namespace std;
using namespace agl;

int main(int argc, char** argv)
{
   Image image;
   if (!image.load("../images/feep.png")) {
      std::cout << "ERROR: Cannot load image! Exiting...\n";
      exit(0);
   }

   for (int i = 0; i < image.height(); i++) {
      for (int j = 0; j < image.width(); j++) {
         Pixel c = image.get(i, j);
         std::cout << "(" << (int)c.r << "," << (int)c.g << "," << (int)c.b << ") ";
      }
      std::cout << std::endl;
   }
   image.save("feep-test-save.png"); // should match original
   
   // should print 4 4
   cout << "loaded feep: " << image.width() << " " << image.height() << endl;

   // test: copy constructor
   Image copy = image; 
   copy.save("feep-test-copy.png"); // should match original and load into gimp

   // test: assignment operator
   copy = image; 
   copy.save("feep-test-assignment.png"); // should match original and load into gimp

   // should print r,g,b
   Pixel pixel = image.get(1, 1);
   cout << (int) pixel.r << " " << (int) pixel.g << " " << (int) pixel.b << endl;
 
   // test: setting a color
   pixel.r = 255;
   image.set(1, 1, pixel);
   image.save("feep-test-newcolor.png");
 
   // test a non-trivial image
   if (!image.load("../images/killua+gon.jpg")) {
      std::cout << "ERROR: Cannot load image! Exiting...\n";
      exit(0);
   }

   // should print 400 400
   cout << "loaded killua+gon: " << image.width() << " " << image.height() << endl;
   
   // resize
   Image resize = image.resize(200,300);
   resize.save("killua+gon-200-300.png");
    
   // grayscale
   Image grayscale = image.grayscale(); 
   grayscale.save("killua+gon-grayscale.png");

   // random
   Image jitter = image.colorJitter(200); 
   jitter.save("killua+gon-colorjitter.png");

   // swirl
   Image swirl = image.swirl(); 
   swirl.save("killua+gon-swirl.png");

   // flip horizontal
   Image flip = image.flipHorizontal(); 
   flip.save("killua+gon-flip.png"); 

   // flip vertical
   Image flip_vertical = image.flipVertical();
   flip_vertical.save("killua+gon-flip-vertical.png");
   
   //invert
   Image inverted = image.invert();
   inverted.save("killua+gon-inverted.png");

   //multiply
   Image multiplied = image.multiply(inverted);
   multiplied.save("killua+gon-multiplied.png");

   //subtract
   Image subtracted = image.difference(inverted);
   subtracted.save("killua+gon-subtracted.png");

   //lightest
   Image light = image.lightest(inverted);
   light.save("killua+gon-lightest.png");

   //darkest
   Image dark = image.darkest(inverted);
   dark.save("killua+gon-darkest.png");
   
   //add
   Image added = image.add(subtracted);
   added.save("killua+gon-added.png");
   
   //rotate90
   Image rotate_90 = image.rotate90();
   rotate_90.save("killua+gon-rotated90.png");

   // sub image
   Image sub = image.subimage(200, 200, 100, 100); 
   sub.save("killua+gon-subimage.png"); 

   // gamma correction
   Image gamma = image.gammaCorrect(0.6f); 
   gamma.save("killua+gon-gamma-0.6.png"); 

   gamma = image.gammaCorrect(2.2f);
   gamma.save("killua+gon-gamma-2.2.png"); 

   // alpha blend
   Image soup;
   soup.load("../images/soup.png");

   int y = (int) (0.5f * (image.width() - soup.width()));
   int x = (int) (0.5f * (image.height() - soup.height()));
   Image background = image.subimage(x, y, soup.width(), soup.height());
   background.save("background-test.png");
   Image blend = background.alphaBlend(soup, 0.5f);
   image.replace(blend, x, y);
   image.save("killua+gon-blend-0.5.png");
}

