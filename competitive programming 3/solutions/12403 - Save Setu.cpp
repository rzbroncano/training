#include<iostream>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);

	int TC;
	int amount=0;
	scanf("%d",&TC);

	while(TC--){
		string cm;
		int value;
		cin>>cm;

		if(cm=="donate"){
			cin>>value;
			amount+=value;
		}

		if(cm=="report"){
			printf("%d\n",amount);
		}
	}


	return 0;
}
