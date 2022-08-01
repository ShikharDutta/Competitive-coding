#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output1.txt","w",stdout);
   #endif
  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int *a = new int[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    int k=1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(m[a[i]]>1){
            m[a[i]]--;
            ans+=k;
            k=0;
        }
        k++;
    }
    cout<<ans<<endl;

  }

  
}
