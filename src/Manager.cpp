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
