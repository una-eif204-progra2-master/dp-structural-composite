//
// Created by Maikol Guzman Alan on 5/1/22.
//

#include "Organization.h"

Organization::Organization() {}

Organization::~Organization() {

}

void Organization::add(Employee *employee) {
    employeeList.push_back(employee);
}

void Organization::remove(Employee *employee) {
    std::remove(employeeList.begin(), employeeList.end(), employee);
}

vector<Employee *> Organization::directReports() const {
    return employeeList;
}

ostream &operator<<(ostream &os, const Organization &organization) {
    stringstream ssEmployeeList;
    for (const auto &direct : organization.directReports()) {
        string sEmployeeList=" -> Direct Reports [";
        if (direct->directReports().size() > 0) {
            for (const auto &employee : direct->directReports()) {
                sEmployeeList += employee->getName() + ", ";
            }
            sEmployeeList += "] ";
        } else {
            sEmployeeList += "none] ";
        }

        ssEmployeeList << *direct << sEmployeeList << endl;
    }
    os << static_cast<const Employee &>(organization) << endl << "------Employee List: " << endl
       << ssEmployeeList.str();
    return os;
}


