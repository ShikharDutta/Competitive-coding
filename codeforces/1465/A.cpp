/*
 * Q1.cpp
 *
 *  Created on: 20-Dec-2020
 *      Author: shikhar
 */
#include<iostream>
using namespace std;

int main(){
	int test,n,i;
	char str[100];
	char str1[5]=")";
	cin>>test;
	while(test>0){
		int count=0;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>str[i];
		}
		for(i=n-1;i>=0;i--){
			if(str[i]==str1[0]){
				count++;
			}
			else{
				break;
			}
		}
		if(count>n-count){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		test--;

	}
	return 0;
}


