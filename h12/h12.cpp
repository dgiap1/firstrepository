/**
 *  @author Derek Giap
 *  @date 09/30/2020
 *  @file h12.cpp
 */
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

// Write your function here
void expense()
{
    char ch;
    while(cin.get(ch))
    {
        if (isdigit(cin.peek()))
        {
            cout.put(ch);
        }
    }
}



//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    expense();
    return 0;
}
