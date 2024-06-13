#include <iostream>
using namespace std;

int Sum_Number(int Num)
{
    if (Num == 0)
    {
        return 0;
    }
    int smallNum = Num % 10 + Sum_Number(Num / 10);
    return smallNum;
}
int main()
{
    int Num;
    cout << "Enter the Number for find Sum of Digits :";
    cin >> Num;
    Sum_Number(Num);
    cout << Sum_Number(Num);
    return 0;
}