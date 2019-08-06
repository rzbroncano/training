#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		
		bool flag = true;
		
		if(s.size()!=20)cout<<"INVALID DATA"<<endl;
		else{
			if(s.substr(0,2)=="RA"){
				string aux = "";
				for(int i=2;i<s.size();i++){
					if(i==2){
						if(s[i]!='0')aux+=s[i];
					}else{
						if(s[i]=='0'){
							if(aux.size()>0) aux+=s[i];
						}else{
							aux+=s[i];
						}
					}
				}
				if(aux=="")cout<<"INVALID DATA"<<endl;
				else cout<<aux<<endl;
			}else{
				cout<<"INVALID DATA"<<endl;
			}
		}
	}
}
