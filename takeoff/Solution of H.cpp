#include<bits/stdc++.h>
using namespace std;
int a[100002],N=100002;
char s[100005];
   void hubb(){
         int s=sqrt(N);
         a[0]=1;a[1]=1;a[2]=0;
         for(int i=4;i<=N;i+=2){
            a[i]=1;
         }
        for(int i=3;i<=s;i+=2){
            if(a[i]==0){
                for(int j=i*i;j<=N;j+=j){
                    a[j]=1;
                }
            }
        }
    }
 int say(int l){
     int sum=0;
   for(int i=0;i<l;i++){
    if(s[i]>'0' && s[i]<='9')sum++;
   }
 return sum;
 }


int main()
{
hubb();
int t,num;
scanf("%d",&t);getchar();
for(int i=1;i<=t;i++){
        int flag=0;
    scanf("%[^\n]s",s);getchar();
    int l=strlen(s);
    int k=say(l);

    if(a[k]==0){
        flag=2;
    }
    else{
      for(int d=k;d<=N;d++){
        if(a[d]==0){
            flag=1;
            num=d;
            break;
        }
      }
    }
   if(flag==2){
    printf("Case %d :Bad luck\n",i);
   }
   else {
    printf("Case %d :%d i got it\n",i,num);
   }

}

return 0;
}
