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
        int n;
        cin>>n;
        ll *a = new ll[n];
        ll sum=0,zeros=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                flag=1;
            }
            sum+=a[i];
            if(flag==1&&a[i]==0&&i<n-1){
                zeros++;
            }
        }
        cout<<(sum-a[n-1]+zeros)<<endl;
    }
}
