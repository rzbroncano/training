#include<iostream>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);

    int TC;
    int p=1;

    scanf("%d",&TC);

    while(TC--){
    	int flag=true;
    	int x;
    	for(int i=0;i<3;i++){
    		scanf("%d",&x);
    		if(x>20) flag=false;
    	}

    	cout<<"Case "<<p<<": "<<(flag?"good":"bad")<<endl;
    	p++;
    }

	return 0;
}
