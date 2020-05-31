#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

typedef pair<int,int> ii;
typedef pair<ii,int> iii;


int main(){

	iii A = make_pair(ii(5,24), -1979);
	iii B = make_pair(ii(5,24), -1980);
	iii C = make_pair(ii(11,13), -1983);

	vector<iii> birthdays;
	birthdays.push_back(C);
	birthdays.push_back(A);
	birthdays.push_back(B);


	sort(birthdays.begin(),birthdays.end());

	for(int i=0;i<birthdays.size();i++){
		ii tmp = birthdays[i].first;
		printf("%d %d %d\n",tmp.first,tmp.second,birthdays[i].second);
	}

	return 0;
}