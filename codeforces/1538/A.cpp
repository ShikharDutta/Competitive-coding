#include<bits/stdc++.h>
using namespace std;

int main(){
  /*#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif*/
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    int max_num = INT_MIN;
    int min_num = INT_MAX;
    int max_idx = 0;
    int min_idx = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max_num){
            max_num = arr[i];
            max_idx = i;
        }
        if(arr[i]<min_num){
            min_num = arr[i];
            min_idx = i;
        }

    }
    int n1 = min_idx;
    int n2 = max_idx;
    int m1 = n - 1 - min_idx;
    int m2 = n-1-max_idx;
    int ans1 = max(n1,n2) +1;
    int ans2 = n1+m2+2;
    int ans3 = max(m1,m2)+1;
    int ans4 = n2+m1+2;
    int ans = min(ans1,min(ans2,min(ans3,ans4)));
    cout<<ans<<endl;

  }
}