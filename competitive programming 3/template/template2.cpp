// case : TThe multiple tests cases are terminated by special values (usually zeroes)
#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	//stop when both integers are 0
	
	while(scanf("%d %d",&a,&b),(a||b)){
		printf("%d\n",a+b);
	}
}
