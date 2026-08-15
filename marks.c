#include <stdio.h>

int main() {
    int mark1, mark2, mark3;

    printf("Enter 3 marks: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);

    printf("Average = %.2f\n", (mark1 + mark2 + mark3) / 3.0);

    return 0;
}