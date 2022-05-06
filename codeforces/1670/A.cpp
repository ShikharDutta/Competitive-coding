#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        int cnt=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            if(x<0){
                cnt++;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]>0&&cnt>0){
                v[i] = -v[i];
                cnt--;
            }
            else if(v[i]<0&&cnt>0){
                cnt--;
            }
            else if(v[i]<0&&cnt==0){
                v[i] = -v[i];
            }
        }
        if(isSorted(v)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}