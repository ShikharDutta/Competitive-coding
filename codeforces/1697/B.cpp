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
    int n,q;
    cin>>n>>q;
    ll *a = new ll[n];
    ll *sum = new ll[n+1];
    sum[0]=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        sum[i+1]=sum[i]+a[i];
        
    }
    
    /*for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }*/
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;

        cout<<sum[n-x+y]-sum[n-x]<<endl;
    }
  
}
