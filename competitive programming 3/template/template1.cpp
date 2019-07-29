// case : The number of tests cases is given in the first line of the input.
#include <iostream>
using namespace std;

int main(){
	int TC, a, b;
	scanf("%d",&TC); //number of tests cases
	while(TC--){	//shortcut to repeat until 0 
		scanf("%d %d",&a,&b);	//compute answer
		printf("%d\n",a+b);	//on the fly
		
	}
}
