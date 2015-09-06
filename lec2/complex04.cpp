//
// Created by Pavel Filonov on 06.09.15.
//


#include <stdio.h>
#include <math.h>

struct Complex {
private:
    double re;
    double im;

public:
    void set(double real, double imag) {
        re = real;
        im = imag;
    }
    double modulo() { return sqrt(re*re + im*im); }
};

int main() {
    Complex z;
    z.set(1.0, 0.5);
    double mod = z.modulo();
    printf("mod(z) = %g", mod);

    return 0;
}
