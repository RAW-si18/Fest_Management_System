#ifndef SPONSOR_H
#define SPONSOR_H

#include <bits/stdc++.h>
using namespace std;

class Sponsor
{
private:
    string name;
    string description;
    int id;
    // static int next_id;

public:
    Sponsor() {}
    Sponsor(string name, string description) {}

    void display_sponsor_details();
    pair<int, string> return_sponsor() const;
    void edit_str_member(string &member, const string &prompt);
    void edit_name();
    void edit_description();
};

#endif