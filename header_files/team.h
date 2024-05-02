#ifndef TEAM_H
#define TEAM_H
#pragma GCC system_header
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


team::team(string team_name1, string team_description1, string team_head1, string head_age, string head_rollno, string head_mobile_number)
{
    team_name = team_name1;
    team_description1 = team_description1;
    team_head = team_head1;
    team_members_name.push_back(team_head1);
    team_members_age.push_back(head_age);
    team_members_rollno.push_back(head_rollno);
    team_members_mobile_number.push_back(head_mobile_number);
}

void team::change_des(string ndes)
{
    team_description = ndes;
}

void team::add_member(string member_head1, string member_age, string member_rollno, string member_mobile_number)
{
    team_members_name.push_back(member_head1);
    team_members_age.push_back(member_age);
    team_members_rollno.push_back(member_rollno);
    team_members_mobile_number.push_back(member_mobile_number);
}

void team::delete_member(string mrollno)
{
    int i = 0;
    for (; i < team_members_name.size(); i++)
    {
        if (team_members_rollno[i] == mrollno)
            break;
    }
    if (i == team_members_name.size())
    {
        cout << "No such member is present in the team" << endl;
    }
    else
    {
        team_members_age.erase(team_members_age.begin() + i);
        team_members_name.erase(team_members_name.begin() + i);
        team_members_rollno.erase(team_members_rollno.begin() + i);
        team_members_mobile_number.erase(team_members_mobile_number.begin() + i);
    }
}

bool team::same_name(string na)
{
    if (na == team_name)
        return true;
    return false;
}

void team::display_team_info()
{
    cout << "Team Name: " << team_name << endl;
    cout << "Team Description: " << team_description << endl;
}

void team::display_member_details()
{
    display_team_info();
    for (int i = 0; i < team_members_name.size(); i++)
    {
        cout << i + 1 << ".\t" << team_members_name[i] << "\t" << team_members_rollno[i] << "\t" << team_members_mobile_number[i] << "\t" << team_members_age[i] << endl;
    }
}

void team::update_member(string mrollno)
{
    int i = 0;
    for (; i < team_members_name.size(); i++)
    {
        if (team_members_rollno[i] == mrollno)
            break;
    }
    if (i == team_members_name.size())
    {
        cout << "No such member is present in the team" << endl;
    }
    else
    {
        cout << "Enter the information you want to change" << endl;
        cout << "1.Name" << endl;
        cout << "2.Mobile Number" << endl;
        cout << "3.Age" << endl;
        int choice;
        cin >> choice;
        string str;
        switch (choice)
        {
        case 1:
            cout << "Enter New Name" << endl;
            cin >> str;
            if (i == 0)
                team_head = str;
            team_members_name[i] = str;
            break;
        case 2:
            cout << "Enter New Mobile Number" << endl;
            cin >> str;
            if (i == 0)
                team_members_mobile_number[i] = str;
            break;
        case 3:
            cout << "Enter New Age" << endl;
            cin >> str;
            team_members_age[i] = str;
            break;
        default:
            cout << "INVALID INPUT" << endl;
            break;
        }
    }
}

#endif
