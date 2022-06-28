#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool find(ll x,vector<ll> &v,int s,int e){
    int mid=(s+e)/2;
    while(s<e){
        if(v[mid]==x){
            return true;
        }
        else if(v[mid]>x){
            return find(x,v,s,mid-1);
        }
        else{
            return find(x,v,mid+1,e);
        }
    }
}
int main()
{

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output1.txt","w",stdout);
  #endif
  
  
  int t;
  cin>>t;
  while(t--){
    
    int n,k;
    cin>>n>>k;
    ll *a=new ll[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    if(k==1){
        cout<<(n-1)/2<<endl;
        continue;
    }
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1]+a[i+1]){
            ans++;
        }
    }
    cout<<ans<<endl;

    /*int n;
    vector<ll> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=n-3;i>=0;i--){
        for(int j=i-1;j>=1;j--){
            for(int k=j-1;k>=2;k--){
                ll x = v[i]+v[j]+v[k];
                if(!find(x,v,0,n)){
                    goto even;
                }
            }
        }
    }
    cout<<"YES"<<endl;

    even:
    cout<<"NO"<<endl;
    */
    
  }

  
}
