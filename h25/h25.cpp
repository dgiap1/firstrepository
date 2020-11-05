/**
 *  @author Derek Giap
 *  @date 11/04/2020
 *  @file h25.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

#include "h25.h"

void reverse(char * s)
{
    //initially two temporary pointers are teken
   char * p1 = s;
   char * p2 = s;

   //moving the first pointer till null charcter found(cstring ends with null charcter)
   while(*p1 != '\0')
   {
       p1++;
   }
   //decreasing one postion back.so pointer1 is present at last charcter of the cstring
   p1--;

   while(p1 > p2)
   {
       char temp = *p2;
       *p2 = *p1;
       *p1 = temp;
       p2++;
       p1--;
   }
}

const char * findStr(const char *str1, const char *str2)
{
    if (*str2 == '\0') return str1;

    const char * result = nullptr;
    const char * beg = str1;
    while(*beg)
    {
    const char * p1 = str2;
    const char * p2 = beg;
    bool found = true;

    while(*p1 && *p2)
    {
        if(*p1 != *p2)
        {
            found = false;
            break;
        }
        p1++;
        p2++;
    }
    if(found)    return beg;
    beg++;
    }
    return result;
}

//////////////////////// STUDENT TESTING //////////////////////////

int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}