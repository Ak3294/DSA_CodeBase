#include <stdio.h>
#include <stdlib.h>
#define max 5

int val, pos;
int top = -1;
int arr[max];

void push(int val)
{
    if (top == max - 1) // Because indexing starts from 0
    {
        printf("Stack  is Overflow\n");
    }
    else
    {
        top++;
        arr[top] = val;
    }
    printf("Element Inserted Succesfully!\n");
}

void POP()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        arr[top] = 0;
        top--;
        val = arr[top];
    }
    printf("Element Deleted Succesfully!- Poped Value is %d\n", val);
}

void PEEP(int pos)
{
    // int Num = top - index + 1;
    if (top == -1)
    {
        printf("Element Not Found\n");
    }
    else
    {
        printf("PEEP function Called and Value at Position %d is : %d", pos, arr[pos]);
    }
}

void Display()
{
    if (top == -1)
    {
        printf("Stack is Underflow\n");
    }
    for (int i = 0; i < max; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
}

int main()
{
    int value, pos, option;
    do
    {
        printf("Which Operation Do you want to perform? Enter 0 to Exit\n");
        printf("Enter 1. - PUSH() Operation\n");
        printf("Enter 2. - POP() Operation\n");
        printf("Enter 3. - PEEP() Operation\n");
        printf("Enter 4. - Display() Operation\n");
        printf("Enter 5. - Exit()\n");

        printf("Enter the Number which One Operation are Perform : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter the Number to Be inserted in the Stack\n");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            POP();
            break;

        case 3:
            printf("Enter the Index of Item you want to PEEP\n");
            scanf("%d", &pos);
            PEEP(pos);
            break;

        case 4:
            printf("Display Function called - All the Elements are :\n");
            Display();
            break;

        default:
            printf("This is Invalid Number So, Please Enter Valid Number!\n");
            break;
            return 0;
        }
    } while (option != 5);
}

// Share Code of Online GDB : https://onlinegdb.com/YpYPO4ZDi