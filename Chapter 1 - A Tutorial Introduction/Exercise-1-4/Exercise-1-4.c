#include <stdio.h>

int main() {
    float celsius, fahr = 0.0;
    float upperBound = 300, lowerBound = 0, step = 20;
    celsius = lowerBound;
    printf("Celsius to Fahrenheit table\n");
    while (celsius <= upperBound){
        fahr = (celsius * (9.0/5.0)) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}

