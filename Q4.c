#include <stdio.h>
void swapUsingTempVar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapUsingArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void swapUsingXOR(int *a, int *b) {
    if (a != b) {  
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}
void swapUsingPointer(int *a, int *b) 
{
    int *temp = a;
    a = b;
    b = temp; 
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nOriginal values: num1 = %d, num2 = %d\n", num1, num2);

    //variable
    swapUsingTempVar(&num1, &num2);
    printf("After swapping using a temporary variable: num1 = %d, num2 = %d\n", num1, num2);

    //arithmetic operators
    swapUsingArithmetic(&num1, &num2);
    printf("After swapping using arithmetic operators: num1 = %d, num2 = %d\n", num1, num2);

    // XOR operator
    swapUsingXOR(&num1, &num2);
    printf("After swapping using bitwise XOR: num1 = %d, num2 = %d\n", num1, num2);
    
    //pointers method
    swapUsingPointer(&num1, &num2);
    printf("After swapping using pointer (Note: not effective in this method): num1 = %d, num2 = %d\n", num1, num2);
return 0;
}
