#include "Source_File.h"
#include <iostream>
#include <vector>

using namespace std;



int main(){
    Display display;
    Account account;
    vector <Staff> staff;

    string name;
    string password;
    int userChoice;
    string staffName;
    int staffAge;
    string staffEmail;
    string staffPosition;
    int staffMonthlySalary;


    display.DisplayLogInPage();
    display.NameField();
    cin >> name;
    account.SetUserName(name);
    display.PasswordField();
    cin >> password;
    account.SetUserPassword(password);

    while (true){
        display.Menu();
        cin >> userChoice;
        if (userChoice == 1){
            display.ListStaffView();
            cout << "Enter Staff's name: ";
            cin >> staffName;
            cout << "Enter Staff's age: ";
            cin >> staffAge;
            cout << "Enter Staff's email: ";
            cin >> staffEmail;
            cout << "Enter Staff's position: ";
            cin >> staffPosition;
            cout << "Enter Staff's  monthly salary: ";
            cin >> staffMonthlySalary;

            staff.push_back(Staff(staffName, staffAge, staffEmail,
                staffPosition,staffMonthlySalary));

            continue;
        }
        else if (userChoice == 2){
            display.AddStaffView();
            continue;
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


    return 0;
}