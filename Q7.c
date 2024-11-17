#include <stdio.h>
#include <math.h>
int binaryToDecimal(int binary) 
{
    int decimal = 0, base = 1, remainder;
    
    while (binary > 0) 
    {
        remainder = binary % 10;  
        decimal = decimal + remainder * base;
        binary = binary / 10;  
        base = base * 2;  
    }
    
    return decimal;
}

//decimal to binary 
void decimalToBinary(int decimal) 
{
    int binary[32]; 
    int index = 0;
    
    while (decimal > 0) 
    {
        binary[index] = decimal % 2;  
        decimal = decimal / 2;  
        index++;
    }

    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) 
    {
        printf("%d", binary[i]);
    }
    printf("\n");
}
//choice
int main() 
{
    int choice, num;
    printf("Choose the conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);
    if (choice == 1) {

        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal equivalent: %d\n", binaryToDecimal(num));
    } else if (choice == 2) {

        printf("Enter a decimal number: ");
        scanf("%d", &num);
        decimalToBinary(num);
    } else {
        printf("Invalid choice. Please choose either 1 or 2.\n");
    }

    return 0;
}
