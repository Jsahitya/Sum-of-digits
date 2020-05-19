#include <stdio.h>


int sumOfDigits(int num);


int main()
{
    int num, sum;
    
    printf("Enter Any Number To Find Sum Of Digits: ");
    scanf("%d", &num);
    
    sum = sumOfDigits(num);
    
    printf("Sum Of Digits Of %d = %d", num, sum);
    
    return 0;
}


/**
 * Recursive function to find sum of digits of a number
 */
int sumOfDigits(int num)
{
    // Base condition
    if(num == 0)
        return 0;
        
    return ((num % 10) + sumOfDigits(num / 10));
}
