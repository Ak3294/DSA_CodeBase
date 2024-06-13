#include<iostream>
using namespace std;

int  main()
{
    int arr[5] = {1,2,88,42,99};
    for(int i=0;i<5;i++){
        if(arr[i]==42){
            break;
        }
        cout<<arr[i]<<endl;
    }
    return 0;
}