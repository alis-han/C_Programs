// USER definited function to return reverse of a number using call by reference method

#include <stdio.h>

void reverse(int *num) {
    int rev = 0;
    while (*num > 0) {
        rev = rev * 10 + (*num % 10);
        *num /= 10;
    }
    *num = rev;
}

int main() {
    int num = 12345;
    printf("Original number: %d\n", num);
    reverse(&num);
    printf("Reversed number: %d\n", num);
    return 0;
}
