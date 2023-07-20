#include <stdio.h>

int main() {
    int distance;
    double fuel, averageConsumption;

    // Leitura dos valores de distância e combustível
    scanf("%d", &distance);
    scanf("%lf", &fuel);

    // Cálculo do consumo médio
    averageConsumption = distance / fuel;

    // Impressão do resultado com 3 casas decimais
    printf("%.3f km/l\n", averageConsumption);

    return 0;
}
