class Solution {
public:
  //存放结果和路径
	vector<vector<int> > ans;  
	vector<int> path;
  
  
  vector<vector<int>> combine(int n, int k) {
		dfs(n, k, 1);
		return ans;
	}
  
  
	void dfs(int n,int k,int start) {
  //设置结束条件
		if (!k) {
			ans.push_back(path);
			return;
		}
    //设置结束条件
		for(int i = start; i <= n; i++) {
        //选择路径
        path.push_back(i);   
				dfs(n, k-1, i+1);
        //撤销路径
        path.pop_back();
			}
		}

	};

   
