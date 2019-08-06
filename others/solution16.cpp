#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int c1=0,c2 =0;
		bool flag = true;
		for(int i=0;i<s.size();i++){
			if(s[i]=='h') flag = true;
			else if(s[i]=='k') flag = false;
			
			if(flag){
				if(s[i]=='a')
				c1++;
			}else{
				if(s[i]=='a')
				c2++;
			}
		}
		string r = "";
		r+="k";
		for(int i=0;i<(c1*c2);i++) r+="a";
		cout<<r<<endl;
	}
}
