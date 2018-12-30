/**
Function Category: No argument but returns value
**/
#include <stdio.h>
// Return integer data has no argument
int getInteger();

int main()
{
    int n, i, flag = 0;

    n = getInteger();   // no argument is passed
    // after getInteger is called and executed it returns a integer value
    // which is then stored in variable n
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0){
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);

    return 0;
}

int getInteger()       // returns integer entered by the user
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    return n;
}
