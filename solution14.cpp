#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		set<string> S;
		while(k--){
			string s;
			cin>>s;
			S.insert(s);
		}
	
		if(S.size()>1)cout<<"ingles"<<endl;
		else{
			std::set<std::string>::iterator setIt = S.begin();
			cout<<*setIt<<endl;
		}
	}
}
