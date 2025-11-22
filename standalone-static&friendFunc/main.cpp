#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;
    static int Counter;

public:
    Complex() {
        Counter++;
        cout << "default constructor called " << endl;
    }

    static int GetCounter() {
        return Counter;
    }


    void SetReal(int _real) {
        real = _real;
    }

    int GetReal() const {
        return real;
    }

    void SetImg(int _img) {
        img = _img;
    }

    int GetImg() const {
        return img;
    }


    Complex Add(Complex right) {
        Complex result;
        result.real = (*this).real + right.real;
        result.img = img + right.img;
        return result;
    }

    //
    //fn to initialize object
    void Initialize() {
        real = 3;
        this->img = 4;
    }

    void Initialize(int _real, int _img) {
        real = _real;
        this->img = _img;
    }

    void Initialize(int _num) {
        real = img = _num;
    }

    friend void print(Complex c);
};

// Define and initialize the static member variable, if this doesn't exist will cause runtime error
int Complex::Counter = 0;

// friend func
void print(Complex c) {
    // this friend func can access the private members
    cout << c.GetReal() << " + " << c.GetImg() << "i" << endl;
}


// to create a standalone function
Complex addComplex(Complex left, Complex right) {
    Complex result;
    int r = left.GetReal() + right.GetReal();
    int i = left.GetImg() + right.GetImg();

    result.SetReal(r);
    result.SetImg(i);

    return result;
}

int main() {
    cout << "lect 7" << endl;

    Complex c1;
    Complex c2;

    c1.SetImg(10);
    c1.SetReal(10);

    c2.SetImg(10);
    c2.SetReal(10);

    Complex addRes = addComplex(c1, c2);

    print(addRes); // 20 + 20i

    cout << "num of object from class complex: " << Complex::GetCounter();


    return 0;
}
