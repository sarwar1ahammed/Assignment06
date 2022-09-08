#include <stdio.h>
int main()
{
    // calculate sum of cubes of first N natural numbers

    int num,term=1,sum=0;
    printf("Input number of terms : ");
    scanf("%d", &num);

    while (term <= num)
    {
        sum = sum + term*term*term;
        term++;
        
    }

    printf("Sum of cubes of first N natural numbers is : %d", sum);


    return 0;
}
