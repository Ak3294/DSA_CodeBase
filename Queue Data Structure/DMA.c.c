#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    printf("Enter the Value of n\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("NO MEMORY ALLOACTION");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
                        printf("Enter the Value for Array\n");
            scanf("%p", (ptr + i));

        }
        for (int i = 0; i < n; i++)
        {
            printf("%d", *(ptr + i));
        }
        return 0;
    }
}