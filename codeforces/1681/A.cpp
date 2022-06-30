#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{/*
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output1.txt","w",stdout);
  #endif
  */
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    

  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int *b=new int[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    if(a[n-1]>=b[m-1]){
        cout<<"Alice"<<endl;
    }
    else if(a[n-1]<b[m-1]){
        cout<<"Bob"<<endl;
    }
    if(b[m-1]>=a[n-1]){
        cout<<"Bob"<<endl;
    }
    else if(b[m-1]<a[n-1]){
        cout<<"Alice"<<endl;
    }
  }
  
}
