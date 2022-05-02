//
// Created by Maikol Guzman Alan on 5/1/22.
//

#ifndef DP_STRUCTURAL_COMPOSITE_ORGANIZATION_H
#define DP_STRUCTURAL_COMPOSITE_ORGANIZATION_H

#include "Employee.h"
#include <vector>
#include <ostream>

using namespace std;

class Organization : public Employee{
    vector<Employee*> employeeList;
public:
    Organization();

    virtual ~Organization();

    void add(Employee *employee) override;

    void remove(Employee *employee) override;

    vector<Employee *> directReports() const override;

    friend ostream &operator<<(ostream &os, const Organization &organization);
};


#endif //DP_STRUCTURAL_COMPOSITE_ORGANIZATION_H
