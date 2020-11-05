/**
 *  @author Derek Giap
 *  @date 11/04/2020
 *  @file h26.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h26.h"
/**
FlexArray& readData(istream& in, FlexArray& a)
{
    size_t pos = 0;
    a.size_ = INITIAL_CAPACITY;
    a.data_.reset(new int[INITIAL_CAPACITY]);
    while(!in.fail())
    {
        int n;
        in >> n;
        if (!in.fail())
        {
            a.data_[pos] = n;
            pos++;
            if (pos + 1 == a.size_)
            {
                unique_ptr<int[]> newData(new int[a.size_ * 2]);
                for (size_t i = 0; i < a.size_; i++)
                {
                    newData[i] = a.data_[i];
                }
                a.data_.reset(newData.release());
                a.size_* = 2;
            }
        }
    }
    a.size_ = pos;
    unique_ptr<int[]> newData(new int[a.size_]);
    for (size_t i = 0; i < a.size_; i++)
    {
        newData[i] = a.data_[i];
    }
    a.data_.reset(newData.release());
    return a;
}

string toString(const FlexArray* a)
{
    ostringstream result;
    result << "{";
    for (size_t i = 0; i < a.size_; i++)
    {
        result << a.data_[i];
        if (i < a.size_ - 1)
        {
            result << ", ";
        }
        result << "}";
        return result.str();
    }
}
*/
FlexArray& readData(istream& in, FlexArray& a)
{
    size_t cap = INITIAL_CAPACITY;
    a.data_ = unique_ptr<int[]> (new int[cap]);
    int n = 0;
    size_t pos = 0;
    while (in >> n && cap > pos && !in.fail())
    {
        a.data_[pos++] = n;
        a.size_++;

        if(a.size_ == cap)
        {
            unique_ptr<int[]> b;
            b.reset(a.data_.release());
            a.data_ = unique_ptr<int[]>(new int[cap *= 2]);
            for(size_t i = 0; i != a.size_; i++)
                a.data_[i] = b[i];
        }
    }
    unique_ptr<int[]> b;
    b.reset(a.data_.release());
    a.data_ = unique_ptr<int[]>(new int[a.size_]);
    for(size_t i = 0; i != a.size_; i++)
    a.data_[i] = b[i];
    return a;
}

string toString(const FlexArray& a)
{
    string result = "{";
    if(a.size_ > 0)     result += to_string(a.data_[0]);
    for(size_t i = 1; i < a.size_; i++)
    {
        result += ", " + to_string(a.data_[i]);
    }
    return result + "}";
}

//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    // istringstream in("8 9 Q 4 5");
    // FlexArray a;
    // in >> a;
    // cout << "a->" << a << endl;
    return 0;
}