#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output1.txt","w",stdout);
   #endif
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        ll sum=0;
        vector<int> l;
        vector<int> r;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                sum+=i;
                if(i<n/2){
                    l.push_back(i);
                }
                
            }
            else{
                if(i>=n/2){
                    r.push_back(i);
                }
                sum+=n-1-i;
            }
        }
        // cout<<sum<<endl;
        // for(int i=0;i<l.size();i++){
        //     cout<<l[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<r.size();i++){
        //     cout<<r[i]<<" ";
        // }
        // cout<<endl;

        int a=0;
        int b=r.size()-1;
        for(int i=0;i<k;i++){
            if(b>=0&&a<l.size()&&l[a]<=n-1-r[b]){
                sum+=n-1-2*l[a];
                // cout<<l[a]<<endl;
                a++;
            }
            else if(b>=0){
                sum+=2*r[b]-n+1;
                // cout<<r[b]<<endl;
                b--;
            }
            else if(a<l.size()&&b<0){
                sum+=n-1-2*l[a];
                // cout<<l[a]<<endl;
                a++;
            }
            else if(b>=0&&a>=l.size()){
                sum+=2*r[b]-n+1;
                // cout<<r[b]<<endl;
                b--;
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
