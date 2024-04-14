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
    college(const string &ads, int est_yr, const string &n, const string &cate = "", const string &descr = "") : category(cate), address(ads), establish_yr(est_yr), description(descr), name(n) {} // constructor
    void display()
    {
        cout << "Name: " << name << endl
             << "Address: " << address << endl;
    }
    void descr()
    {
        cout << "Category: " << (category.empty() ? "Not Specified" : category) << endl
             << "Established in " << establish_yr << endl
             << "Description:" << endl;
        if (!description.empty())
        {
            cout << "\t" << description << endl;
        }
        else
        {
            cout << "\tNot Specified" << endl;
        }
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
    static int next_id;

public:
Sponsor()
{
    
}
    // Constructor
    Sponsor(const string &name, const string &description)
        : name(name), description(description)
    {
        id = next_id++;
    }

    // Display functions
    void display_company_details() const
    {
        cout << "Sponsor ID: " << id << endl;
        cout << "Company Name: " << name << endl;
        cout << "Company Description: " << description << endl;
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
//parametrized constructor
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
    //checking for same name
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
        cout<<"Event details are as follows:"<<endl;
        cout << "Name:                       " <<name<< endl;
        cout << "Date:                       " <<date<< endl;
        cout << "Time:                       " <<time<< endl;
        cout << "Venue:                      " <<venue<< endl;
        cout << "Description:                " <<description<< endl;
        cout << "Rules:                      " <<rules<< endl;
        cout << "Registration Information:   "<<registration_info << endl;
        cout << "Contact Information:        " <<contact_info<< endl;
        cout << "Entry Fees:                 "<<entry_fees << endl;
        
    }
};

class fest :public college , public Sponsor 
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
        // college(const string &ads, int est_yr, const string &n, const string &cate = "", const string &descr = "") : category(cate), address(ads), establish_yr(est_yr), description(descr), name(n) {}
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


void display_name()//function to display fest name
    {
        cout << name << endl;
    }


     void display_details()//function to display all the details of the fest
    {
        cout<<"Fest details are as follows:"<<endl;
        cout << "Name:                       " <<name<< endl;
        cout << "Date:                       " <<date<< endl;
        cout<<"Description:                  "<<description<<endl;
        cout<<"Entry Fees:                   "<<entry_fees<<endl;
        cout<<"Drive Link:                   "<<drive_link<<endl;
        cout<<"Insta Link                    "<<insta_link<<endl;
        cout<<"Twitter Link:                 "<<twitter_link<<endl;
        cout<<"Website Link:                 "<<website_link<<endl;
       
        
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
};
int main()
{
   
}