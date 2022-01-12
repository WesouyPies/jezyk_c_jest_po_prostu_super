#include <stdio.h>

int main() {
     float n;
    printf("Witaj w programie podajacym wartosc bezwzgledna z podanej liczby.\n Podaj liczbe:\n");
    scanf("%f", &n);
    if(n>=0) {
        printf("Wartosc bezwzgledna z podanej liczby to: %.2f \n", n);

    }
    else {

        n = (float) n * -1;
        printf("Wartosc bezwzgledna z podanej liczby to: %.2f \n", n);

    }
getchar();

    return 0;
}
