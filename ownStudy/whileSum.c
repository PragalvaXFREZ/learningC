#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    // Input the number of squares to compute
    printf("Enter the number of squares to compute: ");
    scanf("%d", &num);

    // Compute and print the sum of squares
    for (int i = 1; i <= num; i++) {
        sum += i * i; // Calculate square and add to sum
    }

    printf("The sum of squares of the first %d integers is: %d\n", num, sum);

    return 0;
}
