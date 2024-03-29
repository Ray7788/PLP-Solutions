#include <iostream>

class Complex {
private:
    int real{0};
    int imag{0};

public:
    Complex() = default;
    Complex(int real_part, int imaginary_part);
    int get_real_part();
    int get_imaginary_part();

    Complex operator+(Complex& other);      // 重构overload
};

Complex::Complex(int real_part, int imaginary_part) 
    : real{real_part}, imag{imaginary_part} {};

int Complex::get_real_part() {
    return real;
}

int Complex::get_imaginary_part() {
    return imag;
}

/* implement operator overrides here */
// 求和运算符重载
Complex Complex::operator+(Complex& other) {
    return Complex(real + other.real, imag + other.imag);
}

// 输出运算符重载
std::ostream& operator<<(std::ostream& out, Complex c) {
    return std::cout << "(" << c.get_real_part() << "+" << c.get_imaginary_part() << "i)";
}

void add_and_print(Complex c1, Complex c2) {
    std::cout << c1 << " + " << c2 << " = " << c1 + c2 << "\n";
}

int main(int argc, char **argv) {
    Complex c1(4, 5);
    Complex c2(9, 11);
    
    add_and_print(c1, c2); // should print "(4+5i) + (9+11i) = (13+16i)"

    return 0;
}

//  本练习答案可在week7第一个ftemplates找到