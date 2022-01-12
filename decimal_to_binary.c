#include <stdio.h>

int main()
{
    for (int character = 32; character < 256;) { //pierwsze 32 wartości char to liczby co nas nie interesuje, 256 to jeden więcej niż maksymalna wartość char
        for (int cpr = 0; cpr < 16; cpr++) {     // cpr- characters per row. zwiększamy wartiść char (przejscie do następnego znaku) aż podniesiemy cpr do 16
            printf("%c ", (char)character);
            character++;
        }
        printf("\n"); // przejście do następnego wiersza.
    }
    return 0; //Wiktor Gruszka
}
