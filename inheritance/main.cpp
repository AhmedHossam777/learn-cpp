#include <iostream>
using namespace std;
//
// class Parent {
// private:
//     int x;
//     int y;
//
// public:
//     Parent() {
//         cout << "default parent constructor \n";
//     }
//
//     Parent(int _x, int _y) {
//         x = _x;
//         y = _y;
//     };
//
//
//     void setX(int _x) {
//         x = _x;
//     }
//
//     void setY(int _y) {
//         y = _y;
//     }
//
//     int sum() {
//         return x + y;
//     }
//
//     ~Parent() {
//         cout << "parent constructor" << endl;
//     }
// };
//
// class Child : Parent {
// private:
//     int z;
//
// public:
//     Child() {
//         cout << "default child constructor \n";
//     }
//
//     // in default the child class call the default constructor
//     //? if we wanna it to call the parameterize constructor we do this
//     Child(int _x, int _y, int _z) : Parent(_x, _y) {
//         z = _z;
//     }
//
//     void setZ(int _z) {
//         z = _z;
//     }
//
//     int sum() {
//         return z + Parent::sum();
//     }
//
//     ~Child() {
//     };
//
//     Child(const Child &old) {
//         z = old.z;
//         setX(5);
//         setY(7);
//     }
// };
//
// int main() {
//     Child ch(4, 9, 7);
//     int sum = ch.sum();
//     cout << sum;
//
//     return 0;
// }
//
// // overriing is a funciton in the child with same and and same parameter
// // but different implementation in the child class


class Geoshap {
protected:
    double dim1;
    double dim2;

public:
    Geoshap() {
        dim1 = dim2 = 0;
        cout << "goeshape cons" << endl;
    }

    Geoshap(double _dim1) {
        dim1 = _dim1;
    }

    Geoshap(double _dim1, double _dim2) {
        dim1 = _dim1;
        dim2 = _dim2;
    }

    void SetDim1(double _dim1) {
        dim1 = _dim1;
    }

    int GetDim1() {
        return dim1;
    }

    void SetDim2(double _dim2) {
        dim2 = _dim2;
    }

    int GetDim2() {
        return dim2;
    }

    ~Geoshap() {
        cout << "geoshape cons " << endl;
    }
};

class Rect : Geoshap {
public:
    Rect() {
        cout << "rect cons" << endl;
    }

    Rect(double _d1, double _d2) {
        dim1 = _d1;
        dim2 = dim2;
    }

    double area() {
        return dim1 * dim2;
    }

    ~Rect() {
    }
};

class Square : Geoshap {
public:
    Square() {
    }

    Square(int _d) {
        dim1 = dim2 = _d;
    }

    double area() {
        return dim1 * dim2;
    }

    ~Square() {
    }
};

class SquareV2 : Rect {
public:
    SquareV2() {
    }

    SquareV2(double _d) : Rect(_d, _d) {
    }

    ~SquareV2() {
    }
};

class Circle : Geoshap {
public:
    Circle() {
    }

    Circle(double _rad) {
        dim1 = dim2 = _rad;
    }

    double area() {
        3.14 * dim1 * dim2;
    }

    ~Circle() {
    }
};

class Tri : public Geoshap {
    Tri() {
    }

    Tri(int _base, int _hieght) {
        dim1 = _base;
        dim2 = _hieght;
    }

    double area() {
        return 0.5 * dim1 * dim2;
    }

    ~Tri(){}
};


int main() {
    return 0;
}
