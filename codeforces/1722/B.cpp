#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int dfs(int n,vector<pair<int,ll>> adj[],int x,int y){
    
    ll sum=0;
    for(auto nbrPair:adj[x]){
        int nbr = nbrPair.first;
        ll w = nbrPair.second;
        if(nbr==y){
            sum+=2*w;
        }
        else{
            for(auto nbr_pair:adj[nbr]){
                int nbr1 = nbr_pair.first;
                ll w1 = nbr_pair.second;
                if(nbr1==y){
                    sum+= min(w,w1);
                }
            }
        }
    }
    return sum;
}

int main() {
    // your code goes here
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output1.txt","w",stdout);
   #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1;
        string s2;
        cin>>s1>>s2;
        int flag=1;
        for(int i=0;i<n;i++){
            if(s1[i]=='R'&&s2[i]=='R'){
                continue;
            }
            else if(s1[i]!='R'&&s2[i]!='R'&&(s1[i]=='G'||s1[i]=='B'||s2[i]=='G'||s2[i]=='B')){
                continue;
            }
            else{
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }

    }
}
