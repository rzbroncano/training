#include<iostream>

using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		int n;
		scanf("%d",&n);
		n = (((n*63)+7492)*5)-498;
		if(n<0) n*=-1;
		n= (n%100)/10;
		printf("%d\n",n);
	}
	
	return 0;
}
