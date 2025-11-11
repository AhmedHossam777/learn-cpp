#include <iostream>
#include <string.h>
using namespace std;

// int main() {
//     char fname[15] = "Ali";
//     char lanme[15] = "osama";
//     char fullname[50];
//
//     int isEqual = strcmp(fname, lanme);
//
//     strcpy(fullname, fname); // copy str into another
//     strcat(fullname, " ");
//     strcat(fullname, lanme);
//
//     cout << fullname << endl;
//     cout << ((isEqual == 0) ? "true" : "false");
//
//
//     return 0;
// }

//! Struct : datatype with my own definitions, can carry several unrelated datatypes
//! Struct : is written in global declaration
// struct DTName {
//     id;
//     name;
//     age;
//     salary;
// };

//* first letter must be uppercase
//* must represent one [singularize],

//? data inside struct:
//? first letter must be lowercase or _ , id or _id
//? use camelCase

struct Employee {
    int id;
    char name[15];
    int age;
    float salary;
};


void printEmp(Employee params) {
    cout << "id: " << params.id << endl;
    cout << "age: " << params.age << endl;
    cout << "name: " << params.name << endl;
    cout << "salary: " << params.salary << endl;
}

int main() {
    //? variable from employee
    Employee emp1;

    emp1.id = 1;
    emp1.age = 23;
    emp1.salary = 132.2;
    strcpy(emp1.name, "Ahmed");

    cout << "enter id\n";
    cin >> emp1.id;
    cout << "enter name\n";
    cin >> emp1.name;
    cout << "enter age\n";
    cin >> emp1.age;
    cout << "enter salary\n";
    cin >> emp1.salary;

   printEmp(emp1);
    return 0;
}
