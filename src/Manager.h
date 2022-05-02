//
// Created by Maikol Guzman on 4/30/22.
//

#ifndef DP_STRUCTURAL_COMPOSITE_MANAGER_H
#define DP_STRUCTURAL_COMPOSITE_MANAGER_H
#include <vector>
#include <ostream>

using namespace std;

#include "Employee.h"

class Manager : public Employee{
private:
    vector<Employee *> directs;

public:
    Manager();

    Manager(int id, const string &name);
    virtual ~Manager();

    void add(Employee *employee) override;

    void remove(Employee *employee) override;

    vector<Employee *> directReports() const override;

    friend ostream &operator<<(ostream &os, const Manager &manager);
};


#endif //DP_STRUCTURAL_COMPOSITE_MANAGER_H
