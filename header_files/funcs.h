#ifndef DISPLAY_FUNCS_H
#define DISPLAY_FUNCS_H
#pragma GCC system_header
#include <bits/stdc++.h>
#include "../header_files/fest.h"
#include "../header_files/check_condition.h"
using namespace std;

void display_fests(int i, string str);
void edit_fest(int i, string str);
void organizer();
void participant();

vector<fest> fests;

void display_fests(int i, string str)
{
    while (1)
    {

        cout << "WELCOME TO THE DETAILED INFORMATION OF " << str << "FEST" << endl;
        cout << "ENTER WHICH OF THE FOLLOWING INFORMATION YOU WANT TO SEE" << endl;
        cout << "1.EVENTS" << endl;
        cout << "2.TEAMS" << endl;
        cout << "3.TEAMS MEMBERS" << endl;
        int cho;
        // cin >> cho;
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
                cho = stoi(mychecker.s);
                break;
            }
        }

        if (cho == 1)
        {
            fests[i].display_events();
        }
        else if (cho == 2)
        {
            fests[i].display_teams();
        }
        else if (cho == 3)
        {
            fests[i].see_members();
        }
        else
            return;
    }
}

void edit_fest(int i, string str)
{
    while (1)
    {

        cout << "here we will update the information of" << str << "fest" << endl;
        cout << "ENTER ONE OF THE FOLLOWING INFORMATION" << endl;
        cout << "1.ADD EVENT" << endl;
        cout << "2.DELETE EVENT" << endl;
        cout << "3.EDIT EVENT" << endl;
        cout << "4.ADD TEAM" << endl;
        cout << "5.DELETE TEAM" << endl;
        cout << "6.EDIT TEAM" << endl;
        cout << "7.EDIT TEAM MEMBER" << endl;
        int choi;
        // cin >> choi;
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
                choi = stoi(mychecker.s);
                break;
            }
        }

        if (choi == 1)
        {
            fests[i].add_event();
        }
        else if (choi == 2)
        {
            cout << "ENTER THE NAME OF THE EVENT YOU WANT TO DELETE" << endl;
            string entered_name;
            cin >> entered_name;
            fests[i].delete_event(entered_name);
        }
        else if (choi == 3)
        {
            cout << "ENTER THE NAME OF THE EVENT YOU WANT TO EDIT" << endl;
            string entered_name;
            cin >> entered_name;
            fests[i].edit_event(entered_name);
        }
        else if (choi == 4)
        {
            fests[i].add_team();
        }
        else if (choi == 5)
        {
            fests[i].delete_team();
        }
        else if (choi == 6)
        {
            fests[i].update_team_info();
        }
        else if (choi == 7)
        {
            fests[i].update_member_info();
        }
        else
            return;
    }
}

