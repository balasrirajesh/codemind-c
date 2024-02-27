#include <stdio.h>

int main() {
    char str[100];

   
    scanf("%[^
]", str); 

    int count = 0;
    int inWord = 0; 

    for (int i = 0; str[i] != NULL; i++) {
        if (str[i] == ' ' || str[i] == '	' || str[i] == '
') {
           
            inWord = 0;
        } else {
           
            if (inWord == 0) {
                count++;
                inWord = 1; 
            }
        }
    }

    printf("%d
", count);

    return 0;
}
