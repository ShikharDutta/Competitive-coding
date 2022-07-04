#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output1.txt","w",stdout);
  #endif


  /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    */
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v;
        v.push_back({1,0,0,1});
        v.push_back({0,1,1,0});
        v.push_back({0,1,1,0});
        v.push_back({1,0,0,1});
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<v[i%4][j%4]<<" ";
            }
            cout<<"\n";
        }

    }
    
  
}
