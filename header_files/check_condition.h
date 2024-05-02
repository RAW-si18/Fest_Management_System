#ifndef CHECK_CONDITION_H
#define CHECK_CONDITION_H

#include <bits/stdc++.h>
using namespace std;

class checker
{
public:
    string s;

    bool checkInt(string &s);
    bool checkFloat(string &s);
    bool Enter(string d);
    bool checkvalidYear(string d);
    bool isLeapYear(int y);
    bool isValidDate(int day, int month, int year);
    bool parseDate(const string &date, int &day, int &month, int &year);
    bool checkFee(string s);
    bool checklink(string d);
    ~checker() {}
};

#endif