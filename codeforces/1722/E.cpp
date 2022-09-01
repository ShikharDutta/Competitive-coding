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
        int n,q;
        cin>>n>>q;
        vector<pair<int,int>> hw;
        ll sum=0;
        
        long long a[1005][1005];
        long long pref[1005][1005];
        for(int i=0;i<=1001;i++){
            for(int j=0;j<=1001;j++){
                
                a[i][j]=pref[i][j]=0;
            }
        }
        for(int i = 0; i < n; i++)
        {
            long long h, w;
            cin >> h >> w;
            a[h][w]+=h*w;
        }
        for(int i = 1; i <= 1000; i++)
        {
            for(int j = 1; j <= 1000; j++)
            {
                pref[i][j] = pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+a[i][j];
            }
        }
        for(int i = 0; i < q; i++)
        {
            long long hs, ws, hb, wb;
            cin >> hs >> ws >> hb >> wb;
            cout << pref[hb-1][wb-1]-pref[hb-1][ws]-pref[hs][wb-1]+pref[hs][ws] << endl;
        }
        



      
    }
    return 0;
}
