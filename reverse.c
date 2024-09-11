#include <stdio.h>
#include <string.h>

void print_reverse(char *message){
    int len = strlen(message);
    
    while ((len-1) >= 0) {
        char *t = message +len-1;
        // putchar(message[(len-1)]);
        // putchar('\n');
        putchar(t[0]);
        putchar('\n');

        len-=1;
}}

int main() {
    print_reverse("Hello");
    return 0;
}