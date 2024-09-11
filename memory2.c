#include <stdio.h>

int main(){
    char s[] = "How big is it?"; 
    char *t = s;
    printf("s = %p, t = %p\n", s, t);
    printf("s[0] = %c, t[0] = %c\n", s[0], t[0]);
    printf("s = %s, t = %s\n", s, t);
    printf("sizeof(s) = %lu, sizeof(t) = %lu\n", sizeof(s), sizeof(t));
    printf("(&s==s) is %d, (&t==t) is %d\n", (&s==s), (&t==t));
    return 0;
}