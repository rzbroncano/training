#include<iostream>
using namespace std;

int main(){
	int c;
	cin>>c;
	while(c--){
		string s;
		cin>>s;
		
		string r = "";
		
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]>='a' && s[i]<='z'){
				r+=s[i];
			}
		}
		cout<<r<<endl;
	}	
}
