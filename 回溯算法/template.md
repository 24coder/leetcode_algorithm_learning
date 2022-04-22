//断点调试代码示例  以组合问题为例

```cpp
//头文件
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
	vector<vector<int>> res;
	vector<vector<int>> subsets(vector<int>& nums) {
		// 记录走过的路径
		vector<int> track;
		backtrack(nums, 0, track);
		return res;
	}

	void backtrack(vector<int>& nums, int start, vector<int>& track) {
		cout << "传入的起始位置为："<<start<<""<< endl;
		cout << "开始执行track " << start << endl;
		res.push_back(track);
		
	for (int i = start; i < nums.size(); i++) {
		cout << "i的值为：" << i << endl;
		// 做选择
		track.push_back(nums[i]); 
		// 回溯
		cout << "track的大小" << track.size()<< endl;
		cout << "res的大小"<<res.size() << endl;
		backtrack(nums, i + 1, track);
		// 撤销选择			
		cout << "回退1个" << endl;
		track.pop_back();
		cout << "track的大小" << track.size() << endl;
	}
	}

	//回来执行的时候 会执行i++ 并且还会进行判断是否符合条件
	
};


//源文件  测试

#include"static_list.h"
#include<iostream>
void  main() {

	cout << "****************************************************************\n";
	vector<int>ceshi{1,2,3};
	vector<vector<int> >res;
	Solution su;
	res=su.subsets(ceshi);
	
	
	


	/*for (int i = 0; i != res.size(); i++)
	{
		for (int j = 0; j != res[j].size(); j++) {
			
				cout << res[i][j] << " ";
			
		}
		cout << endl;
	}*/
	cout << "****************************************************************\n";
	system("pause");
}
 

   ```
