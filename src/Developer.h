//
// Created by Maikol Guzman on 4/30/22.
//

#ifndef DP_STRUCTURAL_COMPOSITE_DEVELOPER_H
#define DP_STRUCTURAL_COMPOSITE_DEVELOPER_H
#include <vector>
#include <ostream>

using namespace std;

#include "Employee.h"

class Developer : public Employee {
public:
    Developer();

    Developer(int id, const string &name);

    virtual ~Developer();

    vector<Employee *> directReports() const override;

    friend ostream &operator<<(ostream &os, const Developer &developer);

};


#endif //DP_STRUCTURAL_COMPOSITE_DEVELOPER_H
