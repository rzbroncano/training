//Case Numbers and Blank Lines case 1
#include <iostream>
using namespace std;

int main(){
	int a, b,c=1;
	
	while(scanf("%d %d",&a,&b)!=EOF){
		//notive the two '\n'
		printf("Case %d: %d\n\n",c++,a+b);
	}
}
