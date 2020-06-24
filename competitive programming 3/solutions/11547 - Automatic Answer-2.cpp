#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;


int main(){


	//freopen ("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);

    int TC,x;

    scanf("%d",&TC);

    while(TC--){

    	scanf("%d",&x);

    	int d = ((((((x*567)/9)+7492)*235)/47 - 498)%100)/10;

    	printf("%d\n",abs(d));

    }

	return 0;
}