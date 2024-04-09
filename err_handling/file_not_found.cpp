#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool file_not_exist(string path){
    bool check_bool=true;
    ifstream check(path);
    if (!check){
        cout<<"File Not Found"<<endl;
        check_bool=false;
    }
    return check_bool;
}

