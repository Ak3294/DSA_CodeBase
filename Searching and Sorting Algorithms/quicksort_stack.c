/*
//Test Case : PASSED(100%)

// Using Iterative Method
// An iterative implementation of quick sort
#include <stdio.h>

// A utility function to swap two elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//This function is same in both iterative and recursive
int partition(int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

// A[] --> Array to be sorted,
// l --> Starting index,
// h --> Ending index
void quickSortIterative(int arr[], int l, int h)
{
    // Create an auxiliary stack
    int stack[h - l + 1];

    // initialize top of stack
    int top = -1;

    // push initial values of l and h to stack
    stack[++top] = l;
    stack[++top] = h;

    // Keep popping from stack while is not empty
    while (top >= 0)
    {
        // Pop h and l
        h = stack[top--];
        l = stack[top--];

        // Set pivot element at its correct position
        // in sorted array
        int p = partition(arr, l, h);

        // If there are elements on left side of pivot,
        // then push left side to stack
        if (p - 1 > l)
        {
            stack[++top] = l;
            stack[++top] = p - 1;
        }

        // If there are elements on right side of pivot,
        // then push right side to stack
        if (p + 1 < h)
        {
            stack[++top] = p + 1;
            stack[++top] = h;
        }
    }
}

// A utility function to print contents of arr
void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}

// Driver program to test above functions
int main()
{
    int n;
    printf("Enter the Size of an Array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Element of an Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quickSortIterative(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}

*/

// Test Case : PASSED(100%)

#include <stdio.h>
#include <stdlib.h>

int stack1[100], stack2[100];
int top1 = -1, top2 = -1;
void pushS1(int lo1)
{
    if (top1 == 99)
    {
        printf("stack is full\n");
    }
    else
    {
        top1++;
        stack1[top1] = lo1;
    }
}
void pushS2(int uo1)
{
    if (top2 == 99)
    {
        printf("stack is full\n");
    }
    else
    {
        top2++;
        stack2[top2] = uo1;
    }
}
int popS1()
{
    if (top1 == -1)
    {
        printf("Empty stack no element to pop\n");
        return -1;
    }
    else
    {
        int temp;
        temp = stack1[top1];
        top1--;
        return temp;
    }
}
int popS2()
{
    if (top2 == -1)
    {
        printf("Empty stack no element to pop\n");
        return -1;
    }
    else
    {
        int temp;
        temp = stack2[top2];
        top2--;
        return temp;
    }
}
int Quick(int a[], int l, int u)
{
    int loc = l;
redo:
    while ((a[loc] <= a[u]) && (loc != u))
    {
        u = u - 1;
    }
    if (loc == u)
    {
        return loc;
    }
    if (a[loc] > a[u])
    {
        int temp = a[loc];
        a[loc] = a[u];
        a[u] = temp;
        loc = u;
    }
    while ((a[loc] >= a[l]) && (loc != l))
    {
        l = l + 1;
    }
    if (loc == l)
    {
        return loc;
    }
    if (a[loc] < a[l])
    {
        int temp = a[loc];
        a[loc] = a[l];
        a[l] = temp;
        loc = l;
    }
    goto redo;
}
int main()
{
    int n, loc, llimit, ulimit;
    printf("Enter the Size of an Array : ");
    scanf("%d", &n);
    printf("Enter the %d Elements of an Array below \n", n);
    int Arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }
    int begin = 0, end = n - 1;
    pushS1(begin);
    pushS2(end);

    printf("\nStatus of stack_01 is : ");
    for (i = 0; i <= top1; i++)
        printf("%d ", stack1[i]);
    printf("\nStatus of stack_02 is : ");
    for (i = 0; i <= top2; i++)
        printf("%d ", stack2[i]);

    while ((top1 != -1) && (top2 != -1))
    {
        llimit = popS1();
        ulimit = popS2();
        //
        printf("\nStatus of stack_01 is : ");
        for (i = 0; i <= top1; i++)
            printf("%d ", stack1[i]);
        printf("\nStatus of stack_02 is : ");
        for (i = 0; i <= top2; i++)
            printf("%d ", stack2[i]);

        if (llimit == ulimit)
            continue;
        loc = Quick(Arr, llimit, ulimit);

        if (llimit == loc)
        {
            // for leftshort array case
            pushS1(loc + 1);
            pushS2(ulimit);

            printf("\nStatus of stack_01 is : ");
            for (i = 0; i <= top1; i++)
                printf("%d ", stack1[i]);
            printf("\nStatus of stack_02 is : ");
            for (i = 0; i <= top2; i++)
                printf("%d ", stack2[i]);
        }

        else if (ulimit == loc)
        {
            // for rightshort array case
            pushS1(llimit);
            pushS2(loc - 1);

            printf("\nStatus of stack_01 is : ");
            for (i = 0; i <= top1; i++)
                printf("%d ", stack1[i]);
            printf("\nStatus of stack_02 is : ");
            for (i = 0; i <= top2; i++)
                printf("%d ", stack2[i]);
        }
        else
        {
            // for an ideal case
            pushS1(llimit);
            pushS2(loc - 1);
            pushS1(loc + 1);
            pushS2(ulimit);

            printf("\nStatus of stack_01 is : ");
            for (i = 0; i <= top1; i++)
                printf("%d ", stack1[i]);
            printf("\nStatus of stack_02 is : ");
            for (i = 0; i <= top2; i++)
                printf("%d ", stack2[i]);
        }
    }
    printf("Sorted Order of Array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }
    return 0;
}
