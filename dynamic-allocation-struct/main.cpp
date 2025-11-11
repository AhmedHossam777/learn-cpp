#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[20];
    int age;
};

int main() {
    Employee *emptr;
    int empSize = 3;
    emptr = new Employee(empSize);

    emptr[0].id = 1;
    emptr[0].age = 23;
    strcpy(emptr[0].name, "ahmed hossam");
    return 0;
}
