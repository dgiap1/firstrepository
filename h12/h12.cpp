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
    while(cin.get(ch) && cin.peek())
    {
        if (ch == ' ' && cin.peek() == ' ')
        {
            continue;
        }
        else if (isdigit(ch))
        {
            cin.unget();
            break;
        }
        else if (ch != ' ' && isdigit(cin.peek()))
        {
            continue;
        }
        else
        {
            cout << ch;
        }
    }
    cout << ", ";

    double total = 0.0;
    double nextChar = 0.0;
    while(cin.get(ch))
    {
        if(isdigit(cin.peek()))
        {
            cin.unget();
            cin >> nextChar;
            total += nextChar;
        }
    }
    cout << fixed << setprecision(2) << total << "\n";
}


//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    expense();
    return 0;
}
