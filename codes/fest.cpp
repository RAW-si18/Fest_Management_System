#include <bits/stdc++.h>
#ifndef EVENT_H
#define EVENT_H
using namespace std;

class event
{
private:
    string name;              // name of the event
    string date;              // date of the event
    string time;              // time of the event
    string venue;             // venue of the event
    string description;       // description of the event
    string rules;             // rules of the event
    string registration_info; // info about registration
    string contact_info;      // info about contact details
    string entry_fees;        // entry fees for the event

protected:
public:
    event(string name1, string date1, string time1, string venue1, string description1, string rules1, string registration_info1, string contact_info1, string entry_fees1)
    {
        string name = name1;
        string date = date1;
        string time = time1;
        string venue = venue1;
        string description = description1;
        string rules = rules1;
        string registration_info = registration_info1;
        string contact_info = contact_info1;
        string entry_fees = entry_fees1;
    }
};

class fest
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

public:
    // parametrized constructor
    fest(string name1, string description1, string date1, string entry_fees1, string drive_link1, string insta_link1, string twitter_link1, string website_link1)
    {
        name = name1;
        description = description1;
        date = date1;
        entry_fees = entry_fees1;
        drive_link = drive_link1;
        insta_link = insta_link1;
        twitter_link = twitter_link1;
        website_link = website_link1;
    }

    void edit_name(string name1) // function to edit name
    {
        name = name1;
    }

    void edit_description(string description1) // function to edit description
    {
        description = description1;
    }
    void edit_date(string date1) // function to edit date
    {
        date = date1;
    }
    void edit_entry_fees(string entry_fees1) // function to edit entry fees
    {
        entry_fees = entry_fees1;
    }
    void edit_drive_link(string drive_link1) // function to edit drive link
    {
        drive_link = drive_link1;
    }
    void edit_insta_link(string insta_link1) // function to edit insta link
    {
        insta_link = insta_link1;
    }
    void edit_twitter_link(string twitter_link1) // function to edit twitter link
    {
        twitter_link = twitter_link1;
    }
    void edit_website_link(string website_link1) // function to edit website link
    {
        website_link = website_link1;
    }

    void display_details()
    {
        cout << "" << endl;
    }

    void add_event() // function to add a event
    {

        string event_name, event_date, event_time, event_venue, event_description, event_rules, event_registration_info, event_contact_info, event_entry_fees;

        cout << "Enter the event name you want to enter" << endl;
        cin>>event_name;
        cout<<"Enter event date"<<endl;
        cin>>event_date;
        cout<<"Enter event time"<<endl;
        cin>>event_time;
        cout<<"Enter event venue"<<endl;
        cin>>event_venue;
        cout<<"Enter event description"<<endl;
        cin>>event_description;
        cout<<"Enter event rules"<<endl;
        cin>>event_rules;
        cout<<"Enter event registration info"<<endl;
        cin>>event_registration_info;
        cout<<"Enter event contact info"<<endl;
        cin>>event_contact_info;
        cout<<"Enter event entry fees"<<endl;
        cin>>event_entry_fees;
        event e1(event_name, event_date, event_time, event_venue, event_description, event_rules, event_registration_info, event_contact_info, event_entry_fees);
        events.push_back(e1);
        

    }
};
#endif
