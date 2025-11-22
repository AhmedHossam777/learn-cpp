#include <iostream>
using namespace std;


class Complex {
private:
    int real;
    int img;

public:
    void SetReal(int _real) {
        this->real = _real;
    }

    int GetReal() const {
        return this->real;
    }

    void SetImg(int _img) {
        img = _img;
    }

    int GetImg() const {
        return (*this).img;
    }

    void Print() {
        cout << real << "+" << this->img << "i" << endl;
    }

    Complex Add(Complex right) {
        Complex result;
        result.real = this->real + right.real;
        result.img = img + right.img;
        return result;
    }

    Complex() {
        cout << "complec default ctor\n";
        this->real = 0;
        (*this).img = 0;
    }

    Complex(int _real, int _img) {
        cout << "complec 2p ctor\n";
        this->real = _real;
        img = _img;
    }

    Complex(int _num) {
        cout << "complec 1p ctor\n";
        this->real = img = _num;
    }

    //destructor learning purpose //useless
    ~Complex() {
        cout << "complex destructor\n";
    }

    //

    //cpy ctor [useless]
    Complex(const Complex &old) {
        real = old.real;
        img = old.img;
    }
    //? operator overloading
    // c1+c2
    Complex operator+(const Complex& right) {
        Complex res;
        res.img = this->img + right.img;
        res.real = this->real + right.img;

        return res;
    }

    Complex operator++() {
        this->real++;
        this->img++;

        return *this;
    }
};

int main() {
    cout << "lec 8" << endl;

    Complex c1;
    Complex c2;

    c1.SetImg(10);
    c1.SetReal(10);

    c2.SetImg(10);
    c2.SetReal(10);

    Complex res = c1+c2;
    res.Print();




    return 0;
}
