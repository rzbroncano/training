#include<iostream>
#include<stdio.h>


using namespace std;


int main(){

	//freopen ("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);

    int TC, a,b;

    while(scanf("%d",&TC),(TC)){

    	scanf("%d %d",&a,&b);

    	int x,y;

    	for(int i=0;i<TC;i++){

    		scanf("%d %d",&x,&y);

    		if(x==a || y==b) printf("divisa\n");
			else if (x<a && y>b) printf("NO\n");
			else if (x<a && y<b) printf("SO\n");
			else if (x>a && y>b) printf("NE\n");
			else if (x>a && y<b) printf("SE\n");
    	}

    }



	return 0;
}