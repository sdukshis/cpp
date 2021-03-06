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

    double modulo() { return sqrt(re*re + im*im); }
};

int main() {
    Complex z(1.0, 0.5);
    z.set(1.0, 0.5);
    double mod = z.modulo();
    printf("mod(z) = %g", mod);

    return 0;
}
