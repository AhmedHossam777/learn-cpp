#include <iostream>
using namespace std;


class Complex {
private:
    int real;
    int image;

public:
    Complex() {
        cout << "Hello, Object" << endl;
        this->real = 0;
        this->image = 0;
    }

    Complex(int _real, int _img) {
        cout << "Hello, Object" << endl;
        this->real = _real;
        this->image = _img;
    }

    void setReal(int _real) {
        this->real = _real;
    }

    void setImg(int _img) {
        this->image = _img;
    }

    int getReal() const {
        return this->real;
    }

    int getImagine() const {
        return this->image;
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


    // = operator [useless]
    Complex &operator=(const Complex &right) {
        real = right.real;
        image = right.image;
        return *this;
    }

    // c1+c2
    Complex operator+(const Complex &right) {
        Complex result;
        result.real = real + right.real;
        result.image = image + right.image;
        return result;
    }

    // c1+10
    Complex operator+(int _num) {
        Complex result;
        result.real += _num;
        return result;
    }

    // c1+=c2
    Complex operator+=(const Complex &right) {
        real += right.real;
        image += right.image;

        return *this;
    }

    // c1++
    Complex operator++(int) {
        Complex result(real, image);
        real++;
        image++;
        return result;
    }

    // ++c1
    Complex operator++() {
        real++;
        image++;
        return *this;
    }

    // c1>c2
    int operator>(const Complex &right) {
        return this->real > right.real && this->image > right.image;
    }

    ~Complex() {
        cout << endl;
        cout << "end of object" << endl;
    }

    ///cpy ctor [useless]
    Complex(const Complex &old) {
        real = old.real;
        image = old.image;
    }
};

//10+c1
Complex operator+(int _num, Complex right) {
    Complex result;
    result.setReal(_num + right.getReal());
    result.setImg(right.getImagine());
    return result;
}

Complex AddComplex(Complex left, Complex right) {
    int r = left.getReal() + right.getReal();
    int i = left.getImagine() + right.getImagine();
    Complex result(r, i);
    return result;
}


int main() {
    Complex cmpx3;
    Complex addResult;
    int real1, real2, img1, img2;

    cout << "enter the real of compx1: ";
    cin >> real1;
    cout << "enter the imagine of compx1: ";
    cin >> img1;
    Complex cmpx1(real1, img1);


    cout << "enter the real of compx2: ";
    cin >> real2;
    cout << "enter the imagine of compx2: ";
    cin >> img2;
    Complex cmpx2(real2, img2);


    cmpx1.print();
    cmpx2.print();


    addResult = AddComplex(cmpx1, cmpx2);

    addResult.print();

    return 0;
}
