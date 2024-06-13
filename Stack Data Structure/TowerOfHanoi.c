#include <stdio.h>

void TowerOfHanoi(int nRing, char beg, char end, char aux)
{
    if (nRing == 1)
    {
        printf("Move Disk 1 From %c to %c\n", beg, end);
        return;
    }
    TowerOfHanoi(nRing - 1, beg, aux, end);
    printf("Move Disk %d from %c to %c\n", nRing, beg, end);
    TowerOfHanoi(nRing - 1, aux, end, beg);
}
int main()
{
    int nRing;
    printf("Enter the Number of Rings in the Puzzle\n");
    scanf("%d", &nRing);
    TowerOfHanoi(nRing, 'A', 'C', 'B');
    return 0;
}