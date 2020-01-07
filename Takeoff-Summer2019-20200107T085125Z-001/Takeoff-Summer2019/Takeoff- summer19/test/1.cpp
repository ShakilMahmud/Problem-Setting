#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("inputC.txt","r",stdin);
     //freopen("outputC.txt","w",stdout);
    int t,c;
    char s[100];
    cin>>t;
    while(t--){
        cin >>s;
        int l=strlen(s);
        c=0;
        for(int i=0;i<l;i++){
            c+=s[i]-'0';
        }
        if(s[l-1]%2==0 && c%3==0)
            printf("Best\n");
        else if(s[l-1]%2==0 || c%3==0)
            printf("Good\n");
        else
            printf("Bad\n");
    }
}
