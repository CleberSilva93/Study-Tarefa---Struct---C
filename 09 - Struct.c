#include <stdio.h>
#include <locale.h>

struct {
    float real;
    float complexo;
} z, w;

int main() {
    setlocale(LC_ALL,"portuguese");
    printf("Insert Z values: R i\n\n");
    scanf("%f %f", &z.real, &z.complexo);
    printf("Insert W values: R i\n\n");
    scanf("%f %f", &w.real, &w.complexo);
    printf("\nZ + W = (%0.2f) + (%0.2fi)", z.real + w.real, z.complexo + w.complexo);
    printf("\nZ - W = (%0.2f) + (%0.2fi)", z.real - w.real, z.complexo - w.complexo);
    printf("\nW - Z = (%0.2f) + (%0.2fi)", w.real - z.real, w.complexo - z.complexo);
    printf("\nZ * W = (%0.2f) + (%0.2fi)", ((z.real * w.real) + (-1*(z.complexo * w.complexo))), ((z.real * w.complexo) + (z.complexo * w.real)));

    return 0;
}
