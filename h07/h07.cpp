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
    string result;
    int len = str.size();
    int i = 0;
    if (len < 3)
    {
        return str;
    }
    while (i < len - 2)
    {
        string word = str.substr(i, 3);
        if (word.at(0) == 'z' && word.at(2) == 'p')
        {
            result += "zp";
            i += 3;
        }
        else
        {
            result += word.at(0);
            i++;
        }
    }
    result += str.substr(i, len);
    return result;
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
    for (size_t i = 0; i < str.size(); i++)
    {
        if (i % n == 0)
        {
            result += str[i];
        }
    }
    return result;
}

bool prefixAgain(const string& str, int n)
{
    bool result = true;
    string prefix = str.substr(0, n);
    for (size_t i = 1, len = str.size(); (signed)i < n; i++)
    {
        string word = str.substr(i, n);
        if (word == prefix)
        {
            result = true;
        }
    }
    return result;
}



////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}