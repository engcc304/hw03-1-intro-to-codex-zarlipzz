#include <stdio.h>
#include <conio.h>

int main() {
    // Declare and initialize variables
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    // Print the addition of a and b
    printf("This is %d + %d = %d ", a, b, a + b);

    // Loop with condition
    for (int i = 0; i < d - 30; i++) {
        if (i < 30) {
            printf("Here ");
            if (i == 8) {
                printf("This is 8. ");
            }
        }
        printf("ok");
    }

    // Return 0 to indicate successful completion
    return 0;
}