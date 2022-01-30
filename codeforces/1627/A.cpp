#include<bits/stdc++.h>
using namespace std;
int ch[50][50];

void solve(int n,int m,int r,int c,int b){
    if(b==0){
        cout<<-1<<endl;
        return;
    }
    else if(ch[r-1][c-1]==1){
        cout<<0<<endl;
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(ch[i][c-1]==1){
                cout<<1<<endl;
                return;
            }
        }
        for(int i=0;i<m;i++){
            if(ch[r-1][i]==1){
                cout<<1<<endl;
                return;
            }
        }
        cout<<2<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        int b = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char c;
                cin>>c;
                if(c=='B'){
                    ch[i][j]=1;
                }
                else{
                    ch[i][j]=0;
                }
                if(c=='B'){
                    b++;
                }
            }
        }
        solve(n,m,r,c,b);
    }
}