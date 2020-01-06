#include<bits/stdc++.h>
using namespace std;
const int N=10009;
int p[N+1]={0},prime[N+1];
 void primes(){
    for(int i=4;i<=N;i+=2)p[i]=1;
    int s=sqrt(N);
    for(int i=3;i<=s;i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=N;j+=i)
                p[j]=1;
        }
    }
    int i=3;
    prime[2]=2;

    for(int z=3;z<=N;z+=2){
        if(p[z]==0){
            prime[i]=z;
            i++;
        }
    }
 }

int main()
{
    // freopen("inE.txt","rt",stdin);
    //freopen("outE.txt","wt",stdout);

    primes();
    int m,t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&m);
        if(m==1)printf("Case %d :\n154 km/s\n",i);
        else
          printf("Case %d :\n%d km/h\n",i,prime[m]);
    }

    return 0;
}
