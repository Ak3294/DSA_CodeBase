#include <stdio.h>
void sum(int *, int); // function Prototyping
int main()
{
    int A[10], i, n, n1, result = 0,r;
    printf("Enter Size of an Array\n");
    scanf("%d", &n);

    printf("Enter the Array Value\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    result = sum(A, r); // Function Calling sum(A,r) are Actual Argument

    printf("Sum of the Array are :%d", result);
}
void sum(A1, n1) // function Definition sum(A1,n1) is Actual Argument
{
    if (n1 == 1)
    {
        return A1[0];
    }
    else
    {
        return (sum(A1, n1 - 1) + A1[n1 - 1]);
    }
}
