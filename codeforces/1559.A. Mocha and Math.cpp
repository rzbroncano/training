#include<iostream>

using namespace std;


int main(){
	
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		int v[100];
		
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%d",&v[i]);
		int r = v[0];
		for(int i=1;i<n;i++) r = r & v[i];
		
		printf("%d\n",r);
		
	}
	
	
	
	return 0;
}
