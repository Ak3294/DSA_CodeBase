#include <stdio.h>

void TOH(int n, char A, char B, char C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("Move a Disc from %d to %d", A, C);
        printf("\n");
        TOH(n - 1, B, A, C);
    }
}
int main()
{
    int blocks;
    char A, B, C;
    printf("Enter the Number of Blocks :");
    scanf(" %d", &blocks);
    TOH(blocks, A, B, C);
}