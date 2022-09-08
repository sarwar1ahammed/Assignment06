#include <stdio.h>
int main()
{
    // calculate LCM (Least common multiple) of two numbers

    int a, b, i=1;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    while (i < a*b)
    {
        if (i % a == 0 && i % b == 0)
        {
            break;
        }
        i++;
    }

    printf("LCM is %d", i);
    

    return 0;
}
