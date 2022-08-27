#include <bits/stdc++.h>
using namespace std;
int solve(char *a){
    int cnt=0;
    if(a[0]==a[1]){
        cnt++;
    }
    if(a[1]==a[2]){
        cnt++;
    }
    if(a[2]==a[3]){
        cnt++;
    }
    return cnt;
}

int main() {
    // your code goes here
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output1.txt","w",stdout);
   #endif
    int t;
    cin>>t;
    while(t--){
        char a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        sort(a,a+4);
        // int total=3;
        // if(a[0]!=a[1]&&a[1]!=a[2]&&a[2]!=a[3]){
        //     cout<<3<<endl;
        // }
        // else if(a[0]==a[1]&&a[1]!=a[2]&&a[2]==a[3]){
        //     cout<<1<<endl;
        // }
        // else if(a[0]==a[1]&&a[1]!=a[2]&&a[2]!=a[3]){
        //     cout<<2<<endl;
        // }
        // else if(a[0]!=a[1]&&a[2]==a[3]&&a[1]!=a[2]){
        //     cout<<2<<endl;
        // }
        // else if(a[0]==a[1]&&a[1]==a[2]&&a[2]!=a[3]){
        //     cout<<1<<endl;
        // }
        // else if(a[0]==a[1]==a[2]==a[3]){
        //     cout<<0<<endl;
        // }
        // else if(a[0]==a[1]&&a[2]==a[0]&&a[2]!=a[3]){
        //     cout<<1<<endl;
        // }
        // else if(a[3]==a[1]&&a[1]==a[2]&&a[0]!=a[1]){
        //     cout<<1<<endl;
        // }
        int total=3;
        cout<<total-solve(a)<<endl;



    }
    return 0;
}
