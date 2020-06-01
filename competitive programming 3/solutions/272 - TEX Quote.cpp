#include<iostream>
//#include <stdio.h>

using namespace std;

int main(){

    //freopen ("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);
	string s;
	bool flag = true;
	while(getline(cin,s)){
		string result ="";
		for(int i=0;i<s.size();i++){
			if(s[i]=='"'){
				if(flag) result+="``",flag=false;
				else result+="''",flag=true;
			}else  result+=s[i];
		}
		cout<<result<<endl;
	}

	return 0;
}