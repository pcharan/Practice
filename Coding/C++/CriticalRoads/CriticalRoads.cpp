#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int CriticalRoads(vector<vector<int>> roads)
{
	map<int, int>cityroads;
	int ciriticalroads=0;
	for(int i=0; i<roads.size(); i++){
		for(int j=0; j,roads[0].size(); j++){
			if(cityroads.find(roads[i][j]) == cityroads.end()){
				cityroads.insert(std::pair<int, int>(roads[i][j], 1));
			}
			else{
				cityroads[roads[i][j]] += cityroads[roads[i][j]];
			}
		}
	}
	for(auto it=cityroads.begin(); it!=cityroads.end(); it++)
	{
		if( it->second >2) ciriticalroads++;
	}
	return ciriticalroads;
}

int main(){
	vector<vector<int>> r={{1,2},{1,3},{2,3},{3,4},{4,5}};
	/*for(int i=0 ;i<5;i++)
	{
		vector<int> v;
		for(int j=0; j<2; j++){
			int val;
			cin>>val;
			v.push_back(val);
		}
		r.push_back(v);
	}*/
	
	cout<<"Number of CriticalRoads :"<<CriticalRoads(r)<<endl;
	return 0;
}