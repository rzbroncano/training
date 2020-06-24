#include<iostream>
#include<stdio.h>

using namespace std;

int main(){


	//freopen ("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);

    int TC, a,b;

    scanf("%d",&TC);

    while(TC--){

    	scanf("%d %d",&a,&b);

    	if(a<b) printf("<\n");
    	else if(a>b) printf(">\n");
    	else printf("=\n");
    }

	return 0;
}