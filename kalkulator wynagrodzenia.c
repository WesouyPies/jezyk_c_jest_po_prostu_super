#include <stdio.h>
//Urs Kaczmarek
#define WYNAGRODZENIE 40   //definiujemy stałe jak wynagrodzenie, standardową ilość godzin i stopy poddatkowe
#define PODGODZIN 40
#define POD1200 0.15
#define POD600 0.2
#define PODRESZTA 0.25 // Define //

int salary(int hours) {  //liczymy pensje
    if (hours <= PODGODZIN)    //sprawdzamy czy ilość godzi kwalifikuje na nadgodziny
        return hours * WYNAGRODZENIE;   //jeżeli mniej lub równa 40 to po prostu liczymy wynagdrodzenie
    else {
        int temp = hours - PODGODZIN;   //podajemy tymczasowego integera który odpowiada za ilość nadgodzin
        return hours * WYNAGRODZENIE + (temp * WYNAGRODZENIE * 1.5);
    }
}

int calctax(int salary) {   //funkcja licząca podatek
    int tax = 0;
    if(salary <= 1200)
        tax=salary * POD1200;   //liczymy podatek jeżeli wynagrodzemie wynosi 1200 lub mniej
    else{
        int temp = salary - 1200;   //liczymy podatek dla pierwszy 1200
        tax = salary * POD1200;
        if(temp <= 600 && temp>0){  //dla kolejnych 600
            tax += temp*POD600;
            temp-= 600;
            if(temp > 0)        //dla reszty wynagrodzenia
                tax += temp * PODRESZTA;
        }
    }

    return tax;
}

int main() {
    int hours;
    printf("Wprowadz ilosc przepracowanych godzin\n");
    scanf("%d", &hours);    //wprowadzamy ilość przepracowanych godzin
    printf("twoje wynagrodzenie to %d\ntwoj podatek do zaplacenia to %d", salary(hours),calctax(salary(hours)));
    return 0;
}
