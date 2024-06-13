#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    CircularQueue()
    {
        front = rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    int C_Q_EN_QUEUE(int val)
    {

        if (front == 0 && rear == 4)
        {
            cout << "Circular Queue is Overflow" << endl;
        }
        if (front = rear + 1)
        {
            cout << "Circular Queue is Overflow" << endl;
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

        return 0;
    }

    int C_Q_DE_QUEUE()
    {
        int x = 0;
        if (rear = front = -1)
        {
            cout << "Circular Queue is Underflow" << endl;
        }
        x = arr[front];
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
        }
        return 0;
    }

    int C_Q_Display()
    {
        if (rear = front = -1)
        {
            cout << "Circular Queue is Underflow" << endl;
        }

        else if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << "All Elements are :" << arr[i] << endl;
            }
        }

        else
        {
            for (int i = 0; i <= 4; i++)
            {
                cout << "All Elements are :" << arr[i] << endl;
            }

            for (int i = front; i <= 4; i++)
            {
                cout << "All Elements are :" << arr[i] << endl;
            }
        }
        return 0;
    }
};

int main()
{
    CircularQueue CQ1;
    int option, value;

    do
    {
        cout << "In these List which one Operation is Performed then Press the Number" << endl;
        cout << "1. Circular_Enqueue()" << endl;
        cout << "2. Circular_Dequeue()" << endl;
        cout << "3. Circular_Display()" << endl;

        cout << "Enter the Option Number which Operation are you perform " << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter the Number which is Inserted in Circuler Queue" << endl;
            cin >> value;
            CQ1.C_Q_EN_QUEUE(value);
            break;

        case 2:
            cout << "DEQUEUE Operation Called - Delete Value is :" << endl;
            CQ1.C_Q_DE_QUEUE();
            break;

        case 3:
            cout << "Display Function Called - All Elements are:" << endl;
            CQ1.C_Q_Display();
            break;

        default:
            cout << "Enter the Correct Option" << endl;
            break;
        }
    } while (option != 4);
    return 0;
}
