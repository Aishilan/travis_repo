#include <stdio.h>
int main()
{
    int n, reversedInteger = 0,  originalInteger;

    n=12321;

    originalInteger = n;

    // reversed integer is stored in variable 
    while( n!=0 )
    {
        int remainder;
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
