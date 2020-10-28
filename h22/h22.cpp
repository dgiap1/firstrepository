/**
 *  @author Derek Giap
 *  @date 10/27/2020
 *  @file h22.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h22.h"

// Add your code here
void flip(UC* const img, int width, int height, Direction dir)
{
    for (int row = 0; row < height; ++row)
    {
        Pixel * front = reinterpret_cast<Pixel*>(img) + row * width * 4;
        Pixel * back = front + width - 1;
        Pixel * temp{0};
        while (front < back)
        {
            *temp = *front;
            *front = *back;
            *back = *temp;
            front++;
            back--;
        }
    }
    for (int col = 0; col < width; ++col)
    {
        Pixel * top = reinterpret_cast<Pixel*>(img) + col * height * 4;
        Pixel * bottom = top + width * (height - 1);
        Pixel * temp2{0};
        while (top < bottom)
        {
            *temp2 = *top;
            *top = *bottom;
            *bottom = *temp2;
            top = top + width;
            bottom = bottom - width;
        }
    }
}

void mirror(UC* const img, int width, int height, Direction dir)
{
    for (int row = 0; row < height; ++row)
    {
        Pixel * front = reinterpret_cast<Pixel*>(img) + row * width * 4;
        Pixel * back = front + width - 1;
        while (front < back)
        {
            if (dir == Direction::LtoR)
            {
                *back = *front;
            }
            if (dir == Direction::RtoL)
            {
                *front = *back;
            }
        }
    }
    for (int col = 0; col < width; ++col)
    {
        Pixel * top = reinterpret_cast<Pixel*>(img) + col * height * 4;
        Pixel * bottom = top + width * (height - 1);
        while (top < bottom)
        {
            if (dir == Direction::TtoB)
            {
                *top = *bottom;
            }
            if (dir == Direction::BtoT)
            {
                *bottom = *top;
            }
        }
    }
}




/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}