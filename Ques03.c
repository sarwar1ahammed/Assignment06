#include <stdio.h>
int main()
{
    // calculate sum of first N odd natural numbers

    int num,term=1,sum=0;
    printf("Input number of terms : ");
    scanf("%d", &num);

    while (term <= num)
    {
        sum = sum + 2*term-1;
        term++;
        
    }

    printf("Sum of first N odd natural numbers is : %d", sum);


    return 0;
}
