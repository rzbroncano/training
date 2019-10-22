#include<iostream>

using namespace std;

int main(){
	
	double a,b;
	
	while(cin>>a>>b){
		
		double av = (a*3.5 + b*7.5)/ 11.0;
		
		printf("MEDIA = %.5f\n",av);
	}
	
	return 0;
}
