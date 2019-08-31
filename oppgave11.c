#include <stdio.h>

int main(){

    // def var 
    int a, b, c, d;
    char x, y, z;
    a = 67;
    b = 13; 
    c = a + b;

    // arrayer
    int tall[5] = {
        a, b, c
    };
    int tall2[] = {
        6, 2, 10, 12, 19, 3, 7
    };
    char * tekst[] = {
        
    };
    char * adresse[] = {
        "Ringgata 111"
    };
    char * navn[] = {
        "Lars Hansen"
    };

    // kalkulere og printe 
    printf("%d, %d, %d \n", tall[0], tall[1], c / 2);
    tall[3] = tall2[0] + tall2[1] + tall2[2] + tall2[3];
    tall[4] = tall2[4] + tall2[5] + tall2[6];
    printf("%d, %d\n", tall[3], tall[4]);

    // loop for å øke tall i tredje element i array tall
    int n = 0;
    while(n < 4){
        n = n + 1;
        tall[2] = tall[2] + 1;
        printf("Øker verdien av tredje element i tall med 1: %d\n", tall[2]);
    }

    tekst[1] = "A";
    tekst[3] = "E";

    printf("%s, %s \n", tekst[1], tekst[3]);
    tekst[0] = navn[5];
    tekst[2] = navn[0];
    printf("Kua har %s  \n", tekst[0]);

    return 0;
}
