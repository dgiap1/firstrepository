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
        Pixel * temp{};
        while (front < back)
        {
            *temp = *front;
            *front = *back;
            *back = *temp;
            front++;
            back--;
        }
    }
}

void mirror(UC* const img, int width, int height, Direction dir)
{

}




/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}