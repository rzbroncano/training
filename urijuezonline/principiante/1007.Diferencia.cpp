#include<iostream>

using namespace std;

int main(){
	
	int a,b,c,d;
	
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF){
		
		int op = a*b - c*d;
		
		printf("DIFERENCA = %d\n",op);
	}
}
