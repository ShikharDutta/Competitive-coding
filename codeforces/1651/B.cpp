#include<bits/stdc++.h>
using namespace std;

long long int power(int n,int x){
    if(x==1){
        return n;
    }
    if(x==0){
        return 1;
    }
    if(x%2==0){
        return power(n,x/2)*power(n,x/2);
    }
    return power(n,x/2)*power(n,x/2)*n;
}



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>19){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<power(3,i)<<" ";
        }
        cout<<endl;
        
    }
}