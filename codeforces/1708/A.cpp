#include<bits/stdc++.h>
#define ll long long int
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
        int *a = new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=1;
        for(int i=1;i<n;i++){
            if(a[i]%a[0]!=0){
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
