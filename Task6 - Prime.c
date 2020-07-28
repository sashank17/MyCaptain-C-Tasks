#include <stdio.h>

int prime(int y,int i)
{
    if(i < y)
    {
        if(y % i != 0)
            return(prime(y, ++i));
        else
            return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int x = prime(num, 2);
    if (x == 1)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
}