// Case Number and Blank Lines - case 2
#include <iostream>
using namespace std;

int main(){
	int a, b,c=1;
	
	while(scanf("%d %d",&a,&b)!=EOF){
		if(c>1) printf("\n");  // 2nd/ more cases
		printf("Case %d: %d\n\n",c++,a+b);
	}
	
	return 0;
}
