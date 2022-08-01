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
    int d = 9;
    //int digits = n/9 +1;
    int power=1;
    int num=0;
    int i=0;
    int sum=0;
    while(n!=sum){
        while(n-sum<d){
            d--;
        }
        num+=power*d;
        sum+=d;
        power=power*10;
        d--;
    }
    cout<<num<<endl;
  }

  
}
