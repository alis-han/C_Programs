#include <stdio.h>

int reverse(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverse(num));
    return 0;
}

int reverse(int num) {
    static int rev_num = 0;
    if (num == 0) {
        return rev_num;
    }
    rev_num = rev_num * 10 + num % 10;
    reverse(num / 10);
}
