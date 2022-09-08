#include <stdio.h>
int main()
{
    // calculate sum of first N even natural numbers

    int num,term=1,sum=0;
    printf("Input number of terms : ");
    scanf("%d", &num);

    while (term <= num)
    {
        sum = sum + 2*term;
        term++;
        
    }

    printf("Sum of first N even natural numbers is : %d", sum);


    return 0;
}