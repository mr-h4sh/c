#include <stdio.h>

int main() 
{
    // definere variabler
    int antallSekunder, timer, minutter, sekunder;
    int timerCalc, minutterCalc, sekunderCalc;
    antallSekunder = 312304;

    // kalkulere
    timer = antallSekunder / (60 * 60); 
    minutterCalc = antallSekunder % 3600; 
    minutter = minutterCalc / 60; 
    sekunderCalc = antallSekunder % 3600; 
    sekunder = sekunderCalc % 60; 

    // gi output til bruker
    printf("%d sekunder tilsvarer: %d timer, %d minutter, %d sekunder\n", antallSekunder, timer, minutter, sekunder);
    return 0;
}
