/**
 *  @author Derek Giap
 *  @date 11/17/2020
 *  @file h31.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID


#include "h31.h"

void Image::translate(int dx, int dy)
{
    Image& img = *this;

    if (dx < 0) dx = width() - abs(dx) % width();
    else dx = dx % width();

    for (unsigned row = 0; row < height(); row++)
    {
        for (int i = 0; i < dx; i++)
        {
            int last = width() - 1;
            int r = row * width();
            auto temp = img[r + last];
            for (int j = last; j > 0; j--)
            {
                img[r + j] = img[r + (j - 1)];
            }
            img[r + 0] = temp;
        }
    }
    if (dy < 0)
    {
        dy = height() - abs(dy) % height();
    }
    else
    {
        dy = dy % height();
    }
    int lastRow = width() * (height() - 1);
    for (int i = 0; i < dy; i++)
    {
        for (unsigned col = 0; col < width(); col++)
        {
            auto temp = img[lastRow + col];
            for (unsigned row = height() - 1; row > 0; row--)
            {
                img[row * width() + col] = img[(row - 1) * width() + col];
            }
            img[col] = temp;
        }
    }
}

const Pixel& Image::operator[] (unsigned idx) const
{
    return m_pixels.at(idx);
}

Pixel& Image:: operator[](unsigned idx)
{
    return m_pixels.at(idx);
}

//void translate(UC* const img, int width, int height, int dx, int dy)
//{
//    Pixel * pixels = reinterpret_cast<Pixel *> (img);
//    if (dx < 0)
//    {
//        dx = width - abs(dx) % width;
//    }
//    else
//    {
//        dx = dx % width;
//    }
//    for (int row = 0; row < height; row++)
//    {
//        for (int j = 0; j < dx; j++)
//        {
//            auto r = pixels + (row * width);
//            auto temp = r[width - 1];
//            for (int i = width - 1; i > 0; i--)
//            {
//                r[i] = r[i - 1];
//            }
//            r[0] = temp;
//        }
//    }
//
//    auto lastRow = pixels + width * (height - 1);
//    if (dy < 0)
//    {
//        dy = height - abs(dy) % height;
//    }
//    else
//    {
//        dy = dy % height;
//    }
//    for (int c = 0; c < dy; c++)
//    {
//        for (int col = 0; col < width; col++)
//        {
//            auto t = pixels + width * (height - 1);
//            auto temp = lastRow[col];
//            for (int row = height - 1; row > 0; row--)
//            {
//                pixels[(row * width) + col] = pixels[(row - 1) * width + col];
//            }
//            pixels[col] = temp;
//        }
//    }
//}


/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}