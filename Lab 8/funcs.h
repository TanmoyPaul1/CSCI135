#pragma once
#include "imageio.h"

void invert(int image[MAX_H][MAX_W], int height, int width);
void invertHalf(int image[MAX_H][MAX_W], int height, int width);
void box(int image[MAX_H][MAX_W], int height, int width);
void frame(int image[MAX_H][MAX_W], int height, int width);
void scale(int image[MAX_H][MAX_W], int scaled[MAX_H * 2][MAX_W * 2], int height, int width);
void pixelate(int image[MAX_H][MAX_W], int height, int width);
void kernel(int image[MAX_H][MAX_W], int out[MAX_H][MAX_W], int height, int width);