#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("Largest number: %.2f\n", num1);
    else if (num2 >=

