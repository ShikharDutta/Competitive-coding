#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v1;
        vector<int> v2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back({x,i});
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v2.push_back(x);
        }
        sort(v1.begin(),v1.end(),greater<pair<int,int>>());
        /*for(int i=0;i<n;i++){
            cout<<v1[i].first<<","<<v1[i].second<<" ";
        }
        cout<<endl;*/
        int flag=1;
        while(flag==1){
            flag=0;
            for(int i=0;i<v1.size();i++){
                if(k>=v1[i].first){
                    int l = v1[i].second;
                    k += v2[l];
                    v1.erase(v1.begin()+i);
                    flag=1;
                }
            }
        }
        cout<<k<<endl;

    }
}