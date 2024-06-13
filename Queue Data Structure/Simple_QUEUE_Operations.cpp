#include <iostream>
#define max 5
using namespace std;

class Queue
{
private:
    int front, rear, arr[max];

public:
    Queue()
    {
        front = rear = -1;
        for (int i = 0; i < max; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (rear == max - 1)
        { // on the Position of "rear==arr[5]-1 placed 4."
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
        }
        else if (isEmpty())
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = val;
    }

    int dequeue()
    {
        int x = 0;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
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
        return x;
    }

    int count()
    {
        return (rear - front + 1);
    }
    void display()
    {
        for (int i = 0; i < max; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue Q1;
    int option, value;

    do
    {
        cout << "In these List which one Operation is Performed then Press the Number" << endl;
        cout << "0. Exit" << endl;
        cout << "1. isEmpty()" << endl;
        cout << "2. isFull()" << endl;
        cout << "3. enqueue()" << endl;
        cout << "4. dequeue()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. clear Screen()" << endl;

        cout << "Plese Enter Your Option!" << endl;
        cin >> option;

        switch (option)
        {
        case 0:
            break;

        case 1:
            if (Q1.isFull())
            {
                cout << "Queue is Full" << endl;
            }
            else
            {
                cout << "Queue is Not Full" << endl;
            }
            break;

        case 2:
            if (Q1.isEmpty())
            {
                cout << "Queue is Empty" << endl;
            }
            else
            {
                cout << "Queue is Not Empty" << endl;
            }
            break;

        case 3:
            cout << "In Enqueue Operation- Enter the item to be Inserted in the Queue" << endl;
            cin >> value;
            Q1.enqueue(value);
            break;

        case 4:
            cout << "Dequeue Operation Called - Dequeued Value is:" << Q1.dequeue() << endl;
            break;

        case 5:
            cout << "Count Operation is Called - Count Items is :" << Q1.count() << endl;
            break;

        case 6:
            cout << "Display Operation is Called - All Elements in Display are :" << endl;
            Q1.display();
            break;

        case 7:
            system("cls");
            break;

        default:
            cout << "Your Option is Invalid" << endl;
            break;
        }
    } while (option != 0);

    return 0;
}
