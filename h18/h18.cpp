/**
 *  @author Derek Giap
 *  @date 10/13/2020
 *  @file h18.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h18.h"

// Place your function here

string clean(string& str)
{
    size_t i = 0;
    size_t len = str.length();
    while (i < len)
    {
        if (! isalpha(str[i]) || (! isdigit(str[i])) || str[i] == ' ')
        {
            str.erase(i, 1);
            len--;
        }
        else
        {
            i++;
        }
    }
    return str;
}

vector<Word> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
{
    vector<Word> results;
    while(in)
    {
        pos_type currentPosition = in.tellg();
        if(currentPosition == -1)
        {
            break;
        }
        string tempWord;
        vector<pos_type> wordPos;
        in >> tempWord >> ws;
        tempWord = clean(tempWord);
        for (auto& e : results)
        {
            if (tempWord == e.word)
            {
                e.positions.push_back(currentPosition);
                continue;
            }
        }

        for (auto& e : excluded)
        {
            if (tempWord == e)
            {
                continue;
            }
        }

        for (auto& e : dictionary)
        {
            if (tempWord == e)
            {
                continue;
            }
            Word misspelled = {tempWord, wordPos};
            results.push_back(misspelled);
        }
    }
    return results;
}


/////////////// STUDENT TESTING ////////////////////
vector<string> fileToWords(const string& filename);
#include <sstream>
#include <iomanip>
int run()
{
    cout << "Student testing" << endl;
    // vector<string> dictionary = fileToWords("words");
    // vector<string> ignore = fileToWords("excluded.txt");
    // istringstream words("Now is the tyme for all good studunts to "
    //     "come to the aiid of their ai!id classmaates.");
    // vector<Word> misspelled = spellCheck(words, dictionary, ignore);
    // cout << "Misspelled words" << endl;
    // int i{1};
    // for (const auto& e : misspelled)
    // {
    //     cout << setw(4) << i++ << ". " << e.word << ", [ ";
    //     for (auto pos : e.positions)
    //         cout << pos << " ";
    //     cout << "]" << endl;
    // }

    return 0;
}