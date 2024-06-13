#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 10

int DEQ[max];
int rear = -1, front = -1;
int num;

int isFull()
{
    if (front = max - 1)
    {
        printf("Queue is Full\n");
    }
}

int isEmpty()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
}

int insertRear() //inject
{
    int num;
    printf("Enter the Value you want to Insert At Rear\n");
    scanf("%d", &num);
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == max)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
        DEQ[rear] = num;
    }
    printf("Value Inserted Successfully\n");
}

void insertFront()
{
    printf("Enter the Value you want to Insert At Front\n");
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (front == 0)
    {
        front = max - 1;
    }
    else
    {
        front = front - 1;
        DEQ[front] = num;
    }
    printf("Value Inserted Successfully\n");
}

int delrear() //eject
{
    int num;
    num = DEQ[rear];
    DEQ[rear] = 0;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        rear = max - 1;
    }
    else
    {
        rear = rear - 1;
    }
    printf("Deleted Value At rear is :%d\n", num);
}
void delfront() //pop
{
    int num;
    num = DEQ[front];
    DEQ[front] = 0;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == max - 1)
    {
        front = 0;
    }
    else
    {
        front = front + 1;
    }
    printf("Deleted Value at Front is :%d\n", num);
}

void display()
{
    int i;
    printf("front is:%d and rear is=%d", front, rear);
    printf("All the Elements are:-");
    for (i = 0; i < max; i++)
    {
        printf("|%d|", DEQ[i]);
    }
}

int main()
{
    int option;
    do
    {
        printf("Hello Guys This is Manudriven Program of Double Ended Queue\n");
        printf("Enter 1.Insert At Rear\n");
        printf("Enter 2.Insert At Front\n");
        printf("Enter 3.Delete At Front\n");
        printf("Enter 4.Delete At Rear\n");
        printf("Enter 5.Display Operation\n");
        printf("Enter 6.EXIT()\n");

        printf("Enter the Option for Perform the Opertaion\n");
        scanf("%d\n", &option);

        switch (option)
        {
        case 1:
            insertRear();
            break;
        case 2:
            insertFront();
            break;
        case 3:
            delfront();
            break;
        case 4:
            delrear();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;

        default:
            printf("Invalid Error!\n");
            break;
        }

    } while (option != 7);
    return 0;
}