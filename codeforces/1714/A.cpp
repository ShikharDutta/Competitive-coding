#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output1.txt","w",stdout);
   #endif
    int t;
    cin >> t;
    while (t--)
    {
        int n,h,m;
        cin>>n>>h>>m;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        sort(v.begin(),v.end());
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            v.push_back({v[i].first + 24, v[i].second});
        }
        
        for(int i=0;i<v.size();i++){
            if(h<v[i].first||(h==v[i].first&&m<v[i].second)){
                ans=min(ans,(v[i].first*60+v[i].second-h*60-m));
            }
            else if(h==v[i].first&&m==v[i].second){
                ans=0;
            }
        }
        cout<<ans/60<<" "<<ans%60<<endl;

    }
}