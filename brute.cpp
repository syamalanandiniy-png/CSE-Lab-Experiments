#include<iostream>
#include<vector>
#include<unordered-map>
using namespace std;
void twosum(vector<int>&nums,int target){
	unordered_map<int,int>mp;
	for(int i=0;i<nums.size(),i++)
	{ 
	int complement=target-nums[i];
	if(mp.find(complement)!=mp.end())
	{cout<<"indices found"<<mp[complement]<<"and"<<i,<endl;
	return;
	}
	mp[nums[i]]=i;
}
cout<<"no pair found";
}
int main(){ 
vector<int> nums ={1,7,8,15};
int target =9;
twosum(nums,target);
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
}
	
}
