#include <stdio.h> 

int main(){
    //definere variabler 
    int count, odd, even;
    // loop til å sjekke
    for(int i = 1; i < 101; i++){
        if (i%2)
            printf("%d - Partall\n", i);
        else
            printf("%d - Oddetall\n", i);
    }
}
