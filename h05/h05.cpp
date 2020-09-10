/**
 *  @author Derek Giap
 *  @date 09/10/2020
 *  @file h05.cpp
 */
#include <string>
using namespace std;

string STUDENT = "dgiap1";  // Add your Canvas login name

string toFrenchGender(const string& country)
{
    string vowels = "AEIOU";
    string prefix = "";
    string islands = "iles";

    string plain = "Israel, Madagascar, Singapore, Sri Lanka, Monaco, Cuba, Cyprus";
    string masculine = "Belize, Cambodge, Honduras, Mexique, Mozambique, Costa Rica, Zimbabwe";

    int len = country.length();
    string first = country.substr(0, 1);
    string last = country.substr(len - 2);
    string lastChar = country.substr(len - 1);

    if (masculine.find(country) != string::npos)
    {
        prefix = "le ";
    }
    else if (plain.find(country) != string::npos)
    {
        prefix = "";
    }
    else if (country.substr(0, 4) == islands || last == "es" || last == "is" || last == "os" || last == "as")
    {
        prefix = "les ";
    }
    else if (lastChar == "e" || lastChar == "o")
    {
        if (vowels.find(first) != string::npos)
        {
            prefix = "l'";
        }
        else
        {
            prefix = "la ";
        }
    }
    else
    {
        prefix = "le ";
    }

    string result = prefix + country;
    return result;
}


/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
