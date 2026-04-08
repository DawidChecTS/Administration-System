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
    int userMenuChoice;
    int userListStaffChoice;
    string staffName;
    int staffAge;
    string staffEmail;
    int staffMonthlySalary;
    int positionChoice;


    graphics.DisplayLogInPage();
    graphics.NameField();
    cin >> name;
    account.SetUserName(name);
    graphics.PasswordField();
    cin >> password;
    account.SetUserPassword(password);

    while (true){
        graphics.Menu();
        cin >> userMenuChoice;
        if (userMenuChoice == 1)
        {
            graphics.AddStaffView();
            cout << "Enter Staff's name: ";
            cin >> staffName;
            cout << "Enter Staff's age: ";
            cin >> staffAge;
            cout << "Enter Staff's email: ";
            cin >> staffEmail;
            graphics.ChoosePosition();
            cin >> positionChoice;

            
            Position pos;

            switch (positionChoice){
                case 1: pos = Position::Worker; break;
                case 2: pos = Position::Superwisor; break;
                case 3: pos = Position::Boss; break;
            }

            cout << "Enter Staff's monthly salary: ";
            cin >> staffMonthlySalary;

            if (isSallaryOK(staffMonthlySalary, staffAge) 
            && canBeSupervisor(staffAge, pos) && checkEmail(staffEmail)) 
            {
                staff.emplace_back(staffName, staffAge, staffEmail,
                pos, staffMonthlySalary);
            }      
            else{continue;}

        }
        else if (userMenuChoice == 2){
            graphics.ListStaffView();
            while (true){
                graphics.ListStaffOptions();
                cin >> userListStaffChoice;
                if (userListStaffChoice == 1){
                    // staff -> the vector
                    // s -> is a temporary variable used in each loop iteration
                    // for each element insisde of staff, call it 's'
                    for (const Staff& s : staff){
                    s.PrintStaff();
                    continue;
                    }
                }
                else if (userListStaffChoice == 2){
                    staff[0].PrintStaff();
                    continue;
                }
                else if (userListStaffChoice == 3){
                    continue;
                }
                else{
                printErrorAndExit();
                return false;
        }
            }
            
        }
        else if (userMenuChoice == 3){
            graphics.RemoveStaffView();
            continue;
        }
        else if (userMenuChoice == 4){
            printErrorAndExit();
            return false;
        }
        else{
            cout << "Error! The option you choose was not lsited in the menu!";
            return false;
        }
    }


    return 0;
}