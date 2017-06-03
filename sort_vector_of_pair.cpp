#include <iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool sort_vector_pair(const pair<int,int> &p1,const pair<int,int> &p2){
    if(p1.first<p2.first)
        return 1;
    else if(p1.first==p2.first){
        if(p1.second<p2.second)
            return 1;
        else return 0;
    }
    return 0;
}
int main() {
	// your code goes here
	vector< pair<int,int> > a;
	a.push_back(make_pair(1,2));
	a.push_back(make_pair(2,2));
	a.push_back(make_pair(1,3));
	a.push_back(make_pair(3,3));
	a.push_back(make_pair(1,1));
	a.push_back(make_pair(2,0));
	a.push_back(make_pair(1,10));
	a.push_back(make_pair(0,21));
	//int m=kadane_algo(a);
	//cout<<m;
	for(int i=0;i<a.size();i++){
	    cout<<a[i].first<<" "<<a[i].second<<"\n";
	}
	cout<<"\n";
	sort(a.begin(),a.end(),sort_vector_pair);
	for(int i=0;i<a.size();i++){
	    cout<<a[i].first<<" "<<a[i].second<<"\n";
	}
	return 0;
}