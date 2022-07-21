#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main (){
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
    int n,m;
    cin>>n>>m;
    ll *a = new ll[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<int,int>> v;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    ll *cumSum = new ll[n];
    cumSum[0]=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            cumSum[i] = cumSum[i-1]+a[i-1]-a[i];
            //cout<<cumSum[i]<<endl;
        }
        else{
            cumSum[i]=cumSum[i-1];
        }
    }
    ll *backSum = new ll[n];
    backSum[n-1]=0;
    for(int i=n-2;i>=0;i--){
        if(a[i+1]>a[i]){
            backSum[i] = backSum[i+1]+a[i+1]-a[i];
            //cout<<backSum[i]<<endl;
        }
        else{
            backSum[i]=backSum[i+1];
        }
    }

    for(int i=0;i<m;i++){
        int x = v[i].first;
        int y = v[i].second;
        ll ans=0;
        if(x<y){
            cout<<cumSum[y-1]-cumSum[x-1]<<endl;
        }
        else{
            cout<<backSum[y-1]-backSum[x-1]<<endl;

            
        }

    }

}