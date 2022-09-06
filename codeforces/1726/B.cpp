#include <bits/stdc++.h>
using namespace std;
#define int long long int

 
int32_t main() {
    // your code goes here
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
   int t;
   cin>>t;
   while(t--){
    int n,m;
    cin>>n>>m;
    if(n==1){
        cout<<"YES"<<endl;
        cout<<m<<endl;
        continue;
    }
    if(n>m){
        cout<<"NO"<<endl;
        continue;
    }
    if(m%2==1&&n%2==1){
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++){
            cout<<1<<" ";
        }
        cout<<(m-(n-1))<<endl;
    }
    else if(m%2==0&&n%2==0){
        cout<<"YES"<<endl;
        for(int i=0;i<n-2;i++){
            cout<<1<<" ";
        }
        int s = (m-(n-2))/2;
        cout<<s<<" "<<s<<endl;
    }
    else if(m%2==1&&n%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++){
            cout<<1<<" ";
        }
        cout<<(m-n+1)<<endl;
    }
    
   }
}