#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int f1,f2,aux=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='x'){
				f1=aux;
				aux=0;
			}else{
				aux=aux*10+(s[i]-'0');
				if(i==s.size()-1) f2=aux;	
			}		
		}
		if(f1==f2){
			for(int i=5;i<=10;i++){
				cout<<f1<<" x "<<i<<" = "<<(f1*i)<<endl;
			}
		}else{
			for(int i=5;i<=10;i++){
				cout<<f1<<" x "<<i<<" = "<<(f1*i)<<" && "<<f2<<" x "<<i<<" = "<<(f2*i)<<endl;
			}
		}
	}
}
