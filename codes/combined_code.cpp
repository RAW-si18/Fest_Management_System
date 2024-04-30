#include <bits/stdc++.h>
// #include "./event.cpp"
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
    college()
    {
    }
    college(string cate, string ads, int est_yr, string descr, string n) : category(cate), address(ads), establish_yr(est_yr), description(descr), name(n) {} // constructor
    void display()
    {
        cout << "Name:                            " << name << endl
             << "Address:                         " << address << endl;
    }
    void descr()
    {
        cout << "Category:                         " << (category.empty() ? "Not Specified" : category) << endl
             << "Established in                    " << establish_yr << endl
             << "Description:" << endl;
        if (!description.empty())
        {
            cout << "    " << description << endl;
        }
        else
        {
            cout << "\tNot Specified" << endl;
        }
    }
    void edit_str_member(string& member, const string prompt)
    {
        cout << prompt;
        cin.ignore();
        getline(cin, member);
    }
    void edit_name()
    {
        int temp = 0;
        string strc;
        do
        {
            if (temp == 1)
            {
                strc = "Name of the college is empty.";
            }
            else
            {
                strc = "Editing Name of the college";
            }
            edit_str_member(name, strc + "\nEnter New Name: ");
            temp = 1;
        } while (name.empty());
    }
    void edit_description()
    {
        int temp = 0;
        string strc;
        do
        {
            if (temp == 1)
            {
                strc = "Description of the college is empty.";
            }
            else
            {
                strc = "Editing Description of the college";
            }
            edit_str_member(description, strc + "\nEnter New Description: ");
            temp = 1;
        } while (description.empty());
    }
    void edit_category()
    {
        int temp = 0;
        string strc;
        do
        {
            if (temp == 1)
            {
                strc = "Category of the college is empty.";
            }
            else
            {
                strc = "Editing Category of the college";
            }
            edit_str_member(category, strc + "\nEnter New Category: ");
            temp = 1;
        } while (category.empty());
    }
    void edit_address()
    {
        int temp = 0;
        string strc;
        do
        {
            if (temp == 1)
            {
                strc = "Address of the college is empty.";
            }
            else
            {
                strc = "Editing Address of the college";
            }
            edit_str_member(address, strc + "\nEnter New Address: ");
            temp = 1;
        } while (address.empty());
    }
    void edit_est_year()
    {
        cout << "Editing Establishment Year of College\nEnter New Est. Year (yyyy): ";
        cin >> establish_yr;
    }
    string college_name()
    {
        return name;
    }
};

class Sponsor
{
private:
    string name;
    string description;
    int id;
    // static int next_id;

public:
    Sponsor()
    {
    }
    // Constructor
    Sponsor(string name, string description)
        : name(name), description(description)
    {
    }

    // Display functions
    void display_sponsor_details()
    {
        cout << "Sponsor ID:                        " << id << endl;
        cout << "Company Name:                      " << name << endl;
        cout << "Company Description:               " << description << endl;
    }

    // Method to return id and name
    pair<int, string> return_sponsor() const
    {
        return make_pair(id, name);
    }

    void edit_str_member(string &member, const string &prompt)
    {
        cout << prompt;
        cin.ignore();
        getline(cin, member);
    }

    void edit_name()
    {
        int temp = 0;
        string strc;
        do
        {
            if (temp == 1)
            {
                strc = "Name of the company is empty.";
            }
            else
            {
                strc = "Editing Name of the company";
            }
            edit_str_member(name, strc + "\nEnter Sponsorer's New Name: ");
            temp = 1;
        } while (name.empty());
    }

