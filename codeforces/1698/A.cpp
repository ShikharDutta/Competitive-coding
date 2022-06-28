#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  
  int t;
  cin>>t;
  while(t--){
    
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=a[0];
    for(int i=1;i<n;i++){
        ans = ans^a[i];
    }
    int x ;
    for(int i=0;i<n;i++){
        int x = ans^a[i];
        if(x==a[i]){
            cout<<a[i]<<endl;
            break;
        }
    }
    
    
  }

  
}
