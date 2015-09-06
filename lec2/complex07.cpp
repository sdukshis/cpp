//
// Created by Pavel Filonov on 06.09.15.
//


#include <stdio.h>
#include <math.h>

struct Complex {
private:
    double mod;
    double arg;

public:
    Complex(double real, double imag) {
        mod = sqrt(real*real + imag*imag);
        arg = atan2(imag, real);
    }

    double real() { return mod*cos(arg); }

    double imag() { return mod*sin(arg);}

    double modulo() { return mod; }

    double argument() { return arg; }
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
