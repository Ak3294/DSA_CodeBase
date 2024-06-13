#include <stdio.h>
#include <stdlib.h>

int front = -1;
int rear = -1;
int number = 0;
int arr[5];

void C_Q_EN_Queue(int val)
{
    if (front == 0 && rear == 4)
    {
        printf("Circular Queue is Overflow\n");
    }
    if (front = rear + 1)
    {
        printf("Circular Queue is Overflow\n");
    }

    if (rear = front = -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear = 4 && front != 0)
    {
        rear = 0;
    }

    else
    {
        rear++;
        arr[rear] = val;
    }
}

void C_Q_DE_Queue()
{
    int x = 0;
    if (rear = front = -1)
    {
        printf("Circular Queue is Underflow\n");
    }

    if (front = rear != -1)
    {
        front = -1;
        rear = -1;
    }
    else if (front = 4)
    {
        front = 0;
    }
    else
    {
        front++;
        x = arr[front];
        printf("Deletion Function Called - Delete Value is:%d\n", x);
    }
}

void C_Q_Display()
{
    // if (rear = front = -1)
    // {
    //     printf("Circular Queue is Underflow\n");
    // }

    if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("All Elements are :%d\n", arr[i]);
        }
    }

    else
    {

        for (int i = front; i <= 4; i++)
        {
            printf("All Elements are :%d\n",arr[i]);
        }
    }
}

int main()
{
    int option, value;

    do
    {
        printf("In these List which one Operation is Performed then Press the Number\n");
        printf("1. C_Q_EN_QUEUE()\n");
        printf("2. C_Q_DE_QUEUE()\n");
        printf("3. C_Q_Display()\n");
        printf("4. clear Screen()\n");
        printf("5. EXIT()\n");

        printf("Plese Enter Your Option!\n");
        scanf("%d", &option);

        switch (option)
        {

        case 1:
            printf("In Enqueue Operation- Enter the item to be Inserted in the Queue :\n");
            scanf("%d", &value);
            C_Q_EN_Queue(value);
            break;

        case 2:
            C_Q_DE_Queue();
            break;

        case 3:
            C_Q_Display();
            break;

        case 4:
            system("cls");
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("Your Option is Invalid\n");
            break;
        }
    } while (option != 5);
     return 0;
}