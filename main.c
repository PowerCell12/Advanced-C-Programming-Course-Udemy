#include <stdio.h>

int main() {
    FILE* fp;

    char fileName[20];

    scanf("%19s", fileName);

    fp = fopen(fileName, "r");

    if (fp == NULL) {
        printf("Error: Could not create file\n");
        return 1;
    }

    int alphabet[26] = { 0 };

    char currentCharacter = fgetc(fp);

    while (currentCharacter != EOF) {
        if ((int)currentCharacter > 96 && (int)currentCharacter < 123) {
            alphabet[(int)currentCharacter - 97] += 1;
        }

        currentCharacter = fgetc(fp);
    }

    int index = 0;

    for (int i = 0; i < 26; i++) {

        if (alphabet[i] > alphabet[index]) {
            index = i;
        }
    }

    printf("%c appeared the most times: %d", (char)97 + index,alphabet[index]);

    fclose(fp);


    return 0;
}
