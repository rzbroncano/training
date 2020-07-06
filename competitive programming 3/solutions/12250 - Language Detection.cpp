#include<iostream>
#include<map>
using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);

    string s;
    int i=1;
    map<string,string> m;
    m["HELLO"]="ENGLISH";
    m["HOLA"]="SPANISH";
    m["HALLO"]="GERMAN";
    m["BONJOUR"]="FRENCH";
    m["CIAO"]="ITALIAN";
    m["ZDRAVSTVUJTE"]="RUSSIAN";

    while(cin>>s){
    	if(s=="#") break;
    	string r = (m[s]==""?"UNKNOWN":m[s]);
    	cout<<"Case "<<i<<": "<<r<<endl;
    	i++;
    }


	return 0;
}
