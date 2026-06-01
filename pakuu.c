#include<stdio.h>

int main() {
    int a, b, choice;

    printf("Enter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    scanf("%d", &choice);

    if(choice > 4 || choice < 1) {
        printf("You have entered a wrong number.\n");
    }
    else {
        printf("Enter two integers for solution:\n");
        scanf("%d %d", &a, &b);

        switch(choice)
        {
            case 1:
                printf("%d + %d = %d\n", a, b, (a + b));
                break;

            case 2:
                printf("%d - %d = %d\n", a, b, (a - b));
                break;

            case 3:
                printf("%d * %d = %d\n", a, b, (a * b));
                break;

            case 4:
                if(b != 0)
                    printf("%d / %d = %d\n", a, b, (a / b));
                else
                    printf("Enter a valid value\n");
                break;

            default:
                printf("You entered a wrong choice\n");
        }
    }

    return 0;
}