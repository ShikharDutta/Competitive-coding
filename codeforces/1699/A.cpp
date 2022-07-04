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
        /*int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            if(i%2==0){
                v[i][0]=1;
            }
            else{
                v[i][0]=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                if(v[i][j-1]==0){
                    v[i][j]=1;
                }
                else{
                    v[i][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }*/
        int n;
        cin>>n;
        if(n%2==1){
            cout<<-1<<endl;
            continue;
        }
        cout<<0<<" "<<0<<" "<<n/2<<endl;

    }
    
  
}
