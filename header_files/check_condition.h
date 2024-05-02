#ifndef CHECK_CONDITION_H
#define CHECK_CONDITION_H
#pragma GCC system_header
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


bool checker::checkFloat(string &s)
{
    stringstream ss(s);
    float value;
    if (ss >> value and ss.eof())
    {
        return 1;
    }
    else
        return 0;
}

bool checker::checkInt(string &s)
{
    stringstream ss(s);
    int value;
    if (ss >> value and ss.eof())
    {
        return true;
    }
    else
        return false;
}

bool checker::Enter(string d)
{
    if (d.size() == 0)
        return false;
    for (int i = 0; i < d.size(); i++)
        if (d[i] != ' ')
            return true;
    return false;
}

bool checker::checkvalidYear(string d) // created function for valid year //
{
    if (d.size() == 0)
        return false;
    for (int i = 0; i < d.size(); i++)
        if (!isdigit(d[i]))
            return false;
    if (d.size() > 4)
        return false;
    for (int i = 0; i < d.length(); i++)
    {
        if (d[i] < '0' || d[i] > '9')
            return false;
    }
    int date = stoi(d);
    if (date > 2024 || date < 0)
        return false;
    return true;
}

bool checker::isLeapYear(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

bool checker::isValidDate(int day, int month, int year)
{
    if (year < 0 || month < 1 || month > 12 || day < 1)
        return false;

    int maxDays = 31; // By default, set the maximum days to 31

    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        maxDays = 30;
        break;
    case 2:
        maxDays = (isLeapYear(year)) ? 29 : 28;
        break;
    }

    return (day <= maxDays);
}

bool checker::parseDate(const string &date, int &day, int &month, int &year)
{
    stringstream ss(date);
    char discard; // To discard '-'
    if (!(ss >> day >> discard >> month >> discard >> year))
    {
        return false;
    }
    return ss.eof(); // Check if there's no extra characters after parsing
}

bool checker::checkFee(string s)
{
    bool dot = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            if (dot)
                return false;
            dot = true;
            continue;
        }

        if (s[i] < '0' || s[i] > '9')
        {
            return false;
        }
    }
    return true;
}

bool checker::checklink(string d)
{
    if (d.size() < 17)
        return false;
    if (d[0] != 'h' || d[1] != 't' || d[2] != 't' || d[3] != 'p' || d[4] != 's' || d[5] != ':' || d[6] != '/' || d[7] != '/')
        return false;
    for (int i = 0; i < d.size() - 3; i++)
    {
        if (d[i] == '.' || d[i + 1] == 'c' || d[i + 2] == 'o' || d[i + 3] == 'm')
            return true;
    }
    return false;
}

#endif