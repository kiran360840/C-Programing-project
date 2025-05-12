#include <stdio.h>

int main()
{
    char yes;
    int a, b, c, choice;

    yes = 'y';
    while(yes == 'y' || yes == 'Y')
    {
        printf("Enter first integer: ");
        scanf("%d", &a);

        printf("Enter second integer: ");
        scanf("%d", &b);

        printf("\nAdd(1), Subtract(2), Multiply(3), Divide(4): ");
        scanf("%d", &choice);

        printf("\n");
        switch(choice) 
        {
                case(1):
                    c = a + b;
                    printf("%d + %d = %d\n", a, b, c);
                    break;
                case(2):
                    c = a - b;
                    printf("%d - %d = %d\n", a, b, c);
                    break;
                case(3):
                    c = a * b;
                    printf("%d * %d = %d\n", a, b, c);
                    break;
                case(4):
                    c = a / (float)b;
                    printf("%d / %d = %d\n", a, b, c);
                    break;
                default:
                    printf("Incorrect choice. Try again.\n");
        }

        printf("\nAgain (Y/N): ");
        scanf("%c", &yes);
    }

    return 0;
}