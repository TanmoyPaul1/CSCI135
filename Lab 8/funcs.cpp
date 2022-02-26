#include <iostream>
#include "funcs.h"

void invert(int image[MAX_H][MAX_W], int height, int width)
{
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            image[row][col] = 255 - image[row][col];
        }
    }

}

void invertHalf(int image[MAX_H][MAX_W], int height, int width)
{
    for (int row = 0; row < height; row++)
    {
        for (int col = width/2; col < width; col++)
        {
            image[row][col] = 255 - image[row][col];
        }
    }
}

void box(int image[MAX_H][MAX_W], int height, int width)
{
    for (int row = height / 4; row < height * 3 / 4; row++)
    {
        for (int col = width / 4; col < width * 3 / 4; col++)
        {
            image[row][col] = 255;
        }
    }
}

void frame(int image[MAX_H][MAX_W], int height, int width)
{
    for (int row = height / 4; row <= height * 3 / 4; row++)
    {
        for (int col = width / 4; col <= width * 3 / 4; col++)
        {
            if (row == height / 4 || col == width / 4 || row == (height * 3 / 4) || col == (width * 3 / 4))
                image[row][col] = 255;
        }
    }
}

void scale(int image[MAX_H][MAX_W], int scaled[MAX_H * 2][MAX_W * 2], int height, int width)
{
    int row2 = 0, col2 = 0;
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            row2 = row * 2;
            col2 = col * 2;
            scaled[row2][col2] = image[row][col];
            scaled[row2 + 1][col2] = image[row][col];
            scaled[row2][col2 + 1] = image[row][col];
            scaled[row2 + 1][col2 + 1] = image[row][col];
        }
    }
}

void pixelate(int image[MAX_H][MAX_W], int height, int width)
{
    for (int row = 0; row < height; row += 2)
    {
        for (int col = 0; col < width; col += 2)
        {
            int average = (image[row][col] + image[row + 1][col] + image[row][col + 1] + image[row + 1][col + 1])/4;
            image[row][col] = average;
            image[row + 1][col] = average;
            image[row][col + 1] = average;
            image[row + 1][col + 1] = average;
        }
    }
}

void kernel(int image[MAX_H][MAX_W], int out[MAX_H][MAX_W], int height, int width)
{
    int edge;
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            if (row == 0 || col == 0 || row == height - 1 || col == width - 1)
            {
                out[row][col] = 0;
            }
            //(g+2h+i)-(a+2b+c)
            else
            {
                edge = (image[row + 1][col - 1] + (2 * image[row + 1][col]) + image[row + 1][col + 1]) 
                    - (image[row - 1][col - 1] + (2 * image[row - 1][col]) + image[row - 1][col + 1]);
                if(edge > 255)
                    edge = 255;
                if (edge < 0)
                    edge = 0;
                out[row][col] = edge;
            }
        }
    }
}