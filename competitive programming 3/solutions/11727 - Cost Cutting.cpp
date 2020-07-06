#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	//freopen("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);
    
    int TC;
    int arr[3];
    int p=1;
    
    scanf("%d",&TC);
    
    while(TC--){
		
		for(int i=0;i<3;i++){
			scanf("%d",&arr[i]);
		}	
		
		sort(arr,arr+3);
		
		printf("Case %d: %d\n",p,arr[1]);
		p++;
		
	}

	return 0;
}
