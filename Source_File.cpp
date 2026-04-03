#include "Source_File.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*Account::Account(string a, string b){
    userName = a;
    userPassword = b;
}*/

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

void Display::DisplayMenu(){
     cout << "Welcome in the Administration System!" << '\n';
     cout << "                                     " << '\n';
}

void Display::NameField(){
    cout << "Login: "<< '\n';
}

void Display::PasswordField(){
    cout << "Password; " << '\n';
}


