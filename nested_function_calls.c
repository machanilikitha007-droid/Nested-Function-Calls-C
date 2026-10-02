#include <stdio.h>

int doubleValue(int number)
{
    return number * 2;
}

int addFive(int number)
{
    return number + 5;
}

int main()
{
    int number = 10;
    int result;

    result = addFive(doubleValue(number));

    printf("Original Number = %d\n", number);
    printf("Result = %d\n", result);

    return 0;
}
