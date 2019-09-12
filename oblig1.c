/**     OBLIG 1 
 *      @ xxxxxxxxxxx
 *      @ 11.09.2019
 **/

#include <stdio.h> 
#include <stdbool.h> 

// definere globale verdier  

// premiere league tabell 
// navn, kamper spilt, mål for, mål imot, poeng 
char *Tabell[20][5] = {
    {"manchester united", "4", "4", "6", "5"},
    {"liverpool", "4", "1", "9", "1"},
    {"arsenal", "4", "3", "3", "2"},
    {"manchester city", "4", "5", "5", "9"},
    {"tottenham", "4", "13", "25", "32"}
};

// funksjon for å finne lag i tabellen
int finneLag(char lag){
    int len = sizeof(Tabell)/sizeof(Tabell[0]);
    int x, y;
    for(y = 0; y < len; y++){
        if(!strcmp(Tabell[y], lag)){
            y = x; 
            return x; 
        }
    }
}

// funksjon for å oppdatere tabellen 
char* oppdatereTabell(char lag, char maalFor, char maalMot, char poeng, char array){
    int i = array;
    int j;
    for(j=0; j<20; j++) {
        Tabell[i][2] =  Tabell[i][2] + 1;
        Tabell[i][3] =  Tabell[i][3] + maalFor;
        Tabell[i][4] =  Tabell[i][4] + maalMot;
        Tabell[i][5] =  Tabell[i][5] + poeng;
    }
}

// funksjon for å printe tabell 

void printeTabell(){
    printf("+-----------------------------------------+-------------+------------+---------------------+----------------+\n");
    printf("|       NAVN            |  KAMPER SPILT   |   MÅL MOT   |  MÅL FOR   |   MÅL DIFFERANSE    |   POENG        |\n");
    printf("+-----------------------+-----------------+-------------+------------+---------------------+----------------+\n");
    printf("|   s                  |      c         |      c     |    c       |       s             |     s          |\n");
}

// main spør om input og sjekker lagene via funksjoner 
int main(){
    int maalA, maalB, poengA, poengB, arrA, arrB;
    char lagA, lagB; 

    // henter input om lagenes navn og finner lagene i tabellen 
    printf("Skriv inn navnet på lag 1: \n");
    scanf("%s",&lagA);
    arrA = finneLag(lagA); 

    printf("Skriv inn navnet på lag 2: \n");
    scanf("%s",&lagB);
    finneLag(lagB);
    arrB = finneLag(lagB);
    
    // henter input om målstillingene 
    printf("Skriv inn mål for lag A: \n");
    scanf("%i",&maalA);
    printf("Skriv inn mål for lag B: \n");
    scanf("%i",&maalB);

    // henter input om poeng og oppdaterer tabellen     
    printf("Skriv inn mål for lag A: \n");
    scanf("%i",&poengA);
    printf("Skriv inn mål for lag B: \n");
    scanf("%i",&poengB);

    // oppdaterer tabbellen for hvert av lagene 
    char lag, maalFor, maalMot, poeng; 
    lag = lagA;
    maalFor = maalA;
    maalMot = maalB;
    poeng = poengA; 
    oppdatereTabell(lag, maalFor, maalMot, poeng, arrA);
    lag = lagB+'0';
    maalFor = maalB+'0';
    maalMot = maalA+'0';
    poeng = poengB+'0'; 
    oppdatereTabell(lag, maalFor, maalMot, poeng, arrB);

    // printer formattert tabell 
    printeTabell();

    // spørre om bruker vil fortsette
    return 0;     
}

