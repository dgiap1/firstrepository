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
bool read(const string& prompt, int& age, bool truthValue)
{
    if(cin.fail())
    {
        string junk;
        cin >> junk;
        cin.clear();
        return false;
    }
    else
    {
        return true;
    }
}

bool read(const string& prompt, double& gpa, bool truthValue)
{
    cout << prompt;
    cin >> gpa;
    if(cin.fail())
    {
        cin.ignore(1024, '\n');
        cin.clear();
        return false;
    }
    else
    {
        return true;
    }
    return false;
}

bool read(const string& prompt, string& name, bool truthValue)
{
    string str = " ";
    getline(cin, name);

    if (false)
    {
        cin.clear();
        return false;
    }
    else
    {
        return true;
    }
}

bool read(char& first, char sentinel)
{
    char ch = cin.get();
    if (ch == sentinel)
    {
        return false;
    }
    else
    {
        return true;
    }
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

