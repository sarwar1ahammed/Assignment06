#include <stdio.h>
int main()
{
    // calculate factorial of a number

    int num, term=1, fact=1;
    printf("Input number of terms: ");
    scanf("%d", &num);

    while (term <= num)
    {
        fact = fact * term ;
        term++;
    }

    printf("Factorial of %d is %d", num, fact);
    
    return 0;
}
