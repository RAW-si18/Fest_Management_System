#ifndef TEAM_H
#define TEAM_H

#include <bits/stdc++.h>
using namespace std;

class team
{
    string team_name;
    string team_description;
    string team_head;
    vector<string> team_members_name;
    vector<string> team_members_age;
    vector<string> team_members_rollno;
    vector<string> team_members_mobile_number;

public:
    team(string team_name1, string team_description1, string team_head1, string head_age, string head_rollno, string head_mobile_number);

    void change_des(string ndes);
    void add_member(string member_head1, string member_age, string member_rollno, string member_mobile_number);
    void delete_member(string mrollno);
    bool same_name(string na);
    void display_team_info();
    void display_member_details();
    void update_member(string mrollno);
};

#endif
