//
// Created by Maikol Guzman on 4/30/22.
//

#include "Developer.h"

Developer::Developer() {}

Developer::Developer(int id, const string &name) : Employee(id, name) {}

vector<Employee *> Developer::directReports() const {
    return vector<Employee *>();
}

Developer::~Developer() {

}

ostream &operator<<(ostream &os, const Developer &developer) {
    os << static_cast<const Employee &>(developer);
    return os;
}
