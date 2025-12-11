#include <stdio.h>

int main() {
    float a, b, c;
    
    scanf("%f", &a);
    float p1 = a * 0.95;
    printf("%.2f\n", p1);

    scanf("%f", &b);
    float p2 = (a + b) * 0.85;
    printf("%.2f\n", p2);

    scanf("%f", &c);
    float p3 = (a + b + c) * 0.70;
    printf("%.2f\n", p3);

    printf("vat = %.2f", p3 * 1.07);

    return 0;
}
