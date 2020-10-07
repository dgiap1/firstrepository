/**
 *  @author Derek Giap
 *  @date 10/05/2020
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <stdexcept>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h14.h"

string getLine(const string& prompt)
{
    string newPrompt = prompt;
    string userInput;
    getline(cin, userInput);
    if (! prompt.empty())
    {
        if (newPrompt.back() != ' ')
        {
            newPrompt += ' ';
        }
        cout << newPrompt;
    }
    return userInput;
}


int getInt(const string& prompt)
{
    string userInput = getLine(prompt);
    while (true)
    {
        if (! userInput.empty())
        {
            istringstream in(userInput);
            int n;
            in >> n;
            in >> ws;
            if (in.eof() && ! in.fail())
            {
                return n;
            }
        }
        cout << "Error: Not an Int" << endl;
        userInput = getLine(prompt);
    }
}


double getReal(const string& prompt)
{
    // Same as getInt but as a double
    return 5.0;
}


bool getYN(const string& prompt)
{
    return true;
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // do
    // {
    //     string s = getLine("Enter a string: ");
    //     cout << "s->\"" << s << "\"" << endl;

    //     int n = getInt("Enter an integer:");
    //     cout << "n->" << n << endl;

    //     double d = getReal("Enter a real number: ");
    //     cout << "d->" << d << endl;

    // } while (getYN("Try again? (Y/N)"));

    return 0;
}