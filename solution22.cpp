#include<iostream>
#include<map>
using namespace std;

int main(){
	string s;
	while(cin>>s){
		map<char,int> M;
		for(int i=0;i<s.size();i++){
			M[s[i]]++;
		}
		int ct =0;
	    for (map<char, int>::iterator itr = M.begin(); itr != M.end(); ++itr) { 
	          ct+=itr->second%2;
	    } 
	    ct-=1;
	    if(ct>0) cout<<ct<<endl;
	    else cout<<"0"<<endl;
	}
}
