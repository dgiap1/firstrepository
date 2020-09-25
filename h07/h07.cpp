/**
 *  @author Derek Giap
 *  @date 09/14/2020
 *  @file h07.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h07.h"

// Place your function definitions in this file.
string zipZap(const string& str)
{
    return 0;
}

int countCode(const string& str)
{
    int result = 0;
    for (size_t i = 4, len = str.size(); i <= len; i++)
    {
        string word = str.substr(i - 4, 4);
        string front = word.substr(0, 2);
        string back = word.substr(3);
        if (front == "co" && back == "e")
        {
            result++;
        }
    }
    return result;
}

string everyNth(const string& str, int n)
{
    string result;
    for (int i = 0; i < n; i += n)
    {
        result += str[0];
    }
    return result;
}

bool prefixAgain(const string& str, int n)
{
    return 0;
}



////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}