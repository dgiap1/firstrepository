/**
 *  @author Derek Giap
 *  @date 10/27/2020
 *  @file h23.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h23.h"

int alternatingSum(const int a[], size_t size)
{
    size_t current_size = 0;
    double total = 0;
    if (current_size < size)
    {
        if (current_size % 2 == 0)
        {
    	    total = total + a[current_size];
    	}
    	else if (current_size % 2 != 0)
    	{
    		total = total - a[current_size];
    	}
    	current_size++;
    }
    return total;
}

MinMax minMax(const double *ptr, size_t size)
{
    MinMax result;
    result.min = &ptr[0];
    result.max = &ptr[0];
    if (size == 0)
    {
        result.min = nullptr;
        result.max = nullptr;
    }
    for (size_t i = 1; i < size; i++)
    {
        if (ptr[i] < *result.min)
        {
            result.min = &ptr[i];
        }
        if (ptr[i] > *result.max)
        {
            result.max = &ptr[i];
        }
    }
    return result;
}


/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}