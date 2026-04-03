#include "Source_File.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Staff::Staff(string n, int a, string e,
    string p, int m){
        n = name;
        a = age;
        e = emali;
        p = position;
        m = monthlySalary;
}

void Account::SetUserName(string a){
    a = userName;
}

string Account::GetUserName(){
    return userName;
}

void Account::SetUserPassword(string a){
    a = userPassword;
}

string Account::GetUserPassword(){
    return userPassword;
}

void Display::DisplayLogInPage(){
     cout << "Welcome in the Administration System!" << '\n';
     cout << "-------------------------------------" << '\n';
}

void Display::Menu(){
    cout << "-------------------------------------" << '\n';
    cout << "Choose following options:" << '\n';
    cout << "1. Add Staff" << '\n';
    cout << "2. List Staff" << '\n';
    cout << "3. Exit" << '\n';
}

void Display::NameField(){
    cout << "Login: "<< '\n';
}

void Display::PasswordField(){
    cout << "Password; " << '\n';
}

void Display::AddStaffView(){
    cout << "Add Staff View" << '\n';
    cout << "-------------------------------------" << '\n';
}

void Display::ListStaffView(){
    cout << "List Staff View" << '\n';
    cout << "-------------------------------------" << '\n';
}

