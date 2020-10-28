/**
 *  @author Derek Giap
 *  @date 10/27/2020
 *  @file h24.cpp
 */
#include <string>
#include <stdexcept>
// Other headers if necessary
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h24.h"

bool sameSet(const int *aBeg, const int *aEnd, const int *bBeg, const int *bEnd)
{
    bool result = true;
    for (size_t i = 0; i < (unsigned int)*aEnd; i++)
    {
        result = false;
    }
    return result;
}

void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize)
{
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}