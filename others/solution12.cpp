#include<iostream>

using namespace std;

int main(){
	string s;
	while(cin>>s){
		int p;
		cin>>p;
		
		int cr =0;
		int ct =0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='W'){
				if(cr>0){
					ct++;
					cr=0;
				}
				ct++;
			}else{
				cr++;
				if(cr==p){
					ct++;
					cr=0;
				}
				
				if(cr>0 && i==s.size()-1){
					ct++;
					cr=0;
				}
			}
		}
		cout<<ct<<endl;
	}
}
