#include <stdio.h>
#include <stdint.h>

int main() {
    uint16_t max_value = 0xFFFF; // 65,535
    uint16_t result = max_value + 1;

    printf("Result: %u\n", result); // Output will be 0
    return 0;
}
