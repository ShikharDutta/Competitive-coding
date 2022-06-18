#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(int n,int m,vector<vector<int>> &A){
    int l=0,k=0;
    //cout<<1<<endl;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mx<A[i][j]){

                mx=A[i][j];
                l = i;
                k=j;
            }
        }
    }
    int h = max(l+1,n-l);
    int w = max(k+1,m-k);
    return h*w;
}
int main()
{
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> A;

    for(int i=0;i<n;i++){
        A.push_back({});
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            A[i].push_back(x);
        }
    }
    cout<<solve(n,m,A)<<endl;
  }
  
}
