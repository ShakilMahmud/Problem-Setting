#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tc,n,m,cnt;
        cin>>tc;
        for(int i=1; i<=tc; i++){
            cin>>n;
            cnt=0;
            for(int i=0;i<n;i++){
                cin>>m;
                if(m%2==0)cnt++;
            }
            cout<<"Case "<<i<<"->"<<cnt<<endl;
        }

    return 0;
}
