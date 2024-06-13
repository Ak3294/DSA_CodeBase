#include <iostream>
using namespace std;

class Stack
{
private:
    int TOP;
    int arr[5];

public:
    Stack()
    {
        TOP = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    // Is Empty Operation are used to check the condition of Underflow
    bool isEmpty()
    {
        if (TOP == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // IsFull Operation is used to check the Condition of Overflow
    bool isFull()
    {
        if (TOP == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // PUSH Operations

    void PUSH(int Val) // PUSH some Value like int val
    {
        if (isFull()) //  Check the Condition of Overflow
        {
            cout << "Stack Overflow" << endl; // Print Overflow
        }
        else
        {                   // If Not Overflow
            TOP++;          // Top is Incrimented by 1
            arr[TOP] = Val; // Inserted the value at TOP
        }
    }

    // POP Operations
    int POP() // In POP operations No value are used outside the stack
    {
        if (isEmpty()) // Check the Underflow Condition
        {
            cout << "Stack Underflow" << endl; // Print Underflow
            return 0;
        }
        else
        {                            // If Stack is not EMPTY
            int POPvalue = arr[TOP]; // Top value of an stack represented as TOPval
            arr[TOP] = 0;            // POP the Element at TOP and remaining value is set as 0
            TOP--;                   // Top is Decrimented by 1
            return POPvalue;         // Return the Top value
        }
    }
    // Count is used to count the element present in the stack.
    int count()
    {
        return (TOP + 1);
        // No. of element is always greater the 1 of Top element index.Ex. in a[5] stack have 6 element.
    }
    // PEEP Operation are Used to find position of the stack element.
    int PEEP(int pos)
    {
        if (isEmpty())
        {                                      // Check the Underflow Condition
            cout << "Stack Underflow" << endl; // Print Underflow
        }
        else
        {
            return arr[pos];
        }
    }

    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "Value is Changed at Location" << pos << endl;
    }

    void display()
    {
        cout << "All Values of stack are Here!" << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    Stack s1;
    int Option, position, value;
    do
    {
        cout << "Which Operation Do You want to Perform?, Enter 0 to EXIT" << endl;
        cout << "1. PUSH()" << endl;
        cout << "2. POP()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. PEEP()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. Display()" << endl;
        cout << "9. Clear Screen" << endl;

        cin >> Option;
        switch (Option)
        {

        case 0:
            break;

        case 1:
            cout << "Enter the Item to Push into the Stack" << endl;
            cin >> value;
            s1.PUSH(value);
            break;

        case 2:
            cout << "POP Function called - Poped value is : " << s1.POP() << endl;
            break;

        case 3:
            if (s1.isEmpty())
            {
                cout << "Stack is Empty" << endl;
            }
            else
            {
                cout << "Stack is FULL" << endl;
            }
            break;

        case 4:
            if (s1.isFull())
            {
                cout << "stack is Full " << endl;
            }
            else
            {
                cout << "Stack is Empty" << endl;
            }
            break;

        case 5:
            cout << "Enter the Position of Item you want to peep" << endl;
            cin >> position;
            cout << "PEEP function Called and Value at Position is :" << endl
                 << s1.PEEP(position) << endl;
            break;

        case 6:
            cout << "Count Function Called - Number of item in Stack is :" << s1.count() << endl;
            break;

        case 7:
            cout << "Change Function Called" << endl;
            cout << "Enter the Value and Position of item" << endl;
            cin >> value;
            cin >> position;
            s1.change(position, value);
            break;

        case 8:
            cout << "Display Function called - All the Elements are :" << endl;
            s1.display();
            break;

        case 9:
            system("cls");
            break;
        }
    } while (Option != 0);
}