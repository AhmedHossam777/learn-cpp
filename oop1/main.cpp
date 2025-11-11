#include <iostream>
using namespace std;


class Complex {
private:
    int real;
    int image;

public:
    //! constructor :
    //? has the same name of class
    //? has no return type even no void
    //? can be overloaded
    //? must be public
    //? called automatically when creating an object
    // constructor: default constructor
    Complex() {
        cout << "Hello, Object" << endl;
        this->real = 0;
        this->image = 0;
    }

    // constructor: paramtrized constructor
    Complex(int _real, int _img) {
        cout << "Hello, Object" << endl;
        this->real = _real;
        this->image = _img;
    }

    void setReal(int _real) {
        this->real = _real;
    }

    void setImagine(int _imagine) {
        this->image = _imagine;
    }

    int getReal() const {
        return this->real;
    }

    int getImagine() const {
        return this->image;
    }

    Complex add(Complex right) {
        Complex result;
        result.real = this->real + right.real;
        result.image = this->image + right.image;

        return result;
    }

    void print() {
        if (image < 0) {
            if (image == -1) {
                cout << this->real << "-i" << endl;
            } else {
                cout << this->real << "-" << abs(this->image) << "i" << endl;
            }
        } else if (image == 0) {
            cout << this->real << endl;
        } else if (real == 0) {
            if (image > 0) {
                if (image == 1) {
                    cout << "i" << endl;
                }
                cout << "+" << this->image << "i" << endl;
            }
        } else {
            cout << this->real << "+" << this->image << "i" << endl;
        }
    }

    //! Destructor : when the object get to the end of the class it call the destructor
    //? ~ and the class name
    //? cannot be overloaded
    //? has no return type
    //? must be public
    ~Complex() {
        cout << endl;
        cout << "end of object" << endl;
    }

    //* the use of destructor:
    //* 1.dynamic allocation, to do deallocation
    //* 2.connect to DB
    //* 3.Read/Write from file
};

Complex AddComplex(const Complex &left, const Complex &right) {
    Complex result;

    int r = left.getReal() + right.getReal();
    int i = left.getImagine() + right.getImagine();
    result.setReal(r);
    result.setImagine(i);
    return result;
}

// int main() {
//     Complex c1, c2(5,3), c3; // all real and imaginary = 0
//
//     cout << c2.getReal() << " " << c2.getImagine();
//
//
//     return 0;
// }

//
// int main() {
//     Complex cmpx1;
//     Complex cmpx2;
//     Complex addResult;
//     int temp;
//
//     cout << "enter the real of compx1: ";
//     cin >> temp;
//     cmpx1.setReal(temp);
//     cout << "enter the imagine of compx1: ";
//     cin >> temp;
//     cmpx1.setImagine(temp);
//
//
//     cout << "enter the real of compx2: ";
//     cin >> temp;
//     cmpx2.setReal(temp);
//     cout << "enter the imagine of compx2: ";
//     cin >> temp;
//     cmpx2.setImagine(temp);
//
//
//     cmpx1.print();
//     cmpx2.print();
//
//
//     addResult = cmpx1.add(cmpx2);
//
//     addResult.print();
//
//     return 0;
// }

//! The real usage of constructor is to clean the memory from dynamic allocation as it's stored in the heap not stack
class Draft {
private:
    int *ptr;

public:
    Draft() {
        ptr = new int[10];
    }


    //* to solve the memory leakage problem
    ~Draft() {
        delete [] ptr;
    }
};

//? note : if the creation of the object was inside the main it will be deleted when the program end so there is no need of the destructor
//? but because we did it in a funciton outside the main we need to make use of the destructor and free the heap in the memory
void tryMe() {
    Draft d1;
}

int main() {
    tryMe();
    tryMe();
    tryMe();


    return 0;
}
