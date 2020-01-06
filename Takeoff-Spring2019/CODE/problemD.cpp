#include <bits/stdc++.h>
using namespace std;


int countSetBits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n & 1) + countSetBits(n >> 1);
}

int main()
{
 freopen("inD.txt","rt",stdin);
 freopen("outD.txt","wt",stdout);
    int n,t ;
    cin >>t;
    while(t--){
      cin >>n;
    cout << countSetBits(n)<<endl;
    }
    return 0;
}
