#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	
	string s;
	while(getline(cin,s)){
		string r ="";
		bool flaga=true,flagn=true;
		string aux ="";
		for(int i=0;i<s.size();i++){
			if(s[i]=='_'){
				if(flaga) flaga =  false,r+="<i>";
				else flaga = true,r+="</i>"; 
				continue;
			}
			
			if(s[i]=='*'){
				if(flagn) flagn =  false,r+="<b>";
				else flagn = true,r+="</b>"; 
				continue;
			}
			
			r+=s[i];
			
		}
		cout<<r<<endl;
	}
}
