# include <stdio.h>

int main(void) {
    double fahr;
    double celcius;
    int lower = 0;
    int upper = 300;
    int step = 20;

    printf("Celsius\tFahrenheit\n");
    celcius = (double)lower;
    while (celcius <= (double)upper)
    {
        fahr = (9.0 / 5.0) * celcius + 32.0;
        printf("%3.0f\t\t%6.1f\n", celcius, fahr);
        celcius = celcius + step; 
    }
    return 0;
}