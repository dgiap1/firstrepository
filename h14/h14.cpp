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
    if (!prompt.empty())
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
        if (!userInput.empty())
        {
            istringstream in(userInput);
            int n;
            in >> n;
            if (in.eof() && !in.fail())
            {
                return n;
            }
            in >> ws;
            if (in.eof() && !in.fail())
            {
                return n;
            }
        }
        cout << "Error: Not an int" << endl;
        userInput = getLine(prompt);
    }
}


double getReal(const string& prompt)
{
    string userInput = getLine(prompt);
    while (true)
    {
        if (!userInput.empty())
        {
            istringstream in(userInput);
            double n;
            in >> n;
            if (in.eof() && !in.fail())
            {
                return n;
            }
            in >> ws;
            if (in.eof() && !in.fail())
            {
                return n;
            }
        }
        cout << "Error: Not a double" << endl;
        userInput = getLine(prompt);
    }
}


bool getYN(const string& prompt)
{
    string userInput = getLine(prompt);
    while (true)
    {
        if (!userInput.empty())
        {
            istringstream in(userInput);
            string n;
            in >> n;
            if (in.eof() && !in.fail())
            {
                if (userInput[0] == 'Y' || userInput[0] == 'y')
                {
                    return true;
                }
                else if (userInput[0] == 'N' || userInput[0] == 'n')
                {
                    return false;
                }
            }
            in >> ws;
            if (in.eof() && !in.fail())
            {
                if (userInput[0] == 'Y' || userInput[0] == 'y')
                {
                    return true;
                }
                else if (userInput[0] == 'N' || userInput[0] == 'n')
                {
                    return false;
                }
            }
        }
        cout << "Error: Invalid input" << endl;
        userInput = getLine(prompt);
    }
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