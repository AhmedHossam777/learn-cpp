#include <iostream>
using namespace std;

class Parent {
private:
    int x;
    int y;

public:
    void SetX(int _x) { x = _x; }
    void SetY(int _y) { y = _y; }
    int GetX() const { return x; }
    int GetY() const { return y; }
    //c2 call this ctor to initialize inherited members
    Parent() {
        x = y = 0;
        cout << "Parent def ctor\n";
    }

    //c2 call this ctor [ctor chaining] to initialize inherited members
    Parent(int _x, int _y) {
        x = _x;
        y = _y;
        cout << "Parent 2p ctor\n";
    }

    ~Parent() { cout << "Parent dest"; }

    Parent(const Parent &old) {
        x = old.x;
        y = old.y;
        cout << "Parent cctor";
    }

    int SumXY() {
        return x + y;
    }
};

class Child : public Parent {
private:
    int z;

public:
    void SetZ(int _z) { z = _z; }
    int GetZ() const { return z; }

    Child() {
        //->  c1  x|0| y|0| z|?|
        //! we cannot access or modify the private member of the parent class
        z = 0;
        //->  c1  x|0| y|0| z|0|
        //x=0;y=0; //Compile Error inaccessible

        //useless
        //this->SetX(0);
        //SetY(0);
        cout << "Child def ctor" << endl;
    }

    Child(int _x, int _y, int _z) : Parent(_x, _y) {
        z = _z;
        cout << "Child 3p ctor" << endl;
    }
};

int main() {
    Child ch1(90, 10, 20);
    int x = ch1.GetX();
    int y = ch1.GetY();
    // Child(90);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    return 0;
}
