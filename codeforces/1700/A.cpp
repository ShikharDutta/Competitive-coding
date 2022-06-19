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
    int n,m;
    cin>>n>>m;
    ll sum=0;
    for(int i=0;i<m;i++){
        sum+=(i+1);
    }
    //cout<<sum<<endl;
    for(int i=2;i<=n;i++){
        sum+=i*m;
    }
    cout<<sum<<endl;
  }  
}
