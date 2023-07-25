#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main() {
    // Seed for the random number generator
    srand(time(0));

    char password[PASSWORD_LENGTH + 1]; // One extra for the null terminator

    // Define the valid characters that can be used in the password
    char valid_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // The number of valid characters
    int num_valid_characters = sizeof(valid_characters) - 1;

    for(int i = 0; i < PASSWORD_LENGTH; i++) {
        // Get a random index into valid_characters
        int index = rand() % num_valid_characters;

        // Use the random index to select a character
        password[i] = valid_characters[index];
    }

    // Null terminate the password
    password[PASSWORD_LENGTH] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}

