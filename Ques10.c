#include <stdio.h>
int main()
{
    // reverse a given number

    int num, reverse=0, reminder;
    printf("Enter a Number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        reminder = num % 10;
        num = num / 10;
        reverse = reverse * 10 + reminder;
    }
    printf("Reverse number is %d", reverse);
    
    return 0;
}
