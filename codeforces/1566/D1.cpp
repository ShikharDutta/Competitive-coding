#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j =0;j<=i-1;j++){
                if(arr[j]<arr[i]){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}