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

bool sameSet(const int *aBeg,const int *aEnd,const int *bBeg,const int *bEnd)
{
    bool result = false;
    bool check = false;
    for(const int *p = aBeg; *p != *aEnd; p++)
    {
        check = false;
        for(const int *q = bBeg; *q != *bEnd; q++)
        {
            if(*q == *p)
            {
                check = true;
                break;
            }
        }

        if(check == false)
        {
            result = false;
            break;
        }
        else
        {
            result = true;
        }
    }

    result = false;
    check = false;
    for (const int *p1 = bBeg; *p1 != *bEnd; p1++)
    {
        check = false;
        for (const int *q1 = aBeg; *q1 != *aEnd; q1++)
        {
            if (*q1 == *p1)
            {
                check=true;
                break;
            }
        }
        if (check == false)
        {
            result = false;
            break;
        }
        else
        {
            result = true;
        }
    }
   return result;
}

void copyEvens(const int a[], size_t aSize, int b[], size_t &bSize)
{
    if(bSize < aSize)
    {
        throw length_error("Size is Lower than source size");
    }
    else
    {
        bSize = 0;
        for(size_t i=0; i < aSize; i++)
        {
            if (a[i] % 2 == 0)
            {
                b[bSize] = a[i];
                bSize++;
            }
        }
    }
}
/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}