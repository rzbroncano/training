#include<iostream>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);

	string s;
	int p=1;

	while(cin>>s){
		if(s=="*") break;

		if(s=="Hajj") printf("Case %d: Hajj-e-Akbar\n",p);
		if(s=="Umrah") printf("Case %d: Hajj-e-Asghar\n",p);
		p++;
	}


	return 0;
}
