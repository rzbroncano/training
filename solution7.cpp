#include<iostream>

using namespace std;


int main(){
	
	int n;
	cin>>n;
	
	while(n--){
		string s1,s2;
		cin>>s1>>s2;
		int ct=0;
		
		for(int i=0;i<s1.size();i++){
			int aux2 = (int(s2[i]))-96;
			int aux1 = (int(s1[i]))-96;
			if(aux1<=aux2){
				ct+=(aux2-aux1);
			}else{
				ct+=(26-aux1+aux2);
			}
		}
		
		cout<<ct<<endl;		
	}
}
