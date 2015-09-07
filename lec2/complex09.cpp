//
// Created by Pavel Filonov on 07.09.15.
//


#include <stdio.h>
#include <math.h>

struct Complex {
private:
    double re;
    double im;

public:
    Complex(double real, double imag) {
        re = real;
        im = imag;
    }

    double real() const { return re; }

    double imag() const { return im;}

    double modulo() const { return sqrt(re*re + im*im); }

    double argument() const { return atan2(im, re); }

    Complex operator+(const Complex &rhs) const {
        return Complex(re + rhs.re, im + rhs.im);
    }

    Complex operator-(const Complex &rhs) const {
        return Complex(re - rhs.re, im - rhs.im);
    }

    Complex operator*(const Complex &rhs) const {
        return Complex(re*rhs.re - im*rhs.im,
                       re*rhs.im + im*rhs.re);
    }

    Complex operator/(const Complex &rhs) const {
        double msqr = rhs.re*rhs.re + rhs.im*rhs.im;
        return Complex((re*rhs.re + im*rhs.im)/msqr,
                       (im*rhs.re - re*rhs.im)/msqr);
    }

    bool operator==(const Complex &rhs) const {
        return re == rhs.re && im == rhs.im;
    }

    bool operator!=(const Complex &rhs) const {
        return !(*this == rhs);
    }
};

void print(const Complex &z) {
    if (z.imag() > 0.0) {
        printf("%g + %gi", z.real(), z.imag());
    } else if (z.imag() < 0.0) {
        printf("%g - %gi", z.real(), fabs(z.imag()));
    } else {
        printf("%g", z.real());
    }
}

int main() {
    Complex u(1.0, 2.0), v(0.5, 1.0);
    printf("u + v = "); print(u + v); printf("\n");
    printf("u - v = "); print(u - v); printf("\n");
    printf("u * v = "); print(u * v); printf("\n");
    printf("u / v = "); print(u / v); printf("\n");

    return 0;
}
