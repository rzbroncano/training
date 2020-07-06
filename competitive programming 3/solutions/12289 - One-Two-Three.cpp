#include<iostream>
#include<algorithm>

using namespace std;

string words[] = {"one","two","three"};

int main(){

	//freopen("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);

    int TC;

    scanf("%d",&TC);

    while(TC--){
    	string s;
    	cin>>s;

    	for(int i=0;i<3;i++){
    		string w = words[i];
    		int l = min(w.size(),s.size());
    		int ceq =0;
    		for(int j=0;j<l;j++){
    			if(s[j]==w[j]) ceq++;
    		}
    		if(s.size()-ceq<=1){
    			printf("%d\n",(i+1));
    			break;
    		}
    	}
    }

	return 0;
}
