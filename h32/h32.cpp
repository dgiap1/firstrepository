/**
    @file h32.cpp
    @author Derek Giap
    @version 11/18/2020
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h32.h"

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

bool find(const string& s, const string& t)
{
    size_t x = t.size();
    if (s.size() < x)
    {
        return false;
    }
    else if (s.substr(0, x) == t)
    {
        return true;
    }
    return find(s.substr(1), t);
}




////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

