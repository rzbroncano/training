#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int v[n];
		
		for(int i=0;i<n;i++){
			scanf("%d",&v[i]);
		}
		
		sort(v,v+n);
		int sum = 0;
		
		for(int i=1;i<n;i++){
			sum+=v[i]-v[i-1];
		}
		sum+=(v[n-1]-v[0]);
		printf("%d\n",sum);
		
	}
	
	return 0;
}
