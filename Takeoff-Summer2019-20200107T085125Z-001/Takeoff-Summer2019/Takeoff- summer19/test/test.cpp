#include<bits/stdc++.h>
using namespace std;
int a[100]={0};

int main(){
  int t;
  //freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);

  a[2]=1;a[3]=1;a[5]=1;a[7]=1;a[11]=1;a[13]=1;a[17]=1;a[19]=1;a[23]=1;a[29]=1;a[31]=1;a[37]=1;a[41]=1;a[43]=1;a[47]=1;a[53]=1;a[59]=1;a[61]=1;
  char s[1234],str[1234];
  cin >>t; getchar();
  for(int i=1;i<=t;i++){

    gets(s);
    int l= strlen(s);
    int z=0;
  printf("Case %d: ",i);
    for(int j=0;j<l;j++){
        if(s[j]!=' '){
            str[z]=s[j];
            z++;
        }
    }
    str[z]='\0';

    sort(str,str+z);
    //cout<<str;
    int l1=strlen(str);
    for(int h=1;h<l1;h++){
            int v=(str[h]-'0')-(str[h-1]-'0');
        if(a[v])
           printf("1");
        else printf("0");
    }
    puts("");

  }


return 0;
}
