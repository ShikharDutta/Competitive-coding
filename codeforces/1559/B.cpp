#include<bits/stdc++.h>
using namespace std;

string solve(string s,int i){
    if(i==s.size()){
        return s;
    }
    if(s[i]!='?'){

    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        for (int i=0;i<n;i++)
			cnt+=(s[i]!='?');
		if (!cnt)
			s[0]='R';
		for (int i=1;i<n;i++)
			if (s[i]=='?'&&s[i-1]!='?')
				s[i]=s[i-1]^('B'^'R');
		for (int i=n-1;i>=0;i--)
			if (s[i]=='?'&&s[i+1]!='?')
				s[i]=s[i+1]^('B'^'R');
        cout<<s<<endl;
    }
    
}