#include <stdio.h> 

int main() 
{
    // definerer sidene 
    double a, b, c;

    // header
    printf("Prisme kalkulator med input! \n");
    
    // input a 
    printf("Skriv inn tall på høyden: \n", a);
    scanf("%lf",&a);

    // input b 
    printf("Skriv inn tall på bredden: \n", b);
    scanf("%lf",&b);

    // input c
    printf("Skriv inn tall på lengden: \n", c);
    scanf("%lf",&c);

    // matte
    int svar = a * b * c;
    printf("Volumet av prismen er: %d\n", svar);

    return 0;
}
