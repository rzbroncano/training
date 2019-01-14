#include<iostream>

using namespace std;
int main(){
	
	int n;
	cin>>n;
	while(n--){
		int l;
		cin>>l;
		
		int ct = 0;
		
		for(int i=0;i<l;i++){
			string s;
			cin>>s;
			
			for(int j=0;j<s.size();j++){
				ct+= int(s[j])-int('A')+i+j;
			}
		}
		
		cout<<ct<<endl;
	}
}
