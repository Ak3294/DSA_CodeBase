#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int arr[MAX];
int front = -1, rear = -1;

void enqueue(int val)
{
    if (rear == MAX - 1)
    {
        printf("Queue is Overflow and Exit\n");
    }
    else
    {
        rear++;
        arr[rear] = val;
        printf("Inserted Value is :%d\n", val);
    }
}

void dequeue()

{
    int x;
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)

    {
        x = arr[front];
        front = rear = -1;
    }
    else
    {
        x = arr[front];
        front++;
    }
    printf("Delete Value is : %d", x);
}
void peep(int pos)
{
    printf("Value at Position %d is : %d", pos, arr[pos]);
}

void display()
{
    for (int i = 0; i < 5; i++)
    {
        printf("All the Elements are :%d\n", arr[i]);
    }
}

int main()
{
    int option, val, pos;

    do
    {
        printf("\nSimple Queue Operations\n");
        printf("Enter 1 : enqueue()\n");
        printf("Enter 2 : dequeue()\n");
        printf("Enter 3 : peep()\n");
        printf("Enter 4 : Display()\n");

        printf("Enter the Option You want to Perform : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter the Number you want to insert in the Queue :");
            scanf("%d", &val);
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("Enter the Position of element in the Queue :");
            scanf("%d", &pos);
            peep(pos);
            break;
        case 4:
            display();
            break;

        default:
            break;
        }

    } while (option != 5);

    return 0;
}