#include <stdio.h>

int sum(int x) {
    if (x == 0)
        return 0;
    else {
        int n = x % 10;
        return n + sum(x/10);
    }
}

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Sum of digits of the number: %d", sum(num));
}