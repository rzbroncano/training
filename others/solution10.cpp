#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		string r = "";
		for(int i=0;i<s.size();i++) r+=tolower(s[i]);
		if(r.find("zelda")==string::npos){
			cout<<"Link Tranquilo"<<endl;
		}else{
			cout<<"Link Bolado"<<endl;
		}
	}
}
