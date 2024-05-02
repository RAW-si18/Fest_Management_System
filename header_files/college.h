#ifndef CHECKER_H
#define CHECKER_H

#include <bits/stdc++.h>
using namespace std;

class college
{
private:
    string category;    // engineering, medical, commerce etc.
    string address;     // Address of college
    int establish_yr;   // Established in year yyyy
    string description; // other info about college
    string name;        // Name of college

public:
    college() {}
    college(string cate, string ads, int est_yr, string descr, string n) : category(cate), address(ads), establish_yr(est_yr), description(descr), name(n) {} // constructor

    void display();
    void descr();
    void edit_str_member(string &member, const string prompt);
    void edit_name();
    void edit_description();
    void edit_category();
    void edit_address();
    void edit_est_year();
    string college_name();
};

#endif