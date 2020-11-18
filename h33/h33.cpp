/**
    @file 33.cpp
    @author Derek Giap
    @version 11/18/2020
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h33.h"

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

string stringClean(const string& str)
{
    if (str.size() < 2)
    {
        return str;
    }
    if (str[0] == str[1])
    {
        return stringClean(str.substr(1));
    }
    return str[0] + stringClean(str.substr(1));
}




////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

