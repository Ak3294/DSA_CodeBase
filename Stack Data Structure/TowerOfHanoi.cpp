#include <iostream>
using namespace std;

class Hanoi
{
    int nRing;
    char beg, end, aux;

public:
    void setdata()
    {
        cout << "Enter the Number of Tower in Hanoi" << endl;
        cin >> nRing;
    }

    void TowerOfHanoi(int nRing, char beg, char end, char aux)
    {
        if (nRing == 1)
        {
            cout << "Move Disk 1 From %c to %c" << beg << end << endl;
            return;
        }
        TowerOfHanoi(nRing - 1, beg, aux, end);
        cout << "Move Disk %d from %c to %c" << nRing << beg << end << endl;
        TowerOfHanoi(nRing - 1, aux, end, beg);
    }
};
int main()
{
    int nRing;
    Hanoi h1;
    h1.setdata();
    h1.TowerOfHanoi(nRing, 'A', 'C', 'B');
    return 0;
}