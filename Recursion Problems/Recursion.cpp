// Recursion : Function is calling itself.
#include <iostream>
using namespace std;

int fact(int n)
{
    cout << n << endl; // 5  4  3  2  1  0
    if (n == 0)
    {
        return 1;
    }
    int smallans = fact(n - 1);  // 4!  3!  2!  1! 0!    
    return n * smallans;         // 120 = 5*4! <- 4*3! <- 3*2!<- 2*1! <- 1*0!
}
int main()
{
    int n;
    cout << "Enter the Number:";
    cin >> n;             // 5
    int answer = fact(n); // fact(5)
    cout << answer << endl;
    return 0;
}

// Recursion works on the "Principle of Mathematical Induction".

// Steps of PMI
// (1). Prove f(0) or f(1) is true. : BASE CASEssss
// (2). Induction Hypothesis Assume f(k) is true.
// (3). Induction step :using step 2, Prove f(k+1) is true.