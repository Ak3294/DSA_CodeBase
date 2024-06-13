#include <stdio.h>
#include <string.h>
#define max 500
int top, stack[max]; // global Variable

void push(char x)
{
    if (top == max - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    printf("%c", stack[top--]);
}

void main()
{
    char str[] = "Sports";
    // char str[] = "SriLanka";
    int len = strlen(str); // local Variable
    int i;
    for (i = 0; i < len; i++)
    {
        push(str[i]);
    }
    for (i = 0; i < len; i++)
    {
        pop();
    }
}
