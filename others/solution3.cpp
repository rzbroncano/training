#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
	while(cin>>s){
		string r = "",rv;
		char ch[] ={'a','e','i','o','u'};
		for(int i=0;i<s.size();i++){
			for(int j=0;j<5;j++){
				if(s[i]==ch[j])r+=s[i];
			}
		}
		rv=r;
		reverse(rv.begin(),rv.end());
		if(rv==r)cout<<"S"<<endl;
		else cout<<"N"<<endl;
	}
}
