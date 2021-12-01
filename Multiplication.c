#include <stdio.h>

void multiplication(int num, int index);

int main()
{
    int number;

    do
    {
        printf("Input a value: ");
        scanf("%d", &number);

        if ((number <= 1) || (number >= 100))
        {
            printf("The number is outside the range (between 1 to 100)!\n");
        }
    } while ((number <= 1) || (number >= 100));

    printf("Multiplication table of %d is : \n", number);

    multiplication(number, 1);
}

void multiplication(int num, int index)
{
    if (index <= 12)
    {
        multiplication(num, index + 1);
        printf("%d x %d = %d\n", index, num, index * num);
    }
}
