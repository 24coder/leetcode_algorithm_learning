#include"Tree.h"
#include"二叉树模板创建.h"
#include"链表结构二叉树创建.h"
#include<string>
using namespace std;
int main()
{

	//BiTree BT;

	//creatBiTree(BT);
	//CreatBiTree_Pre(BT);

	//PreOrder_NRe(BT);
	//InOrder_NRe(BT);
	//InOrder_Re(BT);

	//cout << endl;

	//PreOrder_NRe(BT);
	//PreOrder_Re(BT);

	//cout << endl;

	//一个一个节点进行创建
	_nmspl::binary_tree<int>  tree1;  //     5  
									  //   4    6
									  // 3        7
	_nmspl::binary_tree_node<int>*root_node=tree1.create_binary_node(nullptr, _nmspl::ROOT, 5);
	_nmspl::binary_tree_node<int>*root_lch = tree1.create_binary_node(root_node, _nmspl::CHILDREN_LEFT, 4);
	_nmspl::binary_tree_node<int>*root_rch = tree1.create_binary_node(root_node, _nmspl::CHILDREN_RIGHT, 6);
	_nmspl::binary_tree_node<int>*root_lch_lch = tree1.create_binary_node(root_lch, _nmspl::CHILDREN_LEFT, 3);
	_nmspl::binary_tree_node<int>*root_rch_rch = tree1.create_binary_node(root_rch, _nmspl::CHILDREN_RIGHT, 7);
	//char* s = "fheiafho";
	//while(*s!='\0')  cout << *(s++) << endl;
	

	/*_nmspl::binary_tree<char> mytree;
	mytree.create_tree_acc_p((char*)"fh#eew#");   */

	tree1.preorder();
	tree1.inorder();
	tree1.postorder();

	return 0;

}


