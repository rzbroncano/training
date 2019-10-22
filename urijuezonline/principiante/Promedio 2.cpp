#include<iostream>

using namespace std;

int main(){
	
	double a,b,c;
	
	while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
		
		double av = (a*2.0 + b*3.0 + c*5)/10.0;
		
		printf("MEDIA = %.1lf\n",av);
	}
}
