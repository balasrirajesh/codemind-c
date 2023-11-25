#include <stdio.h>
int main() {
    int num, digit, largest = 0;
    scanf("%d", &num);
    while (num > 0) 
    {
        digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num /= 10;
    }
    printf("%d
", largest);

    return 0;
}
