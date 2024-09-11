#include <stdio.h>


int main() {

    FILE *file = fopen("gpsinput.csv", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    char line[256];
    fscanf(file, " %79[^\n] \n", line);
    printf("%s \n", line);
    
    fclose(file);
    return 0;
}