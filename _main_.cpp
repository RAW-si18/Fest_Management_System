#include <bits/stdc++.h>
#include "./header_files/event.h"
#include "./header_files/fest.h"
#include "./header_files/college.h"
#include "./header_files/team.h"
#include "./header_files/check_condition.h"
#include "./header_files/funcs.h"

using namespace std;

// Run below code
int main()
{

    // fest(string ads, int est_yr, string n, string cate,string descr,string name4,string de1,string name1, string description1, string date1, string entry_fees1, string drive_link1, string insta_link1, string twitter_link1, string website_link1)
    // fest f1("morena link road,gwalior", 1997, "iiitm", "trash", "college_of_national_importance", "CocoCola", "nothing", "aurora", "largest_cultural_fest_of_central_india", "16/02/2024", "700", "www.google.com", "www.instagram.com", "www.twitter.com", "www.aurora.com");
    // f1.display_details();
    while (1)
    {

        cout << "                     _WELCOME TO FEST MANAGEMENT SYSTEM_                   " << endl
             << endl;
        cout << "                      SELECT WHOM ARE YOU REPRESENTING                     " << endl
             << endl;
        cout << "                      PRESS (1) IF YOU ARE REPRESENTING AN ORGANIZER                    " << endl
             << endl;
        cout << "                      PRESS (2) IF YOU ARE REPRESENTING A PARTICIPANT                  " << endl;
        int cho;
        // cin >> cho;
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
                cho = stoi(mychecker.s);
                break;
            }
        }
        if (cho == 1)
        {
            organizer();
        }
        else if (cho == 2)
        {
            participant();
        }
        else
        {
            cout << "INVALID INPUT" << endl;
        }
    }
}
