
#include <bits/stdc++.h>
using namespace std;
 
#include <bits/stdc++.h>
using namespace std;
 
// function to count the divisors
int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}
int main(void)
{
  int n ;
  cin>>n;
  cout<<"Total number of divisors of "<<n<<" are "<<countDivisors(n)<<endl;

    return 0;
}
