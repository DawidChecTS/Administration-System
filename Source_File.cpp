#include "Source_File.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Staff::Staff(string n, int a, string e,
    string p, int m) : name(n), age(a), email(e),
    position(p), monthlySalary(m) {}


void Staff::PrintStaff () const {
    cout << "Name: " << name << '\n';
    cout << "Age: " << age << '\n';
    cout << "email: " << email << '\n';
    cout << "Position: " << position << '\n';
    cout << "MonthlySalary: " << monthlySalary << '\n';
}

void Account::SetUserName(string a){
    userName = a;
}

string Account::GetUserName(){
    return userName;
}

void Account::SetUserPassword(string a){
    userPassword = a;
}

string Account::GetUserPassword(){
    return userPassword;
}

void Graphics::DisplayLogInPage(){
     cout << "Welcome in the Administration System!" << '\n';
     cout << "-------------------------------------" << '\n';
}

void Graphics::Menu(){
    cout << "-------------------------------------" << '\n';
    cout << "Choose following options:" << '\n';
    cout << "1. Add Staff" << '\n';
    cout << "2. List Staff" << '\n';
    cout << "3. Remove Staff" << '\n';
    cout << "4. Exit" << '\n';
}

void Graphics::NameField(){
    cout << "Login: "<< '\n';
}

void Graphics::PasswordField(){
    cout << "Password; " << '\n';
}

void Graphics::AddStaffView(){
    cout << "Add Staff View" << '\n';
    cout << "-------------------------------------" << '\n';
}

void Graphics::ListStaffView(){
    cout << "List Staff View" << '\n';
    cout << "-------------------------------------" << '\n';
}

void Graphics::RemoveStaffView(){
    cout << "Remove Staff View" << '\n';
    cout << "-------------------------------------" << '\n';
}

