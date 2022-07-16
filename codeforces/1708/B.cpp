#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int solve(int l,int r,int i,map<int,int> &m){
    float k = l/i;
    if(k>int(l/i)){
        k = floor(k)+1;
    }
    else{
        k = int(k);
    }
    while(m[k*i]!=0){
        k++;
    }


}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        
        int flag=1;
        vector<ll>v;
         for (ll i = 1; i <= n; i++) {
            if(l%(i)==0){
                v.push_back(l);
            }
            else if (i+l - (l+i)%(i)>= l && i+l -(l+i)%(i)<= r){
                v.push_back(i + l - (l+i)%(i));
            }
            else{
                flag=0;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
            for(ll i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;

        }
        

        
    }
}
