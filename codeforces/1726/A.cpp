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
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<0<<endl;
        continue;
    }
    int maxN=INT_MIN;
    for(int i=0;i<n-1;i++){
        maxN = max(maxN,a[i]-a[i+1]);
    }
    for(int i=1;i<n;i++){
        maxN = max(maxN,a[i]-a[0]);
    }
    for(int i=0;i<n-1;i++){
        maxN = max(maxN,a[n-1]-a[i]);
    }
    cout<<maxN<<endl;
   }
}