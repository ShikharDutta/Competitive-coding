#include<bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int *a = new int[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
        int flag=1;
        for(int i=0;i<n;i++){
            if(a[i]+x>a[i+n]){
                flag=0;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
    }
}
