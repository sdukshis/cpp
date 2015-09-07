//
// Created by Pavel Filonov on 06.09.15.
//

#include <stdio.h>
#include <math.h>

struct Complex {
    double re;
    double im;
};

double modulo(Complex *z) {
    return sqrt(z->re * z->re + z->im * z->im);
}

int main() {
    Complex z = {1.0, 0.5};
    double mod = modulo(&z);
    printf("mod(z) = %g", mod);

    return 0;
}
