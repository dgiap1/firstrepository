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

string STUDENT = "dgiap1";

#include "h18.h"

vector<Word> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
{
    vector<Word> results;
    while (in)
    {
        pos_type currentPos = in.tellg();
        if(currentPos == -1) {break;}

        string tempWord, newWord;
        vector<pos_type> wordPos;
        in >> tempWord >> ws;

        for (char ch : tempWord)
        {
            if (isalpha(ch) || isdigit(ch)) {newWord += tolower(ch);}
        }

        bool flag = false;
        for (auto& e : results)
        {
            if (newWord == e.word)
            {
                flag = true;
                e.positions.push_back(currentPos);
                break;
            }
        }
        if (flag) {continue;}

        for (auto& e : excluded)
        {
            if (newWord == e)
            {
                flag = true;
                break;
            }
        }
        if (flag) {continue;}

        for (auto& e : dictionary)
        {
            if (newWord == e)
            {
                flag = true;
                break;
            }
        }
        if (flag) {continue;}
        Word misspelled = {newWord, wordPos};
        results.push_back(misspelled);
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
    vector<string> dictionary = fileToWords("words");
    vector<string> ignore = fileToWords("excluded.txt");
    istringstream words("Now is the tyme for all good studunts to "
        "come to the aiid of their ai!id classmaates.");
    vector<Word> misspelled = spellCheck(words, dictionary, ignore);
    cout << "Misspelled words" << endl;
    int i{1};
    for (const auto& e : misspelled)
    {
        cout << setw(4) << i++ << ". " << e.word << ", [ ";
        for (auto pos : e.positions)
            cout << pos << " ";
        cout << "]" << endl;
    }

    return 0;
}