#include <iostream>
#include <stack>
using namespace std;

void deleteMid_util(stack<int> &s, int sizeOfStack, int current)
{
    if (current == sizeOfStack / 2)
    {
        s.pop();
        return;
    }

    int x = s.top();
    s.pop();
    current += 1;

    deleteMid_util(s, sizeOfStack, current);
    s.push(x);
}

void deleteMid(stack<int> &s, int sizeOfStack)
{
    deleteMid_util(s, sizeOfStack, 0);
}

int main()
{
    stack<int> st;
    int size;
    cout << "Enter the Size of Stack: ";
    cin >> size;
    cout << "Enter the elements of Stack: ";
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        st.push(n);
    }

    deleteMid(st, st.size());

    cout << "Stack after deleting middle element: ";
    while (!st.empty())
    {
        int p = st.top();
        st.pop();
        cout << p << " ";
    }
    return 0;
}
