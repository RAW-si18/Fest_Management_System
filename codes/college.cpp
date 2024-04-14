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
        cout << "Name:                            "  << name << endl
             << "Address:                         " << address << endl;
    }
    void descr()
    {
        cout << "Category:                         " << (category.empty() ? "Not Specified" : category) << endl
             << "Established in                    " << establish_yr << endl
             << "Description:" << endl;
        if (!description.empty())
        {
            cout << "    "<< description << endl;
        }
        else
        {
            cout << "\tNot Specified" << endl;
        }
    }
    void edit_str_member(string member, const string prompt)
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
