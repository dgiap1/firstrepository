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

void flip(UC* const img, int width, int height, Direction dir)
{
    if (dir == Direction::LtoR || dir == Direction::RtoL)
    {
        for (int row = 0; row < height; ++row)
        {
            Pixel * front = reinterpret_cast<Pixel*>(img) + row * width;
            Pixel * back = front + width - 1;
            while (front < back)
            {
                auto temp = *front;
                *front = *back;
                *back = temp;
                front++;
                back--;
            }
        }
    }

    if (dir == Direction::TtoB || dir == Direction::BtoT)
    {
        for (int col = 0; col < width; ++col)
        {
            Pixel * top = reinterpret_cast<Pixel*>(img) + col;
            Pixel * bottom = top + width * (height - 1);
            while (top < bottom)
            {
                auto temp2 = *top;
                *top = *bottom;
                *bottom = temp2;
                top = top + width;
                bottom = bottom - width;
            }
        }
    }
}

void mirror(UC* const img, int width, int height, Direction dir)
{
    for (int row = 0; row < height; ++row)
    {
        Pixel * front = reinterpret_cast<Pixel*>(img) + row * width;
        Pixel * back = front + width - 1;
        while (front < back)
        {
            if (dir == Direction::LtoR)
            {
                *front = *back;
            }
            else if (dir == Direction::RtoL)
            {
                *back = *front;
            }
        }
    }
    for (int col = 0; col < width; ++col)
    {
        Pixel * top = reinterpret_cast<Pixel*>(img) + col;
        Pixel * bottom = top + width * (height - 1);
        while (top < bottom)
        {
            if (dir == Direction::TtoB)
            {
                *bottom = *top;
            }
            else if (dir == Direction::BtoT)
            {
                *top = *bottom;
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