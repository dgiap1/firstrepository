/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h13.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h13.h"

// Implement your function here
string dataSets(const string& fname)
{
    string result;
    ifstream in(fname);
    if (in.fail()) { return fname + " cannot be opened."; }
    ostringstream out;
    out << fixed << setprecision(4);
    // 3 4.5 2 9.8 7 4.5 0 4 2.7 5 3.9 0 2 3.2 4 7.1 0
    int dataset = 1;
    int repeat;
    in >> repeat;
    while (! in.fail())
    {
        double sum = 0.0;
        int count = 0;
        while (repeat != 0)
        {
            double value;
            in >> value;
            count += repeat;
            sum += repeat * value;
            in >> repeat;
        }
        // result += "data set " + to_string(dataset)
        //     + ": total values = " + to_string(count)
        //     + "\naverage value = " + to_string(sum / count)
        //     + "\n\n";
        if (dataset > 1) out << endl;
        out << "data set " << dataset << ": total values = " << count << endl
            << "average value = " << (sum / count) << endl;
        dataset++;
        in >> repeat;
    }
    result = out.str();
    return result;
}

// data set 1: total values = 9
//


///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}