#include<bits/stdc++.h>
using namespace std;
char s[10],s1[10],s2[15];
int str=0;
 int checkdx(){
   for(int i=0;i<strlen(s);i++){
    if(s[i]=='#'){
            str=1;
        return i;
    }
   }
   for(int i=0;i<strlen(s);i++){
    if(s1[i]=='#'){
            str=2
        return i;
    }
   }
   for(int i=0;i<strlen(s);i++){
    if(s2[i]=='#'){
            str=3;
        return i;
    }
   }
 }
  int checkstr(){
   for(int i=0;i<strlen(s);i++){
    if(s[i]=='#'){
        return i;
    }
   }
 }


int main(){
int t;
cin >>t;
while(t--){
    scanf("%s",s);
    scanf("%s",s1);
    scanf("%s",s2);
   // checkstr();
   int indx= checkdx();
   if(str==3){
      if(indx>)
   }
   else if(str==2){
    printf("%d\n",(s2[indx]-s1[indx])-'0');
   }
   else if(str==1){
    printf("%d\n",(s2[indx]-s2[indx])-'0');
   }

}
return 0;
}
