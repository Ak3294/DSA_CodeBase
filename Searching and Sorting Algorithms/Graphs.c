// STACK using Linked list
// Queue using linked List

// Make Incidence Matrix
//  Adjecing matrix using directional
//  Incidence Matrix using directional

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, i, j, ip, fp;
    printf("Enter the No. of Vertex :");
    scanf("%d", &N);
    printf("Enter the No.of Edges :");
    scanf("%d", &M);

    int arr[M][2];
    int adj[N][N];

    printf("Enter the List of Vertex :");
    for (i = 0; i <= M; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", arr[i][j]);
        }
    }
    for (i = 1; i < N; i++)
    {
        ip = arr[i][0];
        fp = arr[i][1];
        adj[ip][fp] = 1;
        adj[fp][ip] = 1;
    }
    for (i = 1; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d", adj[i][j]);
        }
    }
}