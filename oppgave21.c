#include <stdio.h> 

void skrivTid(int time, int min, int sek){
    printf("%d:%d:%d\n", time, min, sek);  
    printf("Totalt antall sekunder: %d \n", time*3600 + min*60 + sek);
}

int main(){
    int time, min, sek;
    printf("Skriv inn timer: \n");
    scanf("%d",&time);
    printf("Skriv inn minutter: \n");
    scanf("%d",&min);
    printf("Skriv inn sekunder: \n");
    scanf("%d",&sek);
    skrivTid(time, min, sek);
    return 0;
}
