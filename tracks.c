#include <stdio.h>
#include <string.h>

char tracks[][80] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jima",
    };
void find_track(char search_for[]){
    int i;
    for (i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for)) {
            printf("Track %i: '%s'\n", i, tracks[i]);
        }

}}
int main() {
    
    puts(tracks[4]);
    puts(tracks[1]);
    puts(tracks[2]);
    puts(tracks[3]);
    putchar(tracks[0][0]);
    puts("");
    printf("This is a char: %c\n", tracks[0][0]);
    strcpy(tracks[0], "I love you");
    puts(tracks[0]);
    printf("This is a pointer: %p\n", strstr(tracks[0], "love"));
    printf("This is the index: %ld\n", (long)(strstr(tracks[0], "love") - tracks[0]));
    // printf("This is the index: %i\n", );
    find_track("Dancing");
    
    
}