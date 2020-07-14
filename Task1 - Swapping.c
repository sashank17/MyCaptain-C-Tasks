#include <stdio.h>

int main() {
    int a,b;
    printf("Enter 1st number:\n");
    scanf("%d", &a);
    printf("Enter 2nd number:\n");
    scanf("%d", &b);
    printf("Numbers before swapping:\n");
    printf("a = %d and b = %d\n", a, b);
    //swapping without temporary variable
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Numbers after swapping:\n");
    printf("a = %d and b = %d\n", a, b);
    return 0;
}
