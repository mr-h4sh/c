#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h; 
    char x, z;
    printf("Skriv inn et heltall: \n");
    scanf("%d",&a);
    printf("Skriv inn enda ett heltall: \n");
    scanf("%d",&b);
    c = a + b;
    d = a - b; 
    e = a * b; 
    printf("Addert: %d\nSubtrahert: %d\nMultiplisert: %d\n", c, d, e);

    printf("Vil du gjøre det en gang til? (j/n)\n");
    scanf("%s",&x);   
    
    for(;x == 'j';){
        f = ((a + b) + c);
        g = ((a - b) - d);
        h = ((a * b) * e);
        printf("Addert: %d\nSubtrahert: %d\nMultiplisert: %d\n", f, g, h);
        printf("Vil du gjøre det en gang til? (j/n)\n");
        scanf("%s",&x);
        
        if(x == 'n'){
            break;
        }
    }
    return 0;
}
