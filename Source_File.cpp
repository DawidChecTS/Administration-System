#include "Source_File.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


std::string PositionToString(Position p){
    switch(p) {
        case Position::Worker: return "Worker";
        case Position::Superwisor: return "Superwisor";
        case Position::Boss: return "Boss";
        default: return "Unknown!";
    }
}

Staff::Staff(string n, int a, string e,
    Position p, int m) : name(n), age(a), email(e),
    position(p), monthlySalary(m) {}


void Staff::PrintStaff () const {
    cout << "Name: " << name << '\n';
    cout << "Age: " << age << '\n';
    cout << "email: " << email << '\n';
    cout << "Position: " << PositionToString(position) << '\n';
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

void Graphics::ListStaffOptions(){
    cout << "1. List all Staff." << '\n';
    cout << "2. List specific Staff member." << '\n';
    cout << "3. Go back." << '\n';
}

void Graphics::ChoosePosition(){
    cout << "Choose the position" << '\n';
    cout << "1.Worker" << '\n';
    cout << "2.Superwisor" << '\n';
    cout << "3.Boss" << '\n';
}

bool isSallaryOK(int sallary, int age){
    if (sallary > 30000 && age < 30 ){
        cout << "Someone below 30 can't earn above 30 000kr!\n";
        return false;
    }
    else {
        return true;
    }
}

bool canBeSupervisor(int age, Position p){
    if (age < 30 && p == Position::Superwisor){
        cout << "People below age of 30 can't be assigned SUPERVISOR!\n";
        return false; 
    }
    else {
        return true;
    }
}