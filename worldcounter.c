#include <stdio.h>
#include <ctype.h> // Krzychu //
#include <stdbool.h>

int main(){
    int wordcount = 1;  //liczy ilość spacje wiec jeżeli wprwowadzilibyśmy jedno słowo to by pokazało że jest zero słów
    int numchar = 0;    //ilość zanaków
    char character;
    while((character=getchar())!='\n'){     //wyczytujemy znak
        if(!isspace(character))     //jeżeli char różny od spacji zwiększamy ilość znaków
            numchar++;
        if(isspace(character))      //jeżeli zanak to spacja zwiększmy ilość słów
            wordcount++;
    }
    printf("liczba znakow wynosi %d, liczba slow wynosi %d", numchar, wordcount);
    return 0; //Wiktor Gruszka
}
