
#include <stdio.h>

int main() {
    // Demonstrating pointers
    int num = 10;
    int *ptr = &num;  // Pointer to num

    printf("Demonstrating Pointers:\n");
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address it points to): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Modifying value through pointer
    *ptr = 20;
    printf("After modifying through pointer, num = %d\n\n", num);

    // Demonstrating references (C doesn't have references, so we'll use C++)
    printf("In C++, references would work like this:\n");
    printf("int &ref = num;  // Reference to num\n");
    printf("ref = 30;  // This would change the value of num\n");
    printf("printf(\"num = %%d\\n\", num);  // Would print: num = 30\n");

    return 0;
}
