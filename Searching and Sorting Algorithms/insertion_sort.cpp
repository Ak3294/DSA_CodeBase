#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    printf("Enter the Size of an  Array:");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("No Memory Allocation");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter the Value of an Array:");
            scanf("%d", (ptr + i));
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", *(ptr + i));
        }
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

// }