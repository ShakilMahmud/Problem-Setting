#include<bits/stdc++.h>
using namespace std;
int main(){
int a[20],p[20],k,pO,y=0;
for(int i=0;i<16;i++){
    cin >>k>>pO;
    a[i]=k+pO;
    p[i]=k+pO;
}
sort(p,p+16);
int t=p[15];
for(int i=0;i<16;i++){
    if(a[i]==t){
        y=i;
        break;
    }
}
if(y==0)cout<<"BIGETRON"<<endl;
else if(y==1)cout<<"TOP ESPORTS"<<endl;
else if(y==2)cout<<"MEGA"<<endl;
else if(y==3)cout<<"ILMN"<<endl;
else if(y==4)cout<<"ENTITY GAMING"<<endl;
else if(y==5)cout<<"TEAM QUESO"<<endl;
else if(y==6)cout<<"RRQ"<<endl;
else if(y==7)cout<<"ORANGE"<<endl;
else if(y==8)cout<<"TEAM UNIQUE"<<endl;
else if(y==9)cout<<"CLOUD9"<<endl;
else if(y==10)cout<<"YOODO"<<endl;
else if(y==11)cout<<"SOUL"<<endl;
else if(y==12)cout<<"UNICORNGAMING"<<endl;
else if(y==13)cout<<"ALL REJECTION GAMING WISTARIA"<<endl;
else if(y==14)cout<<"EGC KR BLACK"<<endl;
else if(y==15)cout<<"KURD SQUAD"<<endl;
return 0;
}
