#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 
int main() {
    // your code goes here
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output1.txt","w",stdout);
   #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n!=5){
            cout<<"NO"<<endl;
            continue;
        }
        sort(s.begin(),s.end());
        if(s=="Timru"){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
        
 
    }
}