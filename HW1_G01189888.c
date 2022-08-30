// Program indicates whether an integer is negative, positive, or zero, and whether it is a multiple of 3.
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // Is number negative?
    if (number < 0) {
        printf("%d is negative.\n", number);
    }
    // Is number equal to zero?
    else if (number == 0) {
        printf("%d is zero.\n", number);
    }
    // Is number positive?
    else {
        printf("%d is positive.\n", number);
    }
    // Is number a multiple of 3? i.e. is the remainder of dividing the number by 3 equal to 0?
    if (number % 3 == 0) {
        printf("%d is a multiple of 3.\n", number);
    } else {
        printf("%d is not a multiple of 3.\n", number);
    }
    return 0;
}