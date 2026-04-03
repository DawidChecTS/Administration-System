#include "Source_File.h"
#include <iostream>
#include <vector>

using namespace std;



int main(){
    Display display;
    Account account;
    vector <Staff> people;

    string name;
    string password;

    display.DisplayMenu();
    display.NameField();
    cin >> name;
    account.SetUserName(name);
    display.PasswordField();
    cin >> password;
    account.SetUserPassword(password);

    cout << account.GetUserName();
    cout << account.GetUserPassword();


    people.push_back(Staff("Dawid", 29, "checdd@gmail.com", "Boss", 31000));

    

    return 0;
}