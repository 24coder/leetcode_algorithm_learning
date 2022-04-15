//头文件
#pragma once
//静态链表
#include<iostream>
#define MAXSIZE 1000
#include<vector>
using  namespace std;




class solution {
public:
	vector<vector<int> > ans;
	vector<int> path;
	vector<bool> st;
	void dfs(vector<int>& nums, int u) {
		if (u == nums.size()) {
			ans.push_back(path);
			return;
		}
		for(int i = 0; i < nums.size(); i++) {
			if (st[i] == false) {
				path[u] = nums[i];
				st[i] = true;
				dfs(nums, u + 1);
				st[i] = false;
			}

		}

	}

	vector<vector<int>> permute(vector<int>& nums) {
		path = vector<int>(nums.size());
		st = vector<bool>(nums.size());

		dfs(nums, 0);

		return ans;
	}

	

};
