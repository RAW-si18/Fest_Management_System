#include <bits/stdc++.h>
#include "../header_files/college.h"
#include "../header_files/sponsor.h"
#include "../header_files/fest.h"
#include "../header_files/event.h"
#include "../header_files/check_condition.h"
#include "../header_files/team.h"
using namespace std;

// parametrized constructor
fest::fest(string ads, int est_yr, string n, string cate, string descr, string name4, string de1, string name1, string description1, string date1, string entry_fees1, string drive_link1, string insta_link1, string twitter_link1, string website_link1)
    : college(cate, ads, est_yr, descr, n),
      Sponsor(name4, de1),
      name(name1),
      description(description1),
      date(date1),
      entry_fees(entry_fees1),
      drive_link(drive_link1),
      insta_link(insta_link1),
      twitter_link(twitter_link1),
      website_link(website_link1)
{
}

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

bool fest::is_same_name(string take)
{
    if (take == name)
        return true;
    return false;
}

void fest::edit_name(string name1) // function to edit name
{
    name = name1;
}

void fest::edit_description(string description1) // function to edit description
{
    description = description1;
}

void fest::edit_date(string date1) // function to edit date
{
    date = date1;
}

void fest::edit_entry_fees(string entry_fees1) // function to edit entry fees
{
    entry_fees = entry_fees1;
}

void fest::edit_drive_link(string drive_link1) // function to edit drive link
{
    drive_link = drive_link1;
}

void fest::edit_insta_link(string insta_link1) // function to edit insta link
{
    insta_link = insta_link1;
}

void fest::edit_twitter_link(string twitter_link1) // function to edit twitter link
{
    twitter_link = twitter_link1;
}

void fest::edit_website_link(string website_link1) // function to edit website link
{
    website_link = website_link1;
}

void fest::display_name() // function to display fest name
{
    cout << name << endl;
}

void fest::display_details() // function to display all the details of the fest
{
    college::display();
    college::descr();
    Sponsor::display_sponsor_details();
    cout << "Fest details are as follows:" << endl;
    cout << "Name:                             " << name << endl;
    cout << "Date:                             " << date << endl;
    cout << "Description:                      " << description << endl;
    cout << "Entry Fees:                       " << entry_fees << endl;
    cout << "Drive Link:                       " << drive_link << endl;
    cout << "Insta Link                        " << insta_link << endl;
    cout << "Twitter Link:                     " << twitter_link << endl;
    cout << "Website Link:                     " << website_link << endl;
}

void fest::display_events()
{
    if (events.size() > 0)
    {
        cout << "The following are the list of events going to happen in our fest" << endl;
        for (int i = 0; i < events.size(); i++)
        {
            cout << i + 1 << ".";
            events[i].display_name();
            cout << endl;
        }
        cout << "Enter the event of which you wnat to know detail information" << endl;
        string ev;
        cin >> ev;
        int i;
        for (i = 0; i < events.size(); i++)
        {
            if (events[i].same_name(ev) == true)
                break;
        }
        if (i == events.size())
            cout << "No such event is present." << endl;
        else
            events[i].display_details();
    }
}

void fest::add_event() // function to add a event
{

    string event_name, event_date, event_time, event_venue, event_description, event_rules, event_registration_info, event_contact_info, event_entry_fees;

    cout << "Enter the event name you want to enter" << endl;
    cin >> event_name;
    cout << "Enter event date" << endl;
    cin >> event_date; // Date
    cout << "Enter event time" << endl;
    cin >> event_time; // Time
    cout << "Enter event venue" << endl;
    cin >> event_venue;
    cout << "Enter event description" << endl;
    cin >> event_description;
    cout << "Enter event rules" << endl;
    cin >> event_rules;
    cout << "Enter event registration info" << endl;
    cin >> event_registration_info;
    cout << "Enter event contact info" << endl;
    cin >> event_contact_info;
    cout << "Enter event entry fees" << endl;
    // cin >> event_entry_fees;
    checker mychecker;
    while (1)
    {
        cin >> mychecker.s;
        if (!mychecker.checkFloat(mychecker.s))
        {
            cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                 << "PLEASE RE-ENTER A VALID INPUT " << endl;
        }
        else
        {
            event_entry_fees = (mychecker.s);
            break;
        }
    }
    event e1(event_name, event_date, event_time, event_venue, event_description, event_rules, event_registration_info, event_contact_info, event_entry_fees);
    events.push_back(e1);
}

