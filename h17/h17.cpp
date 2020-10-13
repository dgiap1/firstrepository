/**
 *  @author Derek Giap
 *  @date 10/13/2020
 *  @file h17.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID


#include "h17.h"

// Implement the function here
vector<string> fileToWords(const string& filename)
{
    ifstream in(filename.c_str());
    if(! in.is_open())
    {
        throw invalid_argument("Filename is Invalid.");
    }
    vector<string> results;
    string line;
    while (! in.eof())
    {
        getline(in, line);
        results.push_back(line);
    }
    return results;
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // auto v = fileToWords("excluded.txt");
    // cout << "Excluded words:" << endl;
    // for (auto e : v) cout << " -" << e << endl;
    return 0;
}