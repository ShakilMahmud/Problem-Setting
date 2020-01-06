#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("inC.txt","rt",stdin);
  //  freopen("outC.txt","wt",stdout);

  int a,b,c,d;
  double h;
  int t;
  cin >>t;
  while(t--){
  cin >>a>>b;
  c=a*a;
  d=b*b;

h=sqrt(c+d);
  if((c+d)==(h*h))
    printf("%d\n",int(h));
  else
  printf("%.2lf\n",h);
  }

return 0;
}
