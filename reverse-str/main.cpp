#include <cstring>
#include <iostream>
using namespace std;
// #include<string.h>

//8- read string from user
///and then print it reversly

///enter statement
///My name is Ali
//ilA si eman yM


int main() {
    char name[15];
    cout << "Enter name";
    cin >> name;
    cout << name << endl;
    int len = strlen(name);
    cout << len << endl;

    for (int i = len-1; i >= 0; i--) {
        cout << name[i];
    }

    return 0;
}
