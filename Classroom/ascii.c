#include <stdio.h>
int main()
{
    int c;
    printf("Enter an ASCII : ");

    // Reads character input from the user
    scanf("%d", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII char value of %d = %c", c, c);
    return 0;
}
