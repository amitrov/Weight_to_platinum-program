#include <stdio.h>

int main() {
    double weight;
    int value;

    
    printf("Enter your weight in pounds: \n");
    scanf("%lf", &weight); 

    
    value = 1770.0 * weight * 14.5;

    
    printf("Your weight in platinum costs $%.d.\n", value);

    printf("The character representation of value is: %c\n", value);

    printf("Value in octal: %o\n", value);

    printf("Value in hexadecimal: %x\n", value); 


    return 0;
}
