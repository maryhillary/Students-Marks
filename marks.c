#include <stdio.h>
char grade = 'A';


int main() {
    int mark1, mark2, mark3;

    printf("Enter 3 marks: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    printf("Grade = %c\n", grade);
    printf("Average = %.2f\n", (mark1 + mark2 + mark3) / 3.0);

    return 0;
}