#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		string r="";
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			if(s.size()>3){
				r+=s;	
			}else{
				if(s.substr(0,2)=="OB") r+="OBI";
				else if(s.substr(0,2)=="UR") r+="URI";
				else r+=s;
			}
			if(i!=n-1)r+=" ";
		}
		cout<<r<<endl;
	}
}
