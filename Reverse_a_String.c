
    #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%99[^
]", str);
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("%s
", str);

    return 0;
}