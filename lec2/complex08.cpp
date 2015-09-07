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

    double real() { return re; }

    double imag() { return im;}

    double modulo() { return sqrt(re*re + im*im); }

    double argument() { return atan2(im, re); }

    Complex operator+(Complex rhs) {
        return Complex(re + rhs.re, im + rhs.im);
    }

    Complex operator-(Complex rhs) {
        return Complex(re - rhs.re, im - rhs.im);
    }

    Complex operator*(Complex rhs) {
        return Complex(re*rhs.re - im*rhs.im,
                       re*rhs.im + im*rhs.re);
    }

    Complex operator/(Complex rhs) {
        double msqr = rhs.re*rhs.re + rhs.im*rhs.im;
        return Complex((re*rhs.re + im*rhs.im)/msqr,
                       (im*rhs.re - re*rhs.im)/msqr);
    }

    bool operator==(Complex rhs) {
        return re == rhs.re && im == rhs.im;
    }

    bool operator!=(Complex rhs) {
        return !(*this == rhs);
    }
};

void print(Complex z) {
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
