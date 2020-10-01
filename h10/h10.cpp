/**
 *  @author Derek Giap
 *  @date 09/28/2020
 *  @file h10.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h10.h"

// Place your function definitions in this file.
bool read(const string& a, int& b, bool c)
{
    bool result = c;
    if (isdigit(b))
    {
        result = true;
    }
    return result;
}

bool read(const string& a, double& b, bool c)
{
    bool result = c;
    return result;
}

bool read(const string& a, string& b, bool c)
{
    bool result = c;
    return result;
}

bool read(char& a, char b)
{
    bool result = true;
    if (a == b)
    {
        result = false;
    }
    return result;
}

////////////////// STUDENT TESTING /////////////
int run()
{
    // cout << "Student testing" << endl;
    // int age;
    // if (read("How old are you? ", age))
    //     cout << "You don't look " << age << " years old!" << endl;
    // else
    //     cout << "Hmm. Doesn't look like you entered an int." << endl;
//
    // double gpa;
    // if (read("What is your gpa? ", gpa, true))
    //     cout << "Wow! " << fixed << setprecision(2) << gpa << "? I'm impressed." << endl;
    // else
    //     cout << "Sorry. I can't understand what you typed." << endl;
//
    // string name;
    // if (read("What is your full name? ", name, true))
    //     cout << "Hi " << name << ". Glad to meet you." << endl;
    // else
    //     cout << "Hmm. Is that your FULL name?" << endl;
//
    // cout << "Type a sentence ending in a period: ";
    // char ch;
    // while (read(ch, '.')) cout << ch;
    //  cout << "." << endl;

    return 0;
}

