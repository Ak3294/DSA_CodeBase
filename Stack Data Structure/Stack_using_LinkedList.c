#include <stdio.h>
#include <stdlib.h>

// Create the Structure of Node
struct node
{
    int val;
    struct node *next; // linking with the next node
};
struct node *top; // Set top

void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // Dynamic Memory Allocation
    if (ptr == NULL)
    {
        printf("Not be Able to Push the Element Into the Stack");
    }
    else
    {
        printf("Enter the value you want to Push into the Stack : ");
        scanf("%d", &val);
        if (top == NULL)
        {
            ptr->val = val;
            ptr->next = NULL;
            top = ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = top;
            top = ptr;
        }
        printf("Item Pushed Successfully!\n");
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (top == NULL)
    {
        printf("Stack Underflow");
    }
    else
    {
        item = top->val;
        ptr = top;
        top = top->next;
        free(ptr);
        printf("Item Popped Successfully\n");
    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr = top;
    if (ptr == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("All the Stack Elements are : ");
        while (ptr != NULL)
        {
            printf("%d ", ptr->val);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice = 0;
    printf("\n*********Stack Operations using linked list*********\n");
    while (choice != 4)
    {
        printf("Enter 1 : Push()\n");
        printf("Enter 2 : Pop()\n");
        printf("Enter 3 : Display()\n");
        printf("Enter 4 : Exit()\n");
        printf("Please ! Enter your Choice for perform Specific Task :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("Exiting....");
            break;
        }
        default:
        {
            printf("Please Enter valid choice ");
        }
        };
    }
    return 0;
}
