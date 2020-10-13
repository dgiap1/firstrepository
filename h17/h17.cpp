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

    ifstream in(filename);                                  // Open an input file, using the file name
    if(! in.is_open())                                      // If it can't be opened Then
    {
        throw invalid_argument("Exception: Invalid File");  // Throw invalid_argument exception
    }
    vector<string> results;                                 // Create an empty vector of string (results)
    string line;
    while (getline(in, line))                                      // Read the input until end of file (getline)
    {
        results.push_back(line);                            // Store each word in the vector (push_back)
    }
    return results;                                         // Return the results vector
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