// beecrowd | 2454 - Flíper

#include <stdio.h>
 
int main() {
 
    int P, R;
    
    scanf("%i %i", &P, &R);
    
    if(P == 0)
    {
        printf("C\n");
    }
    else if(R == 0)
    {
        printf("B\n");
    }
    else
    {
        printf("A\n");
    }
    
    return 0;
}