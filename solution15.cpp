#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int d;
		cin>>d;
		
		string r="";
		for(int i=0;i<s.size();i++){
			int pos = int(s[i])-64;
			if(pos-d<=0){
				int aux = d;
				aux-=pos;
				r+=char(90-aux);
			}else{
				r+=char(64+(pos-d));
			}
		}
		cout<<r<<endl;
	}
}
