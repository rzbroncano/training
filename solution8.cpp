#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<string> sv;
	while(n--){
		string s;
		cin>>s;
		sv.insert(s);
	}
	cout<<"Falta(m) "<<151-sv.size()<<" pomekon(s)."<<endl;
}
