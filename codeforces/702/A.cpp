#include<bits/stdc++.h>
using namespace std;

int main(){
  /*#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif*/
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int k=0;
  int max_length = INT_MIN;
  if(n==1){
    cout<<1<<endl;
  }
  else{
    for(int i=0;i<n-1;i++){
    if(arr[i]<arr[i+1]){
        k++;
    }
    else{
        k = 0;
    }
    max_length = max(max_length,k+1);
  }
  cout<<max_length<<endl;


  }
  }