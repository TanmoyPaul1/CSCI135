#include <iostream>
#include "imageio.h"
#include "funcs.h"

int main()
{
  int img[MAX_H][MAX_W];
  int height, width;
  
  // IMAGE 1

  //Task A
  readImage("image1.pgm", img, height, width);
  invert(img, height, width);
  writeImage("taskA.pgm", img, height, width);

  //Task B
  readImage("image1.pgm", img, height, width);
  invertHalf(img, height, width);
  writeImage("taskB.pgm", img, height, width);

  //Task C
  readImage("image1.pgm", img, height, width);
  box(img, height, width);
  writeImage("taskC.pgm", img, height, width);

  //Task D
  readImage("image1.pgm", img, height, width);
  frame(img, height, width);
  writeImage("taskD.pgm", img, height, width);

  //Task E
  int scaled[MAX_H * 2][MAX_W * 2];
  readImage("image1.pgm", img, height, width);
  scale(img, scaled, height, width);
  writeImage2("taskE.pgm", scaled, height * 2, width * 2);

  //Task F
  readImage("image1.pgm", img, height, width);
  pixelate(img, height, width);
  writeImage("taskF.pgm", img, height, width);

  //Task G
  int out[MAX_H][MAX_W];
  readImage("image1.pgm", img, height, width);
  readImage("image1.pgm", out, height, width);
  kernel(img, out, height, width);
  writeImage("taskG.pgm", out, height, width);

  // IMAGE 2

  //Task A
  readImage("image2.pgm", img, height, width);
  invert(img, height, width);
  writeImage("taskA2.pgm", img, height, width);

  //Task B
  readImage("image2.pgm", img, height, width);
  invertHalf(img, height, width);
  writeImage("taskB2.pgm", img, height, width);

  //Task C
  readImage("image2.pgm", img, height, width);
  box(img, height, width);
  writeImage("taskC2.pgm", img, height, width);

  //Task D
  readImage("image2.pgm", img, height, width);
  frame(img, height, width);
  writeImage("taskD2.pgm", img, height, width);

  //Task E
  readImage("image2.pgm", img, height, width);
  scale(img, scaled, height, width);
  writeImage2("taskE2.pgm", scaled, height * 2, width * 2);

  //Task F
  readImage("image2.pgm", img, height, width);
  pixelate(img, height, width);
  writeImage("taskF2.pgm", img, height, width);

  //Task G
  readImage("image2.pgm", img, height, width);
  readImage("image2.pgm", out, height, width);
  kernel(img, out, height, width);
  writeImage("taskG2.pgm", out, height, width);
  return 0;
}
