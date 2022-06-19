#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
   
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
    int grid[n][m], mn[n][m], mx[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    mn[0][0] = mx[0][0] = grid[0][0];
        
        for(int i = 1; i < n; ++i){
            mx[i][0] = mn[i][0] = mx[i - 1][0] + grid[i][0];
        }
        
        for(int j = 1; j < m; ++j){
            mx[0][j] = mn[0][j] = mx[0][j - 1] + grid[0][j];
        }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            mn[i][j] = grid[i][j]+min(mn[i-1][j],mn[i][j-1]);
            mx[i][j] = grid[i][j]+max(mx[i-1][j],mx[i][j-1]);
        }
    }
    if(mx[n - 1][m - 1] % 2 || mn[n - 1][m - 1] > 0 || mx[n - 1][m - 1] < 0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
  }
  
}
