#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int front = -1;
int rear = -1;
int number = 0;
int arr[MAX], i;

void enqueue(int val)
{
    if (rear == MAX - 1)
    {
        printf("Queue is Full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear++;
    }
    arr[rear] = val;
    printf("Value is Inserted Succesfully!\n");
}

void dequeue()
{
    int x = 0;
    if (front == -1 && rear == -1) // If queue is empty
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear) // if queue have only one element
    {
        x = arr[front];
        front = rear = -1;
    }
    else // queue have more than one element
    {
        x = arr[front];
        front++;
    }
    printf("Dequeue Operation Called - Deletion of  Value is:%d\n", x);
}

int count()
{
    number = rear - front + 1;
    printf("Count Operation called- No. of element in the queue is :%d\n", number);
}
void display()
{
    for (i = 0; i < MAX; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int option, value;

    do
    {
        printf("In these List which one Operation is Performed then Press the Number\n");
        printf("1. enqueue()\n");
        printf("2. dequeue()\n");
        printf("3. count()\n");
        printf("4. display()\n");
        printf("5. clear Screen()\n");

        printf("Plese Enter Your Option!\n");
        scanf("%d", &option);

        switch (option)
        {

        case 1:
            printf("In Enqueue Operation- Enter the item to be Inserted in the Queue :\n");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:

            dequeue();
            break;

        case 3:
            count();
            break;

        case 4:
            printf("Display Operation is Called -All the Elements are:\n");
            display();
            break;

        case 5:
            system("cls");
            break;

        default:
            printf("Your Option is Invalid\n");
            break;
        }
    } while (option != 6);

    return 0;
}