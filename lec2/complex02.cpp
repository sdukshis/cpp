//
// Created by Pavel Filonov on 06.09.15.
//


#include <stdio.h>
#include <math.h>

struct Complex {
    double re;
    double im;

    double modulo() { return sqrt(re*re + im*im); }
};

int main() {
    Complex z;
    z.re = 1.0;
    z.im = 0.5;
    double mod = z.modulo();
    printf("mod(z) = %g", mod);

    return 0;
}
