#include <stdio.h>
#include <string.h>

/*
 * rot13.c
 * A simple ROT13 cipher implementation in C.
 * ROT13 shifts each letter by 13 positions in the alphabet.
 * Applying ROT13 twice returns the original text.
 */

/* Apply ROT13 to a single character */
char rot13_char(char c) {
    if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + 13) % 26;
    } else if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + 13) % 26;
    }
    return c; /* Non-alphabetic characters are unchanged */
}

/* Apply ROT13 to an entire string in place */
void rot13_string(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = rot13_char(str[i]);
    }
}

int main() {
    char input[1024];

    printf("==============================\n");
    printf("       ROT13 Cipher Tool      \n");
    printf("==============================\n");
    printf("Enter text to encode/decode: ");

    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    /* Remove trailing newline if present */
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    rot13_string(input);

    printf("ROT13 result: %s\n", input);
    printf("==============================\n");
    printf("(Apply ROT13 again to decode) \n");

    return 0;
}
