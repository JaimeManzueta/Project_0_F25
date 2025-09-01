#include <stdlib.h>

char* rand_string(char* string, int num) {
    const char* letter_bank = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int bank_size = 52;

    for (int i = 0; i < num; i++) {
        string[i] = letter_bank[rand() % bank_size];
    }
    string[num] = '\0'; // null terminate
    return string;
}