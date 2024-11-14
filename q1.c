// Wap to check whether a given number is armstron or not
#include <stdio.h>
#include <math.h>
int main()
{
    int n, numberofdigits, count = 0, remainder, sumofpowers = 0, number, ognumber;
    printf("Enter the number:");
    scanf("%d", &number);
    ognumber = number;
    n = number;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    n = number;
    while (n != 0)
    {
        remainder = n % 10;
        sumofpowers = sumofpowers + pow(remainder, count);
        n = n / 10;
    }
    if (sumofpowers == ognumber)
    {
        printf("The number is armstrong");
    }
    else
    {
        printf("The number is not armstrong");
    }
}