#include <stdio.h>

int main(void)
{
    int start, end;
    printf("Enter range: ");
    if (scanf("%d,%d", &start, &end) != 2)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (start % 2 != 1 || end % 2 != 1)
    {
        if (start % 2 != 1)
        {
            start += 1;
        }
        if (end % 2 != 1)
        {
            end -= 1;
        }
    }

    for (int i = start; i <= end; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}