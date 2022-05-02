//
// Created by Maikol Guzman on 4/30/22.
//

#include "Manager.h"

Manager::Manager() {}

Manager::Manager(int id, const string &name) : Employee(id, name) {}

Manager::~Manager() {

}

void Manager::add(Employee *employee) {
    directs.push_back(employee);
}

void Manager::remove(Employee *employee) {
    std::remove(directs.begin(), directs.end(), employee);
}

vector<Employee *> Manager::directReports() const {
    return directs;
}

ostream &operator<<(ostream &os, const Manager &manager) {
    string sDirectReports;
    for (const auto &direct : manager.directReports()) {
        sDirectReports += direct->getName() + " - ";
    }
    os << static_cast<const Employee &>(manager) << " directs: " << sDirectReports;
    return os;
}
