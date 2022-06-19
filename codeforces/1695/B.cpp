#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
   
}
int main()
{
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n%2==1){
        cout<<"Mike"<<endl;
        continue;
    }
     int smallest = 0;
        for (int i = 0; i < n; ++i)
            if (a[i] < a[smallest])
                smallest = i;

    if (smallest % 2 == 0) cout << "Joe\n";
        else cout << "Mike\n";
  }
  
}
