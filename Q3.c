#include <stdio.h>
int subtract(int a, int b) 
{
    b = ~b + 1;
    while (b != 0) {
        int carry = a & b;  
        a = a ^ b;           
        b = carry << 1;     
    }
    
    return a;
}
int main() 
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
int result = subtract(num1, num2);
    printf("The result of %d - %d is: %d\n", num1, num2, result);
    return 0;
}