void fest::edit_event(string event_name)
{
    int i;
    for (i = 0; i < events.size(); i++)
    {
        if (events[i].same_name(event_name) == true)
            break;
    }
    if (i == events.size())
        cout << "No such event is present." << endl;
    else
    {
        cout << "Enter the value you want to change" << endl;

        cout << "1.Date" << endl;
        cout << "2.Time" << endl;
        cout << "3.Venue" << endl;
        cout << "4.Description" << endl;
        cout << "5.Rules" << endl;
        cout << "6.Registration Information" << endl;
        cout << "7.Contact Information" << endl;
        cout << "8.Entry Fees" << endl;
        cout << "Any Other number for no change" << endl;
        int choice;
        // cin >> choice;
        checker mychecker;
        while (1)
        {
            cin >> mychecker.s;
            if (!mychecker.checkInt(mychecker.s))
            {
                cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                     << "PLEASE RE-ENTER A VALID INPUT " << endl;
            }
            else
            {
                choice = stoi(mychecker.s);
                break;
            }
        }

        string input;
        switch (choice)
        {

        case 1:
            cout << "Enter Date" << endl;
            cin >> input;
            events[i].edit_date(input);
            break;
        case 2:
            cout << "Enter Time" << endl;
            cin >> input;
            events[i].edit_time(input);
            break;
        case 3:
            cout << "Enter Venue" << endl;
            cin >> input;
            events[i].edit_venue(input);
            break;
        case 4:
            cout << "Enter Description" << endl;
            cin >> input;
            events[i].edit_description(input);
            break;
        case 5:
            cout << "Enter Rules" << endl;
            cin >> input;
            events[i].edit_rules(input);
            break;
        case 6:
            cout << "Enter Registration Information" << endl;
            cin >> input;
            events[i].edit_registration_info(input);
            break;
        case 7:
            cout << "Enter Contact Information" << endl;
            cin >> input;
            events[i].edit_contact_info(input);
            break;
        case 8:
            cout << "Enter Entry Fees" << endl;
            // cin >> input;
            while (1)
            {
                cin >> mychecker.s;
                if (!mychecker.checkFloat(mychecker.s))
                {
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT " << endl;
                }
                else
                {
                    input = (mychecker.s);
                    break;
                }
            }
            events[i].edit_entry_fees(input);
            break;
        default:
            break;
        }
    }
}

void fest::delete_event(string event_name)
{
    int i;
    for (i = 0; i < events.size(); i++)
    {
        if (events[i].same_name(event_name) == true)
            break;
    }
    if (i == events.size())
        cout << "No such event is present at the first place." << endl;
    else
    {
        events.erase(events.begin() + i);
    }
}

void fest::add_team()
{
    string tname;
    string tdes;
    string thead;
    string hage;
    string hmobile_number;
    string hroll_no;
    cout << "Enter name of the team" << endl;
    cin >> tname;
    cout << "Enter description of the team" << endl;
    cin >> tdes;
    cout << "Enter name of head" << endl;
    cin >> thead;
    cout << "Enter age of head" << endl;
    // cin >> hage;

    checker mychecker;
    while (1)
    {
        cin >> mychecker.s;
        if (!mychecker.checkInt(mychecker.s))
        {
            cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                 << "PLEASE RE-ENTER A VALID INPUT " << endl;
        }
        else
        {
            hage = (mychecker.s);
            break;
        }
    }

    cout << "Enter roll number of head" << endl;
    cin >> hroll_no;

    cout << "Enter mobile number of head" << endl;
    // cin >> hmobile_number;

    while (1)
    {
        cin >> mychecker.s;
        if (!mychecker.checkInt(mychecker.s))
        {
            cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                 << "PLEASE RE-ENTER A VALID INPUT " << endl;
        }
        else
        {
            hmobile_number = (mychecker.s);
            break;
        }
    }

    team newteam(tname, tdes, thead, hage, hroll_no, hmobile_number);
    teams.push_back(newteam);
}

void fest::update_team_info()
{
    cout << "Enter team name you want to change info of" << endl;
    string temp;
    cin >> temp;
    int i = 0;
    for (; i < teams.size(); i++)
    {
        if (teams[i].same_name(temp) == true)
            break;
    }
    if (i == teams.size())
        cout << "INVALID NAME" << endl;
    else
    {
        cout << "Enter the new description" << endl;
        cin >> temp;
        teams[i].change_des(temp);
    }
}

void fest::delete_team()
{
    cout << "Enter team name you want to delete " << endl;
    string temp;
    cin >> temp;
    int i = 0;
    for (; i < teams.size(); i++)
    {
        if (teams[i].same_name(temp) == true)
            break;
    }
    if (i == teams.size())
        cout << "INVALID NAME" << endl;
    else
    {
        teams.erase(teams.begin() + i);
    }
}

void fest::update_member_info()
{
    cout << "Enter the name of the team you want to change member info of" << endl;
    string temp;
    cin >> temp;
    int i = 0;
    for (; i < teams.size(); i++)
    {
        if (teams[i].same_name(temp) == true)
            break;
    }
    if (i == teams.size())
        cout << "INVALID NAME" << endl;
    else
    {
        cout << "Enter the roll no of the student" << endl;
        cin >> temp;
        teams[i].update_member(temp);
    }
}

void fest::display_teams()
{
    if (teams.size() == 0)
        cout << "THERE IS NO TEAM YET" << endl;
    else
    {
        for (int i = 0; i < teams.size(); i++)
        {
            teams[i].display_team_info();
        }
        cout << "Enter the name of the team you want to see members of.." << endl;
        string st;
        cin >> st;
        int i;
        for (i = 0; i < teams.size(); i++)
        {
            if (teams[i].same_name(st))
                break;
        }
        if (i == teams.size())
            cout << "NO SUCH TEAM IS PRESENT" << endl;
        else
            teams[i].display_member_details();
    }
}

void fest::see_members()
{
    cout << "Enter the name of the team you want to see member of...." << endl;
    string tt;
    cin >> tt;
    int i = 0;
    for (; teams.size(); i++)
    {
        if (teams[i].same_name(tt))
            ;
        break;
    }
    if (i == teams.size())
        cout << "THERE IS NO SUCH TEAM" << endl;
    else
    {
        teams[i].display_member_details();
    }
}
