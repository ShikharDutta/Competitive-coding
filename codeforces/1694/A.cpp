#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  
  while(t--){
    string s="";
    int a, b;
    cin>>a>>b;
    int diff= abs(a-b);
    int sm = (a>b?b:a);
    int bg = (a>b?a:b);
    if(diff>sm&&sm==a){
        for(int i=0;i<sm;i++){
            s+="0";
        }
        for(int i=0;i<bg;i++){
            s+="1";
        }
        

    }
    else if(diff>sm&&sm==b){
        for(int i=0;i<sm;i++){
            s+="1";
        }
        for(int i=0;i<bg;i++){
            s+="0";
        }
        //cout<<2<<endl;
    }
    else{
        int k1=0,k2=0;
        for(int i=0;i<bg;i++){
            if(k1<a){
                s+="0";
                k1++;
            }
            if(k2<b){
                s+="1";
                k2++;
            }
        }
        //cout<<3<<endl;
    }
    cout<<s<<endl;

  }
  
  
}
