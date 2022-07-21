#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main (){
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
    int t;
    cin>>t;
    while ( t-- ){
        int hand;
        cin>>hand;
        //cout<<hand<<endl;
        int *a=new int[4];
        for(int i=1;i<4;i++){
            cin>>a[i];
        }
        int k = 0;
        int temp = hand;
        while(k<2){
            if(a[temp]==0){
                break;
            }
            else{
                temp = a[temp];
                //cout<<1<<endl;
                k++;
            }

        }
        if(k==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}