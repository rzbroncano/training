#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

string completeWithZerosLeft(int n){
	string r ="";
	stringstream ss;
	ss<<n;
	string aux = ss.str();
	for(int i=0;i<4-aux.size();i++){
		r+="0";
	}
	r+=aux;
	return r;
}

int main(){
	int n;
	while(cin>>n){
		vector<int> v;
		while(n--){
			int aux;
			cin>>aux;
			v.push_back(aux);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout<<completeWithZerosLeft(v[i])<<endl;
		}
	}
}
