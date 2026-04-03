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
    int userChoice;

    display.DisplayLogInPage();
    display.NameField();
    cin >> name;
    account.SetUserName(name);
    display.PasswordField();
    cin >> password;
    account.SetUserPassword(password);

    display.Menu();
    cin >> userChoice;

    while (true){
        if (userChoice == 1){

        }
        else if (userChoice == 2){

        }
        else if (userChoice == 3){
            cout << "You are exiting the system!";
            return false;
        }
        else{
            cout << "Error! The option you choose was not lsited in the menu!";
            return false;
        }
    }

    people.push_back(Staff("Dawid", 29, "checdd@gmail.com", "Boss", 31000));

    return 0;
}