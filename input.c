#include <stdio.h>

int main(){
    char name[40];
    fgets( name, 40, stdin);
    printf("Input: %s\n", name);

    int i;
    scanf("%i", &i);
    printf("Input: %i\n", i);
    return 0;
}