#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string a,b;
		cin>>a>>b;
		bool flag = true;
		if(b.size()>a.size())cout<<"nao encaixa"<<endl;
		else{
			int ia = a.size()-1;
			int ib = b.size()-1;
			while(ib>=0&&flag){
				if(a[ia]!=b[ib]) flag=false;
				ia--;
				ib--;
			}
			if(flag)
			cout<<"encaixa"<<endl;
			else cout<<"nao encaixa"<<endl;
		}
	}
}
