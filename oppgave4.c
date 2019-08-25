#include <stdio.h>

int main() 
{
    // definerer variabler
    char * navn = "ola";
    char * adresse = "Prost Bloms Gate 32";
    int postnummer = 2817;
    char * poststed = "Gjøvik";
    int telefonnummer = 41144491;
    int alder = 26;

    // print og formattering
    printf("Navn: %s\n", navn);
    printf("Adresse: %s\n", adresse);
    printf("Sted: %s", poststed);
    printf(", %d\n", postnummer);
    printf("Telefonnummer: %d\n", telefonnummer);
    printf("Alder: %d\n", alder);

    return 0;
}
