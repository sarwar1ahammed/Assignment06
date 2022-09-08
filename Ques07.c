#include <stdio.h>
int main()
{
    // count digits in a given number

    int num, count=0;
    printf("Enter a number : ");
    scanf("%d", &num);

    for ( ; num ; count++)
    {
        num = num / 10;
    }

    printf("Digit of the given number is %d", count);

    return 0;
}