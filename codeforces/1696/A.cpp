#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output1.txt","w",stdout);
  #endif
  
  int t;
  cin>>t;
  while(t--){
    int n;
    ll z;
    cin>>n>>z;
    ll *a = new ll[n];
    ll ans=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ans=max(ans,(a[i]|z));
    }
    cout<<ans<<endl;
  }

  
}
