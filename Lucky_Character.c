#include <stdio.h>

int main() {
    char word[100];
    scanf("%s", word);
    if (word[6] != NULL) {
        printf("%c
", word[6]);
    } else {
        printf("The word does not have at least seven letters.
");
    }

    return 0;
}
