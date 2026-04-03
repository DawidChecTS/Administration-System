#ifndef SOURCE_FILE_H
#define SOURCE_FILE_H
#include <vector>
#include <string>
using namespace std;


class Account{
    private :
    string userName;
    string userPassword;

    public :
    void SetUserName(string a);
    string GetUserName();
    void SetUserPassword(string a);
    string GetUserPassword();

};

class Staff{
    private :
    string name;
    int age;
    string emali;
    string position;  
    int monthlySalary;

    public :
    Staff(string n, int a, string e,
    string p, int m);

    void AddStaff();
    void ListStaff();
    void RemoveStaff();
};

class Display{
    public :
    void DisplayMenu();
    void NameField();
    void PasswordField();
};

string printString(string a);
int printInt(int a);


#endif
