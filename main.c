#include <stdio.h>

size_t count_smileys(size_t length, const char *const array[length]) {
    char eyes[2] = { ':', ';' };
    char noses[2] = { '-', '~' };
    char mouths[2] = { ')', 'D' };

    int i;

    for (i = 0; i < length; i++) {
        char emoji[] = array[i];

        printf("%s", emoji);
    }

}

int main(void) {
    const char *const array[4] = {":D", ":~)", ";~D", ":)"};

    count_smileys(2, array);

    return 0;
}
