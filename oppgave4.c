#include <stdio.h>

int main() 
{
    // definerer variabler
    char * navn = "xxx";
    char * adresse = "xxx xxx 33";
    int postnummer = 2222;
    char * poststed = "xxxx";
    int telefonnummer = 12345678;
    int alder = 11;

    // print og formattering
    printf("Navn: %s\n", navn);
    printf("Adresse: %s\n", adresse);
    printf("Sted: %s", poststed);
    printf(", %d\n", postnummer);
    printf("Telefonnummer: %d\n", telefonnummer);
    printf("Alder: %d\n", alder);

    return 0;
}
