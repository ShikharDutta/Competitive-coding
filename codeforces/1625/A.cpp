#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l;
        cin>>n>>l;
        int num[n];
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        vector<pair<int,int>> v;
        for(int i=0;i<l;i++){
            v.push_back({0,0});
            for(int j=0;j<n;j++){
                int bit = ((num[j]>>i)&1);
                if(bit){
                    v[i].second++;
                }
                else{
                    v[i].first++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<l;i++){
            
            int x = v[i].first;
            int y = v[i].second;
            if(y>x){
                ans+=(1<<i);
            }
        }
        cout<<ans<<endl;
    }
}