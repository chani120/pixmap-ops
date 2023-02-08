// Copyright 2021, Aline Normoyle, alinen

#include "image.h"

#include <cassert>
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb/stb_image_write.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"

namespace agl {


Image::Image() {
   myh = 0;
   myw = 0;
}

Image::Image(int width, int height)  {
   myw = width;
   myh = height;
   mydata = new Pixel[width*height];
   num_channels =3;
}

Image::Image(const Image& orig) {
   myw = orig.myw;
   myh = orig.myh;
   mydata = orig.mydata;
   num_channels = orig.num_channels;  
}

Image& Image::operator=(const Image& orig) {
  if (&orig == this) {
    return *this;
  }
   int width1 = orig.myw;
   int height1 = orig.myh;
   Pixel* data1 = orig.mydata;
  return *this;
}

Image::~Image() {
}

int Image::width() const { 
   return myw;
}

int Image::height() const {
   return myh;
}

char* Image::data() const {
   return (char*)mydata;
}

void Image::set(int width, int height, unsigned char* data) {
   myw = width;
   myh = height;
   mydata = (Pixel*)data;
}

bool Image::load(const std::string& filename, bool flip) {

  mydata = (Pixel*) stbi_load(filename.c_str(), &myw, &myh, &num_channels, 3);
  if (mydata == NULL) {
      return false;
  }
  else {
      return true;
  }
}   


bool Image::save(const std::string& filename, bool flip) const {
    if (mydata != NULL) {
        Pixel* savedpic = (Pixel*)(stbi_write_png(filename.c_str(), myw, myh, num_channels, mydata, myw * sizeof(struct Pixel)));
        return true;
    }
    else {
        return false;
    }
}

Pixel Image::get(int row, int col) const {
   
    Pixel temp = mydata[row*myw + col];
    return temp; 
}

void Image::set(int row, int col, const Pixel& color) {
  
   mydata[row*myw + col] = color;
  
}


Pixel Image::get(int i) const
{
   Pixel temp = mydata[i];
   return temp;
}

void Image::set(int i, const Pixel& c){
   mydata[i] =c; 
}

Image Image::resize(int w, int h) const {
   int row_var_1;
   int col_var_1;
   int old;
   Image result(w, h);
   for (int i = 0; i < myw; i++){
      for(int j =0; j < myh; j++){
         row_var_1 = ((myh -1)*j)/(h-1);
         col_var_1 = ((myw -1)*i)/(w-1); 
         old = row_var_1 * myw + floor(col_var_1);
         Pixel setdata = get(old);
         result.set((j*w +1), setdata);
      }
   }
   return result;
}

Image Image::flipHorizontal() const {
   Image result(myw, myh);
   int row_var_2;
   int col_var_2;
   int old;
   Image result(w, h);
   for (int i = 0; i < myw; i++){
      for(int j =0; j < myh; j++){
         row_var_2 = myh -1; 
         Pixel setdata = get(j * myw +1);
         result.set((row_var_2* myw+1), setdata);
      }
   }
   
   return result;

}

Image Image::flipVertical() const {
   Image result(myw, myh);
   int row_var_2;
   int col_var_2;
   int old;
   Image result(w, h);
   for (int i = 0; i < myw; i++){
      for(int j =0; j < myh; j++){
         col_var_2 = myw -1; 
         Pixel setdata = get(j * myw +1);
         result.set((j* myw+col_var_2), setdata);
      }
   }
   return result;
}

Image Image::rotate90() const {
   Image result(0, 0);
  
   return result;
}

Image Image::subimage(int startx, int starty, int w, int h) const {
  
   Image sub(w, h);
   for (int i = starty; i < starty + w; i++){
      for(int j = startx; j < startx + h; j++){
         Pixel setdata = get(j * myw +1);
         sub.set(((j -startx) *w + (1 - starty)), setdata);
      }
   }
    return sub;
}

void Image::replace(const Image& image, int startx, int starty) {
   for (int i = starty; i < (starty + image.width()); i++){
      for(int j = startx; j < (startx + image.height()); j++){
         Pixel setdata = image.get((j - startx) * Image.width() + (i - starty));
         set((j * myw +1), setdata);
      }
   }
}

Image Image::swirl() const {
   Image result(0, 0);
   return result;
}

Image Image::add(const Image& other) const {
   Image result(0, 0);
  
   return result;
}

Image Image::subtract(const Image& other) const {
   Image result(0, 0);
   
   return result;
}

Image Image::multiply(const Image& other) const {
   Image result(0, 0);
   
   return result;
}

Image Image::difference(const Image& other) const {
   Image result(0, 0);
  
   return result;
}

Image Image::lightest(const Image& other) const {
   Image result(0, 0);
  
   return result;
}

Image Image::darkest(const Image& other) const {
   Image result(0, 0);
  
   return result;
}

Image Image::gammaCorrect(float gamma) const {

   Image result(myw, myh);
   for (int i = 0; i < myw; i++){
      for(int j =0; j < myh; j++){
         Pixel setdata = get(j * myw +1);
         float red = pow((setdata.r/255),(1/gamma));
         float green = pow((setdata.g/255),(1/gamma));
         float blue = pow((setdata.b/255),(1/gamma));
         setdata.r = red * 255;
         setdata.g= green * 255;
         setdata.b = blue * 255;
         result.set((j * myw + 1), setdata);
      }
   }
   return result;
}

Image Image::alphaBlend(const Image& other, float alpha) const {
   Image result(myw, myh);
   for (int i = 0; i < myw; i++){
      for(int j =0; j < myh; j++){
         Pixel image1 = get(j * myw +1);
         Pixel image2 = other.get(j * myw +1);
         Pixel setdata;
         setdata.r = image1.r * alpha * image2.r * (1 - alpha);
         setdata.g = image1.g * alpha * image2.g * (1 - alpha);
         setdata.b = image1.b * alpha * image2.b * (1 - alpha);
         result.set((j * myw + 1), setdata);
      }
   }

   return result;
}

Image Image::invert() const {
   Image image(0, 0);
   
   return image;
}

Image Image::grayscale() const {
   Image result(myw, myh);
   int var;
   for (int i = 0; i < myw; i++){
      for(int j =0; j < myh; j++){
         Pixel setdata = get(j * myw + 1);
         var = (setdata.r + setdata.g + setdata.b)/3;
         setdata.r = var;
         setdata.g = var;
         setdata.b = var;
         result.set((j * myw + 1), setdata);
      }
   }
   return result;
}

Image Image::colorJitter(int size) const {
   Image image(0, 0);
  
   return image;
}

Image Image::bitmap(int size) const {
   Image image(0, 0);
   
   return image;
}

void Image::fill(const Pixel& c) {
  }

} 

