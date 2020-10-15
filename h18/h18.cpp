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

vector<Word> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
{
    bool flag = false;
    vector<Word> results; // results: vector
    while(in) // while in // not end of file
    {
        pos_type currentPosition = in.tellg(); // current-position <- in.tellg()
        if(currentPosition == -1) // if current-position is -1 (at end of file)
        {
            flag = true;
            break; // then exit the loop
        }
        
        if (flag)
        {
            continue;
        }
        
        string tempWord, word; // word: string
        vector<pos_type> wordPos;
        in >> tempWord >> ws; // read next word (in >> word >> ws)
        for (char ch : tempWord) // word <- clean(word) // lowercase, no punctuation
        {
            if (isalpha(ch) || isdigit(ch))
            {
                word += tolower(ch);
            }
        }

        for (auto& e : results) // Search results for word
        {
            if (tempWord == e.word) // If word found
            {
                flag = true;
                e.positions.push_back(currentPosition); // Then add position to element in results
                break;
            }
        }

        if (flag)
        {
            continue;
        }

        for (auto& e : excluded) // Search excluded words for word
        {
            if (tempWord == e) // If word found
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            continue;
        }

        for (auto& e : dictionary) // Search the dictionary for word
        {
            if (tempWord == e) // If word found (Not misspelled)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            continue;
        }
        Word misspelled = {tempWord, wordPos}; // Create a new word, populate with word,position
        results.push_back(misspelled); // Add new Word to results
    } // End loop
    return results; // Return results (misspelled words and their positions)
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