#include<iostream>
#include<string>
using namespace std;

string completeWithSpaces(int n){
	string r="";
	for(int i=0;i<n;i++)r+=" ";
	return r;
}

int main(){
	string s;
	while(cin>>s){
		int l=s.size();
		for(int i=0;i<l;i++){
			string aux = completeWithSpaces(i);
			for(int j=0;j<l-i;j++){
				if(j!=0) aux+=" ";
				aux+=s[j];
			}
			cout<<aux<<endl;
		}
		cout<<endl;
	}
}
