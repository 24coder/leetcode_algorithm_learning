
//cpp文件
#include"static_list.h"

void  main() {

	cout << "****************************************************************\n";
	vector<int>nums{1,2};
	solution su;
	vector<vector<int>>res;
	res = su.permute(nums);
	for (int i = 0; i != res.size(); i++)
	{
		for (int j = 0; j != res[0].size(); j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	cout << "****************************************************************\n";


	system("pause");
}
