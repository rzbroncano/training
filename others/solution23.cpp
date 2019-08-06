#include<iostream>

using namespace std;

int compareString(string s1,string s2){
	if(s1.size()!=s2.size())return 9;
	int cont =0;
		
	for(int i=0;i<s1.size()&&i<s2.size();i++){
		if(s1[i]!=s2[i])cont++;
	}	
	
	return cont;
}

int main(){
	int n;
	cin>>n;
	
	while(n--){
		string s;
		cin>>s;
		string p1="one", p2="two", p3="three";
		int v[3]= {compareString(s,p1),compareString(s,p2),compareString(s,p3)};
		int min =10;
		for(int i=0;i<3;i++){
			if(v[i]<min) min = v[i];
		}
		
		
		for(int i=0;i<3;i++){
			if(v[i]==min){
				cout<<(i+1)<<endl;
				break;
			}
		}
	}
}
