#ifndef SOURCE_FILE_H
#define SOURCE_FILE_H
#include <vector>
#include <string>


class Account{
    private :
    std::string userName;
    std::string userPassword;

    public :
    void SetUserName(std::string a);
    std::string GetUserName();
    void SetUserPassword(std::string a);
    std::string GetUserPassword();

};

class Staff{
    private :
    std::string name;
    int age;
    std::string email;
    std::string position;  
    int monthlySalary;

    public :
    Staff(std::string n, int a, std::string e,
    std::string p, int m);

    void AddStaff();
    void ListStaff();
    void RemoveStaff();
    void PrintStaff() const;
};

class Graphics{
    public :
    void DisplayLogInPage();
    void NameField();
    void Menu();
    void PasswordField();
    void AddStaffView();
    void ListStaffView();
};


#endif
