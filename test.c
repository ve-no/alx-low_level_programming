#include <stdio.h>
#include <unistd.h>


void print_shape(int num1, int num2)
{
    int idx1, idx2;
    for (idx1 = 0; idx1 < num1; idx1++)
    {
        for (idx2 = 0; idx2 < num2; idx2++)
        {
            printf("#");
        }
        printf("\n");
    }
}

/**
* main - calls print_shape()
*
* Return: Always 0.
**/

int main(void)
{
int n = 98;
int *p = &n;

    printf("%d", n);

    return (0);
}
