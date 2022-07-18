#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main (){
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
    int t;
    cin>>t;
    while ( t-- ){
        int n,m;
        cin>>n>>m;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);

        }
        string s="";
        for(int i=0;i<m;i++){
            s+='B';
        }
        for(int i=0;i<n;i++){
            if(m+1-v[i]>0){
                v.push_back(m+1-v[i]);
            }
        }
        string temp1=s;
        string temp2=s;
        for(int i=0;i<n;i++){
            temp1[v[i]-1]=temp2[v[i+n]-1]='A';
            if(temp1<temp2){
                s = temp2 = temp1;
            }
            else{
                s = temp1 = temp2;
            }
        }
        cout<<s<<endl;
    }
}