#include <stdio.h>
#include <string.h>

int main(char* argc, int argv) {
    char inputStrings[100][100];
    int lineCounter = 0, longestStringLength = 0, currentStringLength = 0;
    printf("Enter your lines.\n");

    // Read in each line, until the string "<end>" is inputted.
    // Keep track of what the longest string length is.
    while (1) {
        scanf("%s", inputStrings[lineCounter]);
        currentStringLength = strlen(inputStrings[lineCounter]);
        if (currentStringLength > longestStringLength) {
            longestStringLength = currentStringLength;
        }
        if (strcmp(inputStrings[lineCounter], "<end>") == 0) {
            break;
        }
        lineCounter++;
    }

    longestStringLength += 6;

    // Print the header.
    for (int i = 0; i < longestStringLength; i++) {
        printf("%s", "/");
    }
    printf("\n");
    for (int i = 0; i < lineCounter; i++) {
        int whiteSpaceSize = (longestStringLength - 6) - strlen(inputStrings[i]);
        printf("// %s", inputStrings[i]);
        for (int i = 0; i < whiteSpaceSize; i++) {
            printf(" ");
        }
        printf(" //\n");
    }
    // Print the trailer.
    for (int i = 0; i < longestStringLength; i++) {
        printf("%s", "/");
    }
    return 0;
}   