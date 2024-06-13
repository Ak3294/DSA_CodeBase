// Stack in C++
// Questions : Balanced Parenthisis, Next Greater Element
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}