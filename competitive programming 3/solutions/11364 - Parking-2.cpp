#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

typedef vector<int> vi;

int main(){

	//freopen ("input.txt","r",stdin);
    //freopen("myoutput.txt", "w", stdout);
    int TC,a;

    scanf("%d",&TC);

    while(TC--){

    	scanf("%d",&a);
    	vi v;
    	int p;

    	for(int i=0;i<a;i++) {
    		scanf("%d",&p); 
    		v.push_back(p);
    	}
    	sort(v.begin(),v.end());

    	printf("%d\n",(v[v.size()-1]-v[0])*2);

    }

	return 0;
}