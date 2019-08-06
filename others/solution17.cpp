#include<iostream>
#include<map>
using namespace std;
string mres[5][5] ={{"empate","sheldon","rajesh","rajesh","sheldon"},
				  {"rajesh","empate","sheldon","sheldon","rajesh"},
				  {"sheldon","rajesh","empate","rajesh","sheldon"},
				  {"sheldon","rajesh","sheldon","empate","rajesh"},
				  {"rajesh","sheldon","rajesh","sheldon","empate"}};

int main(){
	int c;
	cin>>c;
	while(c--){
		string a,b;
		cin>>a>>b;
		
		if(a==b)cout<<"empate"<<endl;
		else{
			map<string,int> m;
			m["pedra"] = 0;
			m["papel"] = 1;
			m["tesoura"] = 2;
			m["lagarto"] = 3;
			m["spock"] = 4;
			
			int va = m[a];
			int vb = m[b];
			cout<<mres[va][vb]<<endl;
		}
	}
}
