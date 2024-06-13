#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> Arr, int k, int size)
{
  vector<int> Barr;
  vector<int> Carr;

  for (int i = 0; i <= k; i++){
    Carr[i] = 0;
  }
  for (int j = 1; j <= size; j++){
    Carr[Arr[j]]+= 1;
  }
  for (int i = 1; i <= k; i++){
    Carr[i] += Carr[i - 1];
  }
  for (int j = size; j >= 1; j--){
    Barr[Carr[Arr[j]]] = Arr[j];
    Carr[Arr[j]] = Carr[Arr[j]] - 1;
  }

  printf("The Sorted Array is : ");
  for (int i = 1; i <= size; i++){
    cout<<Barr[i]<<" ";
  }
}

int main()
{
  int k = 0;
  vector<int> Arr = {33, 4, 23, 57, 98, 75, 12, 32};

  for (int i = 1; i <= Arr.size(); i++)
  {
    if (Arr[i] > k)
    {
      k = Arr[i];
    }
  }
  countingSort(Arr, k, Arr.size());
  return 0;
}