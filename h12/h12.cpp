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
        if ((ch == ' ') && (cin.peek() == ' '))
        {
            cin.get(ch);
        }
        else if ((ch == ' ') && (isdigit(cin.peek())))
        {
            break;
        }
        cout.put(ch);
        double total = 0.0;
        while (ch != '\\' && cin.peek() != 'n')
        {
            if (isdigit(cin.peek()))
            {
                total += 1;
            }
            else
            {
                cout.put(ch);
            }
        }
        cout.put(ch);
    }
}



//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    expense();
    return 0;
}
