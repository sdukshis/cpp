//
// Created by Pavel Filonov on 06.09.15.
//


#include <stdio.h>
#include <math.h>

class Complex {
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
};

int main() {
    Complex z(1.0, 0.5);
    double real = z.real();
    double imag = z.imag();
    double mod = z.modulo();
    double arg = z.argument();

    printf("real(z) = %g, imag(z) = %g, mod(z) = %g, arg(z) = %g\n", real, imag, mod, arg);

    return 0;
}