    void edit_description()
    {
        int temp = 0;
        string strc;
        do
        {
            if (temp == 1)
            {
                strc = "Description of the company is empty.";
            }
            else
            {
                strc = "Editing Description of the company";
            }
            edit_str_member(description, strc + "\nEnter New Description: ");
            temp = 1;
        } while (description.empty());
    }
};

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
    team(string team_name1, string team_description1, string team_head1, string head_age, string head_rollno, string head_mobile_number)
    {
        team_name = team_name1;
        team_description1 = team_description1;
        team_head = team_head1;
        team_members_name.push_back(team_head1);
        team_members_age.push_back(head_age);
        team_members_rollno.push_back(head_rollno);
        team_members_mobile_number.push_back(head_mobile_number);
    }
    void change_des(string ndes)
    {
        team_description = ndes;
    }

    void add_member(string member_head1, string member_age, string member_rollno, string member_mobile_number)
    {
        team_members_name.push_back(member_head1);
        team_members_age.push_back(member_age);
        team_members_rollno.push_back(member_rollno);
        team_members_mobile_number.push_back(member_mobile_number);
    }
    void delete_member(string mrollno)
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
    bool same_name(string na)
    {
        if (na == team_name)
            return true;
        return false;
    }
    void display_team_info()
    {
        cout << "Team Name: " << team_name << endl;
        cout << "Team Description: " << team_description << endl;
    }
    void display_member_details()
    {
        display_team_info();
        for (int i = 0; i < team_members_name.size(); i++)
        {
            cout << i + 1 << ".\t" << team_members_name[i] << "\t" << team_members_rollno[i] << "\t" << team_members_mobile_number[i] << "\t" << team_members_age[i] << endl;
        }
    }
    void update_member(string mrollno)
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
};

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
    // parametrized constructor
    event(string name1, string date1, string time1, string venue1, string description1, string rules1, string registration_info1, string contact_info1, string entry_fees1)
    {
        name = name1;
        date = date1;
        time = time1;
        venue = venue1;
        description = description1;
        rules = rules1;
        registration_info = registration_info1;
        contact_info = contact_info1;
        entry_fees = entry_fees1;
    }
    // checking for same name
    bool same_name(string s)
    {
        if (s == name)
            return true;
        return false;
    }

    void edit_date(string s)
    {
        date = s;
    }
    void edit_time(string s)
    {
        time = s;
    }
    void edit_venue(string s)
    {
        venue = s;
    }
    void edit_description(string s)
    {
        description = s;
    }
    void edit_rules(string s)
    {
        rules = s;
    }
    void edit_registration_info(string s)
    {
        registration_info = s;
    }
    void edit_contact_info(string s)
    {
        contact_info = s;
    }
    void edit_entry_fees(string s)
    {
        entry_fees = s;
    }
    void display_name()
    {
        cout << name << endl;
    }
    void display_details()
    {
        cout << "Event details are as follows:" << endl;
        cout << "Name:                       " << name << endl;
        cout << "Date:                       " << date << endl;
        cout << "Time:                       " << time << endl;
        cout << "Venue:                      " << venue << endl;
        cout << "Description:                " << description << endl;
        cout << "Rules:                      " << rules << endl;
        cout << "Registration Information:   " << registration_info << endl;
        cout << "Contact Information:        " << contact_info << endl;
        cout << "Entry Fees:                 " << entry_fees << endl;
    }
};

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
    fest(string ads, int est_yr, string n, string cate, string descr, string name4, string de1, string name1, string description1, string date1, string entry_fees1, string drive_link1, string insta_link1, string twitter_link1, string website_link1)
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
    bool is_same_name(string take)
    {
        if (take == name)
            return true;
        return false;
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

    void display_name() // function to display fest name
    {
        cout << name << endl;
    }

    void display_details() // function to display all the details of the fest
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

    void display_events()
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

    void add_event() // function to add a event
    {

        string event_name, event_date, event_time, event_venue, event_description, event_rules, event_registration_info, event_contact_info, event_entry_fees;

        cout << "Enter the event name you want to enter" << endl;
        cin >> event_name;
        cout << "Enter event date" << endl;
        cin >> event_date;
        cout << "Enter event time" << endl;
        cin >> event_time;
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
        cin >> event_entry_fees;
        event e1(event_name, event_date, event_time, event_venue, event_description, event_rules, event_registration_info, event_contact_info, event_entry_fees);
        events.push_back(e1);
    }
    void edit_event(string event_name)
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
            cin >> choice;
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
                cin >> input;
                events[i].edit_entry_fees(input);
                break;
            default:
                break;
            }
        }
    }
    void delete_event(string event_name)
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
    void add_team()
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
        cin >> hage;
        cout << "Enter roll number of head" << endl;
        cin >> hroll_no;
        cout << "Enter mobile number of head" << endl;
        cin >> hmobile_number;

        team newteam(tname, tdes, thead, hage, hroll_no, hmobile_number);
        teams.push_back(newteam);
    }
    void update_team_info()
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
    void delete_team()
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
    void update_member_info()
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
    void display_teams()
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

    void see_members()
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
};
vector<fest> fests;
void deep_into_fest(int i, string str)
{
    while (1)
    {

        cout << "WELCOME TO THE DETAILED INFORMATION OF " << str << "FEST" << endl;
        cout << "ENTER WHICH OF THE FOLLOWING INFORMATION YOU WANT TO SEE" << endl;
        cout << "1.EVENTS" << endl;
        cout << "2.TEAMS" << endl;
        cout << "3.TEAMS MEMBERS" << endl;
        int cho;
        cin >> cho;
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
void deep_into_fest_update(int i, string str)
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
        cin >> choi;
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
void organizer()
{
    while (1)
    {

        cout << "WELCOME TO FEST MANAGEMENT SYSTEM ORGANIZER PLAYGROUND" << endl;
        cout << "WHICH OF THE FOLLOWING WOULD YOU LIKE TO DO" << endl;
        cout << "1.CREATE A NEW ENTRY OF FEST" << endl;
        cout << "2.VIEW THE DETAILS OF ALREADY ENTERED FEST" << endl;
        cout << "3.UPDATE BASIC INFORMATION OF THE FEST" << endl;
        cout << "4.VIEW DETAILED INFORMATION OF THE FEST" << endl;
        cout << "5.UPDATE DETAILED INFORMATION OF THE FEST" << endl;
        int choice;
        cin >> choice;
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
            cout << endl;
            cout << endl;
            cout << "Enter the address of the college" << endl;
            cin >> ads;
            cout << "Enter the establishment year" << endl;
            cin >> est_yr;
            cout << "Enter the name of the college" << endl;
            cin >> n;
            cout << "Enter the category of the college" << endl;
            cin >> cate;
            cout << "Enter the description of the college" << endl;
            cin >> descr;
            cout << "Enter the title sponsor" << endl;
            cin >> name4;
            cout << "Enter the description of the title sponsor" << endl;
            cin >> de1;
            cout << "Enter the name of the fest" << endl;
            cin >> name1;
            cout << "Enter the description of the fest" << endl;
            cin >> description1;
            cout << "Enter the date of the fest" << endl;
            cin >> date1;
            cout << "Enter the entry fees of the fest" << endl;
            cin >> entry_fees1;
            cout << "Enter the drive link of the fest" << endl;
            cin >> drive_link1;
            cout << "Enter the instagram link of the fest" << endl;
            cin >> insta_link1;
            cout << "Enter the twitter link of the fest" << endl;
            cin >> twitter_link1;
            cout << "Rnter the website link of the fest" << endl;
            cin >> website_link1;
            // fest f1("morena link road,gwalior", 1997, "iiitm", "trash", "college_of_national_importance", "CocoCola", "nothing", "aurora", "largest_cultural_fest_of_central_india", "16/02/2024", "700", "www.google.com", "www.instagram.com", "www.twitter.com", "www.aurora.com");
            fest f1(ads, est_yr, n, cate, descr, name4, de1, name1, description1, date1, entry_fees1, drive_link1, insta_link1, twitter_link1, website_link1);
            fests.push_back(f1);
        }
        else if (choice == 2)
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
        else if (choice == 3)
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
                cout << "ENTER THE VALUE YOU WANT TO COMMIT CHANGE TO" << endl;
                cout << "1.ADDRESS" << endl;
                cout << "2.ESTABLISHMENT YEAR" << endl;
                cout << "3.NAME OF COLLEGE" << endl;
                cout << "4.CATEGORY OF COLLEGE" << endl;
                cout << "5.DESCRIPTION OF COLLEGE" << endl;
                cout << "6.TITLE SPONSOR OF COLLEGE" << endl;
                cout << "7.DESCRIPTION OF TITLE SPONSOR OF COLLEGE" << endl;
                cout << "8.NAME OF THE FEST" << endl;
                cout << "8.DESCRIPTION OF THE FEST" << endl;
                cout << "10.DATE OF THE FEST" << endl;
                cout << "11.ENTRY FEES OF THE FEST" << endl;
                cout << "12.DRIVE LINK OF THE FEST" << endl;
                cout << "13.INSTAGRAM LINk OF THE FEST" << endl;
                cout << "14.TWITTER LINK OF THE FEST" << endl;
                cout << "15.WEBSITE LINK OF THE FEST" << endl;
                int choice;
                cin >> choice;
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
                    cout << "Enter new name" << endl;
                    string s;
                    cin >> s;

                    fests[i].edit_name(s);
                }
                else if (choice == 9)
                {
                    cout << "Enter new description" << endl;
                    string s;
                    cin >> s;
                    fests[i].edit_description(s);
                }
                else if (choice == 10)
                {
                    cout << "Enter new date" << endl;
                    string s;
                    cin >> s;
                    fests[i].edit_date(s);
                }
                else if (choice == 11)
                {
                    cout << "Enter new entry fees" << endl;
                    string s;
                    cin >> s;
                    fests[i].edit_entry_fees(s);
                }
                else if (choice == 12)
                {
                    cout<<"Enter new drive link"<<endl;
                string s;
                cin>>s;
                fests[i].edit_drive_link(s);
                }
                else if (choice == 13)
                {
                    cout<<"Enter new intagram link"<<endl;
                string s;
                cin>>s;
                fests[i].edit_insta_link(s);
                }
                else if (choice == 14)
                {
                    cout<<"Enter new twitter link"<<endl;
                string s;
                cin>>s;
                fests[i].edit_twitter_link(s);
                }
                else if (choice == 15)
                {
                    cout<<"Enter new website link"<<endl;
                string s;
                cin>>s;
                    fests[i].edit_website_link(s);
                }
            }
        }
        else if (choice == 4)
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
                deep_into_fest(i, tt);
        }
        else if (choice == 5)
        {
            cout << "Enter the name of the fest you want to update detailed information about" << endl;
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
                deep_into_fest_update(i, tt);
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
        cin >> choice;
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
                deep_into_fest(i, tt);
        }
        else
            return;
    }
}
int main()
{

    // fest(string ads, int est_yr, string n, string cate,string descr,string name4,string de1,string name1, string description1, string date1, string entry_fees1, string drive_link1, string insta_link1, string twitter_link1, string website_link1)
    // fest f1("morena link road,gwalior", 1997, "iiitm", "trash", "college_of_national_importance", "CocoCola", "nothing", "aurora", "largest_cultural_fest_of_central_india", "16/02/2024", "700", "www.google.com", "www.instagram.com", "www.twitter.com", "www.aurora.com");
    // f1.display_details();
    while (1)
    {

        cout << "WELCOME TO FEST MANAGEMENT SYSTEM" << endl;
        cout << "WHAT ARE YOU?" << endl;
        cout << "1.ORGANIZER" << endl;
        cout << "2.PARTICIPANT" << endl;
        int cho;
        cin >> cho;
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
