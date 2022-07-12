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
        int *a = new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            string s;
            cin>>s;
            for(int j=0;j<b;j++){
                if(s[j]=='U'){
                    a[i]--;
                }
                else{
                    a[i]++;
                }
            }

        }
        for(int i=0;i<n;i++){
            if(a[i]>9||a[i]<-9){
                a[i]=a[i]%10;
            }
            
            if(a[i]<0){
                a[i]=10+a[i];
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}
