#include<iostream>
#include<sstream>
using namespace std;

int main(){
	
	long a,b;
	while(cin>>a>>b){
		if(a==0&&b==0) break;
		long sum = a+b;
		string s;
		stringstream ss;
		ss<<sum;
		ss>>s;
		
		string r="";
		for(int i=0;i<s.size();i++){
			if(s[i]!='0')r+=s[i];
		}
		
		cout<<r<<endl;
	}
	
}
