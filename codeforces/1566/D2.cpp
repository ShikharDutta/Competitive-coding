#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        int s = n*m;
        vector<pair<ll,int>> a(s);
        for(int i=0;i<s;i++){
            cin>>a[i].first;
            a[i].second = i;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<s;i++){
            a[i].second = -a[i].second;
        }
        int count = 0;
        for(int i=0;i<n;i++){
            sort(a.begin()+(m*i),a.begin()+(m*i+m));
            for(int j=0;j<m;j++){
                for(int k=0;k<j;k++){
                    if(a[m*i+k].second>a[m*i+j].second){
                        count++;
                    }
                }
            }
        }


        cout<<count<<endl;
    }
}