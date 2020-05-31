#include<iostream>

using namespace std;

int main(){

	int p[20], N = 3;

	for(int i=0;i<N;i++) p[i] = (i+1);
	for(int i=0;i<(1<<N);i++){
		for(int j=0;j<N;j++)  if(i & (1<<j)) printf("%d ",p[j]);
	    printf("\n");
    }

	return 0;
}