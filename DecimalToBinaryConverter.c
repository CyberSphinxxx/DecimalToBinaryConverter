#include <stdio.h>

void decimalToBinaryConverter(int DecimalNumber){
    if (DecimalNumber == 0){
        return;
    }

    decimalToBinaryConverter(DecimalNumber / 2);
    printf("%d", DecimalNumber % 2);

}

int main(){

    int DecimalNumber;

    printf("Enter the DECIMAL NUMBER: ");
    scanf("%d", &DecimalNumber);

    printf("\nDecimal Number: %d\nBinary Equivalent: ", DecimalNumber);
    decimalToBinaryConverter(DecimalNumber);
    return 0;
}
