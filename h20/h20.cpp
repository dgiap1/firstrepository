/**
 *  @author Derek Giap
 *  @date 10/21/2020
 *  @file h20.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h20.h"

// Add your code here
void greenScreen(unsigned char* const img, int width, int height)
{
    auto end = img + width * height * 4;
    unsigned char * p = img;
    while (p != end)
    {
        auto bigger = max(*p, *(p+2));
        if(*(p+1) >= 2 * bigger)
        {
            *p = 0;
            *(p + 1) = 0;
            *(p + 2) = 0;
            *(p + 3) = 0;
        }
        p++;
        p++;
        p++;
        p++;
    }
}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    // Write your own tests here

    return 0;
}