void organizer() // changes occuring in organizer function
{
    while (1)
    {

        cout << "WELCOME TO FEST MANAGEMENT SYSTEM ORGANIZER PLAYGROUND" << endl
             << endl;
        cout << "PLEASE LET US KNOW WHAT DO YOU WANT TO ACCESS" << endl
             << endl;
        cout << "PRESS (1) IF YOU WANT TO CREATE A NEW ENTRY" << endl;
        cout << "PRESS (2) IF YOU WANT TO VIEW THE DETAILS OF AN ENTRY ALREADY REGISTERED " << endl;
        cout << "PRESS (3) IF YOU WANT TO UPDATE THE DETAILS REGARDING ANY OF THE ENTRY" << endl;
        cout << "PRESS (4) IF YOU WANT TO VIEW THE DETAILED INFORMATION REGARDING ANY OF THE ENTRY" << endl;
        cout << "PRESS (5) TO UPDATE THE DETAILED INFORMATION REGARDING THE ENTRY" << endl;
        cout << "PRESS ANY OTHER KEY IF YOU WANT TO RETURN TO THE MAIN MENU" << endl;
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

        string ads;
        int est_yr;
        string n;
        string cate;
        string descr;
        string name4;
        string de1;
        string name1;
        string description1;
        string date1;
        string entry_fees1;
        string drive_link1;
        string insta_link1;
        string twitter_link1;
        string website_link1;

        if (choice == 1)
        {

            cout << "TO DO ENTRY OF A FEST ENTER THE FOLLOWING DETAILS..." << endl;
            cout << "Enter the address of the college" << endl;
            cin.ignore();
            // getline(cin,ads);
            while (1)
            {
                getline(cin, ads);
                if (mychecker.Enter(ads))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
            }

            cout << "Enter the establishment year" << endl;
            // cin >> est_yr;

            while (1)
            {
                getline(cin, mychecker.s);
                if (!mychecker.checkvalidYear(mychecker.s))
                {
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
                }
                else
                {
                    est_yr = stoi(mychecker.s);
                    break;
                }
            }
            cout << "Enter the name of the college" << endl;
            while (1)
            {
                getline(cin, n);
                if (mychecker.Enter(n))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
            }

            cout << "Enter the category of the college" << endl;
            while (1)
            {
                getline(cin, cate);
                if (mychecker.Enter(cate))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
            }

            cout << "Enter the description of the college" << endl;
            while (1)
            {
                getline(cin, descr);
                if (mychecker.Enter(descr))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
            }

            cout << "Enter the title sponsor" << endl;
            while (1)
            {
                getline(cin, name4);
                if (mychecker.Enter(name4))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
            }

            cout << "Enter the description of the title sponsor" << endl;
            while (1)
            {
                getline(cin, de1);
                if (mychecker.Enter(de1))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
            }

            cout << "Enter the name of the fest" << endl;
            while (1)
            {
                getline(cin, name1);
                if (mychecker.Enter(name1))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n ";
            }
            cout << "Enter the description of the fest" << endl;
            while (1)
            {
                getline(cin, description1);
                if (mychecker.Enter(description1))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
            }

            cout << "Enter the date of the fest(in DD-MM-YYYY)" << endl;
            while (1)
            {
                getline(cin, date1);

                if (date1.size() != 10 || date1[2] != '-' || date1[5] != '-')
                {
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
                    continue;
                }

                int day, month, year;
                if (mychecker.parseDate(date1, day, month, year))
                {
                    if (mychecker.isValidDate(day, month, year))
                        break;
                    else
                        cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                             << "PLEASE RE-ENTER A VALID INPUT \n";
                }
                else
                {
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT \n";
                    continue;
                }
            }

            cout << "Enter the entry fees of the fest (in Rs.)" << endl;
            // cin >> entry_fees1;
            while (1)
            {
                getline(cin, mychecker.s);
                if (!mychecker.checkFee(mychecker.s) || !mychecker.Enter(mychecker.s))
                {
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT ";
                }
                else
                {
                    entry_fees1 = (mychecker.s);
                    break;
                }
            }

            cout << "Enter the drive link of the fest" << endl;
            while (1)
            {
                getline(cin, drive_link1);
                if (mychecker.Enter(drive_link1) && mychecker.checklink(drive_link1))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT ";
            }
            cout << "Enter the instagram link of the fest" << endl;
            while (1)
            {
                getline(cin, insta_link1);
                if (mychecker.Enter(insta_link1))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT ";
            }
            cout << "Enter the twitter link of the fest" << endl;
            while (1)
            {
                getline(cin, twitter_link1);
                if (mychecker.Enter(twitter_link1) && mychecker.checklink(twitter_link1))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT ";
            }
            cout << "Rnter the website link of the fest" << endl;
            while (1)
            {
                getline(cin, website_link1);
                if (mychecker.Enter(website_link1) && mychecker.checklink(website_link1))
                    break;
                else
                    cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                         << "PLEASE RE-ENTER A VALID INPUT ";
            }
            // fest f1("morena link road,gwalior", 1997, "iiitm", "trash", "college_of_national_importance", "CocoCola", "nothing", "aurora", "largest_cultural_fest_of_central_india", "16/02/2024", "700", "www.google.com", "www.instagram.com", "www.twitter.com", "www.aurora.com");
            fest f1(ads, est_yr, n, cate, descr, name4, de1, name1, description1, date1, entry_fees1, drive_link1, insta_link1, twitter_link1, website_link1);
            fests.push_back(f1);
        }
        else if (choice == 2)
        {
            cout << "Enter the name of the fest you want to see detail of" << endl;
            cin.ignore();
            string ent_name;
            getline(cin, ent_name);

            int i = 0;
            for (; i < fests.size(); i++)
            {
                if (fests[i].is_same_name(ent_name))
                    break;
            }
            if (i == fests.size())
                cout << "NO SUCH FEST IS PRESENT" << endl;
            else
            {
                fests[i].display_details();
            }
        }
        else if (choice == 3)
        {
            cout << "Enter the name of the fest you want to see detail of" << endl;
            string ent_name;
            cin.ignore();
            getline(cin, ent_name);
            int i = 0;
            for (; i < fests.size(); i++)
            {
                if (fests[i].is_same_name(ent_name))
                    break;
            }
            if (i == fests.size())
                cout << "NO SUCH FEST IS PRESENT" << endl;
            else
            {
                cout << "ENTER THE VALUE YOU WANT TO COMMIT CHANGE TO" << endl;
                cout << "1.ADDRESS" << endl;
                cout << "2.ESTABLISHMENT YEAR" << endl;
                cout << "3.NAME OF COLLEGE" << endl;
                cout << "4.CATEGORY OF COLLEGE" << endl;
                cout << "5.DESCRIPTION OF COLLEGE" << endl;
                cout << "6.TITLE SPONSOR OF COLLEGE" << endl;
                cout << "7.DESCRIPTION OF TITLE SPONSOR OF COLLEGE" << endl;
                cout << "8.NAME OF THE FEST" << endl;
                cout << "9.DESCRIPTION OF THE FEST" << endl;
                cout << "10.DATE OF THE FEST" << endl;
                cout << "11.ENTRY FEES OF THE FEST" << endl;
                cout << "12.DRIVE LINK OF THE FEST" << endl;
                cout << "13.INSTAGRAM LINk OF THE FEST" << endl;
                cout << "14.TWITTER LINK OF THE FEST" << endl;
                cout << "15.WEBSITE LINK OF THE FEST" << endl;
                int choice;
                // cin >> choice;
                while (1)
                {
                    cin >> mychecker.s;
                    if (!mychecker.checkInt(mychecker.s))
                    {
                        cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                             << "PLEASE RE-ENTER A VALID INPUT ";
                    }
                    else
                    {
                        choice = stoi(mychecker.s);
                        break;
                    }
                }
                if (choice == 1)
                {
                    fests[i].edit_address();
                }
                else if (choice == 2)
                {
                    fests[i].edit_est_year();
                }
                else if (choice == 3)
                {
                    fests[i].college::edit_name();
                }
                else if (choice == 4)
                {
                    fests[i].college::edit_category();
                }
                else if (choice == 5)
                {
                    fests[i].college::edit_description();
                }
                else if (choice == 6)
                {
                    cout << "CANT BE CHANGED" << endl;
                }
                else if (choice == 7)
                {
                    cout << "CANT BE CHANGED" << endl;
                }
                else if (choice == 8)
                {
                    cout << "CANT BE CHANGED";
                }
                else if (choice == 9)
                {
                    cout << "Enter new description" << endl;
                    string s;
                    getline(cin, s);
                    cin.ignore();
                    fests[i].edit_description(s);
                }
                else if (choice == 10)
                {
                    cout << "Enter new date" << endl;
                    getline(cin, mychecker.s);
                    cin.ignore();
                    fests[i].edit_date(mychecker.s);
                }
                else if (choice == 11)
                {
                    cout << "Enter new entry fees" << endl;
                    string s;
                    // cin >> s;
                    while (1)
                    {
                        string x;
                        getline(cin, x);
                        cin.ignore();
                        if (!mychecker.checkFloat(mychecker.s))
                        {
                            cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                                 << "PLEASE RE-ENTER A VALID INPUT ";
                        }
                        else
                        {
                            mychecker.s = (x);
                            break;
                        }
                    }
                    fests[i].edit_entry_fees(mychecker.s);
                }
                else if (choice == 12)
                {
                    cout << "Enter new drive link" << endl;
                    string s;
                    getline(cin, s);
                    cin.ignore();
                    fests[i].edit_drive_link(s);
                }
                else if (choice == 13)
                {
                    cout << "Enter new intagram link" << endl;
                    string s;
                    getline(cin, s);
                    cin.ignore();
                    fests[i].edit_insta_link(s);
                }
                else if (choice == 14)
                {
                    cout << "Enter new twitter link" << endl;
                    string s;
                    getline(cin, s);
                    cin.ignore();
                    fests[i].edit_twitter_link(s);
                }
                else if (choice == 15)
                {
                    cout << "Enter new website link" << endl;
                    string s;
                    getline(cin, s);
                    cin.ignore();
                    fests[i].edit_website_link(s);
                }
            }
        }
        else if (choice == 4)
        {
            cout << "Enter the name of the fest you want to see detailed information of" << endl;
            string tt;
            cin.ignore();
            getline(cin, tt);
            int i;
            for (i = 0; i < fests.size(); i++)
            {
                if (fests[i].is_same_name(tt))
                    break;
            }
            if (i == fests.size())
                cout << "NO SUCH FEST IS THERE" << endl;
            else
                display_fests(i, tt);
        }
        else if (choice == 5)
        {
            cout << "Enter the name of the fest you want to update detailed information about" << endl;
            string tt;
            cin.ignore();
            getline(cin, tt);
            int i;
            for (i = 0; i < fests.size(); i++)
            {
                if (fests[i].is_same_name(tt))
                    break;
            }
            if (i == fests.size())
                cout << "NO SUCH FEST IS THERE" << endl;
            else
                edit_fest(i, tt);
        }
        else
            return;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
}

void participant()
{
    while (1)
    {

        cout << "WELCOME TO FEST MANAGEMENT SYSTEM PARTICIPANT PLAYGROUND" << endl;
        cout << "WHICH OF THE FOLLOWING WOULD YOU LIKE TO DO" << endl;
        cout << "1.VIEW THE DETAILS OF ALREADY ENTERED FEST" << endl;
        cout << "2.VIEW DETAILED INFORMATION OF THE FEST" << endl;
        int choice;
        // cin >> choice;
        checker mychecker;
        while (1)
        {
            cin >> mychecker.s;
            if (!mychecker.checkInt(mychecker.s))
            {
                cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                     << "PLEASE RE-ENTER A VALID INPUT ";
            }
            else
            {
                choice = stoi(mychecker.s);
                break;
            }
        }
        if (choice == 1)
        {
            cout << "Enter the name of the fest you want to see detail of" << endl;
            string ent_name;
            cin >> ent_name;
            int i = 0;
            for (; i < fests.size(); i++)
            {
                if (fests[i].is_same_name(ent_name))
                    break;
            }
            if (i == fests.size())
                cout << "NO SUCH FEST IS PRESENT" << endl;
            else
            {
                fests[i].display_details();
            }
        }
        else if (choice == 2)
        {
            cout << "Enter the name of the fest you want to see detailed information of" << endl;
            string tt;
            cin >> tt;
            int i;
            for (i = 0; i < fests.size(); i++)
            {
                if (fests[i].is_same_name(tt))
                    break;
            }
            if (i == fests.size())
                cout << "NO SUCH FEST IS THERE" << endl;
            else
                display_fests(i, tt);
        }
        else
            return;
    }
}

#endif
