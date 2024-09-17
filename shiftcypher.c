#include <stdio.h>
#include <ctype.h>

void decrypt_shift_cipher(char *ciphertext, int shift) {
    char decrypted_char;
    for (int i = 0; ciphertext[i] != '\0'; i++) {
        if (isalpha(ciphertext[i])) {
            char base = islower(ciphertext[i]) ? 'a' : 'A';
            decrypted_char = (ciphertext[i] - base - shift + 26) % 26 + base;
        } else {
            decrypted_char = ciphertext[i];  // Non-alphabet characters remain unchanged
        }
        putchar(decrypted_char);
    }
    putchar('\n');  // Print a new line after each decrypted message
}

void break_shift_cipher(char *ciphertext) {
    for (int shift = 0; shift < 26; shift++) {
        printf("Shift: %d, Decrypted text: ", shift);
        decrypt_shift_cipher(ciphertext, shift);
    }
}


int main() {
    char cipher[] = "xultpaajcxitltlxaarpjhtiwtgxktghidhipxciwtvgtpilpitghlxiwiwtxgqadds";

    break_shift_cipher(cipher);
    return 0;
    
}