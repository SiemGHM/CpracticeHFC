#include <stdio.h>

struct fish
{
    /* data */
    const char *name;
    const char *species;
    int teeth;
    int age;
};


void label(struct fish f) {
printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
f.name, f.species, f.teeth, f.age); }


int main() {
    struct fish snappy = {"Snappy", "Piranha", 69, 4};
    label(snappy);
    return 0;
}