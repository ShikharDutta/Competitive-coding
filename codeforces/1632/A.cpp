#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--){
  	int n;
    cin>>n;
    string s;
    cin>>s;
    if(n>2||s=="00"||s=="11"){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

  }
}