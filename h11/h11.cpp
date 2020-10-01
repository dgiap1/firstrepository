/**
 *  @author Derek Giap
 *  @date 09/28/2020
 *  @file h11.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

// Write your function here
void strip()
{
    bool inSingleCmt = false;
    bool inMultiCmt = false;
    bool inString = false;
    char ch;
    while(cin.get(ch))
    {
        if (inSingleCmt && ch == '\n')
        {
            inSingleCmt = false;
        }
        else if (inString && ch == '"')
        {
            inString = false;
        }
        else if (inMultiCmt && ch == '*' && cin.peek() == '/')
        {
            inMultiCmt = false;
            cin.get(ch);
        }
        else if (inString && ch == '\\' && cin.peek() == '"')
        {
            cout.put(ch);
            cin.get(ch);
        }
        else if (!inString && !inSingleCmt && !inMultiCmt)
        {
            if (ch == '"')
            {
                inString = true;
            }
            else if (ch == '/' && cin.peek() == '*')
            {
                inMultiCmt = true;
            }
            else if (ch == '/' && cin.peek() == '/')
            {
                inSingleCmt = true;
            }
        }
        if(cin && !inSingleCmt && !inMultiCmt)
        {
        cout.put(ch);
        }
    }
}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    //cout << "Student testing" << endl;
    strip();
    return 0;
}