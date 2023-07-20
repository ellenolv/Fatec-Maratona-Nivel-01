#include <stdio.h>

int main() {
    double R, A;
    const double pi = 3.14159;


    scanf("%lf", &R);

    // Cálculo da área A = π * R^2
    A = pi * R * R;

    // Impressão do resultado com quatro casas decimais
    printf("A=%.4f\n", A);

    return 0;
}
