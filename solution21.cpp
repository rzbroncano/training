#include<iostream>

using namespace std;

int vc[] = {3,2,2,2,3,2,2,2,3,2,2,2,2,2,3,2,2,2,3,2,2,2,2,2,2,2};
int vd[] = {3,3,1,3,3,3,1,1,1,1};

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		int cb =1;
		for(int i=0;i<s.size();i++){
			if(s[i]>='a'&&s[i]<='z'){
				cb*= vc[(int(s[i])-97)];
			}else if(s[i]>='A' &&s[i]<='Z'){
				cb*= vc[(int(s[i])-65)];
			}else if(s[i]>='0'&&s[i]<='9'){
				cb*= vd[s[i]-'0'];
			}
		}
		cout<<cb<<endl;
	}
}
