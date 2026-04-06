#include "Source_File.h"
#include <iostream>
#include <vector>

using namespace std;



int main(){
    Graphics graphics;
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


    graphics.DisplayLogInPage();
    graphics.NameField();
    cin >> name;
    account.SetUserName(name);
    graphics.PasswordField();
    cin >> password;
    account.SetUserPassword(password);

    while (true){
        graphics.Menu();
        cin >> userChoice;
        if (userChoice == 1){
            graphics.AddStaffView();
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

            staff.emplace_back(staffName, staffAge, staffEmail,
                staffPosition,staffMonthlySalary);

            continue;
        }
        else if (userChoice == 2){
            graphics.ListStaffView();
            for (const Staff& s : staff){
                s.PrintStaff();
                continue;
            }
        }
        else if (userChoice == 3){
            graphics.RemoveStaffView();
            continue;
        }
        else if (userChoice == 4){
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