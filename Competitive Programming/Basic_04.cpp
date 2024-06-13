#include<bits/stdc++.h>
using namespace std;

// To reflect the changes in the main() function we have to use & operator before the parameter.
void increment(int a,int &b){
    a++;
    b++;
}
// a is passed by call by Value and b is pass by call by reference.
int  main(){
    int a = 3,b = 3;
    cout<<a<<b<<endl;

    increment(a,b);
    cout<<a<<b<<endl;
}