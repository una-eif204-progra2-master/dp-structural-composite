//
// Created by Maikol Guzman Alan on 4/29/22.
//

#include "Employee.h"

Employee::Employee() {}

Employee::Employee(int id, const string &name) : id(id), name(name) {}

Employee::~Employee() {

}

int Employee::getId() const {
    return id;
}

void Employee::setId(int id) {
    Employee::id = id;
}

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

ostream &operator<<(ostream &os, const Employee &employee) {
    os << "id: " << employee.id << " name: " << employee.name;
    return os;
}
