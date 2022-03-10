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
        long long int n;
        cin>>n;
        cout<<(power(2,n)-1)<<endl;
        
    }
}