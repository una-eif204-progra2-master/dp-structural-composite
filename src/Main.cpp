//
// Created by Maikol Guzman on 3/18/22.
//
#include <iostream>
#include "Developer.h"
#include "Manager.h"
#include "Organization.h"

using namespace std;

/**
 * Consider a scenario where the client is running an oil import business.
 * The Client system is designed to work with the imperial system, which only understand Oil quantity in Gallons.
 * The client wants the functionality to purchase oil from the traders.
 * @return
 */
int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Structural pattern - Composite" << endl << endl;

    Developer developer1 (1, "Carlos");
    Developer developer2 (2, "Juan");
    Developer developer3 (3, "Ana");
    Developer developer4 (4, "Emma");
    Developer developer5 (5, "Sebastian");

    Manager manager1 (6, "Mike");
    manager1.add(&developer1);
    manager1.add(&developer2);
    Manager manager2 (7, "Clarisa");
    manager2.add(&developer3);
    manager2.add(&developer4);
    manager2.add(&developer5);

    Organization organization;
    organization.setId(1);
    organization.setName("Akamai Technologies");
    organization.add(&developer1);
    organization.add(&developer2);
    organization.add(&developer3);
    organization.add(&developer4);
    organization.add(&developer5);
    organization.add(&manager1);
    organization.add(&manager2);

    cout  << "------Organization: " << endl << organization << endl;

    return 0;
}
