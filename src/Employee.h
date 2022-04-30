//
// Created by Maikol Guzman Alan on 4/29/22.
//

#ifndef MY_PROJECT_NAME_EMPLOYEE_H
#define MY_PROJECT_NAME_EMPLOYEE_H
#include <iostream>
#include <sstream>
using namespace std;

class Employee {
private:
    int id;
    string name;
public:
    Employee();

    Employee(int id, const string &name);

    virtual ~Employee();

    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    friend ostream &operator<<(ostream &os, const Employee &employee);

    // Composite methods

    virtual void add(Employee *employee);
    virtual void remove(Employee *employee);
    virtual vector<Employee *> directReports() const = 0;
};


#endif //MY_PROJECT_NAME_EMPLOYEE_H
