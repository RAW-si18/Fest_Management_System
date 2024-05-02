#ifndef FEST_H
#define FEST_H

#include <bits/stdc++.h>
#include "../header_files/college.h"
#include "../header_files/sponsor.h"
using namespace std;

class fest : public college, public Sponsor
{
private:
    string name;        // Name of the fest
    string description; // Description about the fest
    string date;        // Fest Dates
    string entry_fees;  // entry fees of the institute
    string drive_link;  // link of google drive for photo or videos

    // social media link
    string insta_link;
    string twitter_link;
    string website_link;

protected:
    vector<event> events;
    vector<team> teams;

public:
    // parametrized constructor
    fest(string ads, int est_yr, string n, string cate, string descr, string name4, string de1, string name1, string description1, string date1, string entry_fees1, string drive_link1, string insta_link1, string twitter_link1, string website_link1);

    // fest(string ads, int est_yr, string n, string cate,string descr,string name4,string de1,string name1, string description1, string date1, string entry_fees1, string drive_link1, string insta_link1, string twitter_link1, string website_link1)
    // {
    //      college::college(cate,ads,est_yr,descr,n);
    //      Sponsor:: Sponsor(name4,de1);

    //     name = name1;
    //     description = description1;
    //     date = date1;
    //     entry_fees = entry_fees1;
    //     drive_link = drive_link1;
    //     insta_link = insta_link1;
    //     twitter_link = twitter_link1;
    //     website_link = website_link1;
    // }
    bool is_same_name(string take);
    void edit_name(string name1);
    void edit_description(string description1);
    void edit_date(string date1);
    void edit_entry_fees(string entry_fees1);
    void edit_drive_link(string drive_link1);
    void edit_insta_link(string insta_link1);
    void edit_twitter_link(string twitter_link1);
    void edit_website_link(string website_link1);
    void display_name();
    void display_details();
    void display_events();
    void add_event();
    void edit_event(string event_name);
    void delete_event(string event_name);
    void add_team();
    void delete_team();
    void update_member_info();
    void display_teams();
    void see_members();
    void update_team_info();
};

#endif