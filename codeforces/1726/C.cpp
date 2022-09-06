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
    string s;
    cin>>s;
    int cnt=1;
    for(int i=0;i<2*n;i++){
        if(s[i]==s[i+1]&&s[i]==')'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
   }
}