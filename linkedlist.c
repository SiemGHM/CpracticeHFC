#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct island{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island amity = {"Amity", "09:00", "17:00", NULL};
island craggy = {"Craggy", "09:00", "17:00", NULL};
island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL}; 
island shutter = {"Shutter", "09:00", "17:00", NULL};
island skull = {"Skull", "09:00", "17:00", NULL}; 



void display(island *start) {
    island *i = start;
    for (; i != NULL; i = i->next) {
        printf("Name: %s\nOpens: %s\nCloses: %s\n\n", i->name, i->opens, i->closes);
    }
    
}

island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}

int main() {
    amity.next = &craggy;
    craggy.next = &isla_nublar;
    // isla_nublar.next = &shutter;
    
    isla_nublar.next = &skull;
    //This connects Isla Nublar to 
    skull.next = &shutter;

    display(&isla_nublar);

    char name[80];
    fgets(name, 80, stdin);
    island *p_island0 = create(name);

    fgets(name, 80, stdin);
    island *p_island1 = create(name);
    p_island0->next = p_island1;

    display(p_island0);


}