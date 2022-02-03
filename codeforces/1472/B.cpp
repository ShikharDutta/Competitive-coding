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
    int ones=0,twos=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            ones++;
        }
        else{
            twos++;
        }
    }
    if(ones%2==1){
        //cout<<ones<<endl;
        cout<<"NO"<<endl;
        continue;
    }
    int num = (ones+2*twos)/2;
    if(num%2==0||(num%2==1&&ones!=0)){
        cout<<"YES"<<endl;
        continue;
    }
    else{
        cout<<"NO"<<endl;
    }

  }
}