#include<iostream>
#include <stdio.h>
using namespace std;

int main(){

	//freopen ("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);
    int i,a,b,c;

    while(scanf("%d %d %d %d",&i,&a,&b,&c),(i || a || b || c )){
    	int result = 1080;
    	result+= (i <a ? (i+40) - a : i -a)*9;
    	result+= (b <a ? (b+40) - a : b -a)*9;
    	result+= (b <c ? (b+40) - c : b -c)*9;
    	printf("%d\n",result);
    }

	return 0;
}