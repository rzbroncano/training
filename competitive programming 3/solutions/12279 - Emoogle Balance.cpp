#include<iostream>
using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);
	//stop when both integers are 0
	int a;
	int x;
	int p=1;

	while(scanf("%d",&a),(a!=0)){
        int czeros =0;
		for(int i=0;i<a;i++){
			scanf("%d",&x);
			if(x==0)czeros++;
		}
		int r = (a-czeros)-czeros;
		printf("Case %d: %d\n",p,r);
		p++;
	}


	return 0;
}
