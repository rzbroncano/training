#include<iostream>
#include <stdio.h>
#include<cmath>
using namespace std;

int main(){


	//freopen ("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);

	int TC,a,b;
	scanf("%d",&TC);
	while(TC--){
		scanf("%d %d",&a,&b);
		int r = (int)(ceil((a-2)/3.0))* (int)(ceil((b-2)/3.0));
		printf("%d\n", r);
	}

	return 0;
}