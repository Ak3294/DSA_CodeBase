#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    int priority;
    struct node *next;
};
struct node *start = NULL;
struct node *insert(struct node *);
struct node *Delete(struct node *);
void display(struct node *);
int main()
{
    int option;
    do
    {
        printf("\n");
        printf("Enter 1. INSERT() Operation\n");
        printf("Enter 2. DELETE() Operation\n");
        printf("Enter 3. DISPLAY() Operation\n");
        printf("Enter 4. EXIT() Operation\n");
        printf("Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = insert(start);
            break;
        case 2:
            start = Delete(start);
            break;
        case 3:
            display(start);
            break;
        default:
            printf("Enter the Valid Number\n");
        }
    } while (option != 4);
}
struct node *insert(struct node *start)
{
    int val, pri;
    struct node *ptr, *p;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value : ");
    scanf("%d", &val);
    printf("Enter the Priority :");
    scanf("%d", &pri);
    ptr->data = val;
    ptr->priority = pri;
    if (start == NULL || pri < start->priority)
    {
        ptr->next = start;
        start = ptr;
    }
    else
    {
        p = start;
        while (p->next != NULL && p->next->priority <= pri)
            p = p->next;
        ptr->next = p->next;
        p->next = ptr;
    }
    return start;
}
struct node *Delete(struct node *start)
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("UNDERFLOW Condition Occurs\n");
        return 0;
    }
    else
    {
        ptr = start;
        printf("Deleted item is: %d", ptr->data);
        start = start->next;
        printf("\n");
        free(ptr);
    }
    return start;
}
void display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    if (start == NULL)
        printf("QUEUE IS EMPTY\n");
    else
    {
        while (ptr != NULL)
        {
            printf("Value is %d and  [priority is = %d]\n", ptr->data, ptr->priority);
            ptr = ptr->next;
        }
    }
}