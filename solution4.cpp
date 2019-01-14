#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		vector<int> v;
		int aux=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				aux = aux*10 + (s[i]-'0');
				if(i==s.size()-1){
					v.push_back(aux);
					aux =0 ;
				}
			}else{
				v.push_back(aux);
				aux = 0;
			}
		}
		int sum =0 ;
		for(int i=0;i<v.size();i++){
			sum+=v[i];
		}
		cout<<sum<<endl;
		
	}
}
