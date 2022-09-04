#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 
int main() {
    // your code goes here
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
    
    
        ll n,m;
        cin>>n>>m;
        if(m==1){
            cout<<n-1<<endl;
            return 0;
        }
        ll ans = n*(m-1);
        cout<<ans<<endl;
        return 0;
        
 
}