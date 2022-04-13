#pragma once
#include"Tree.h"

/*二叉树的链式存储结构*/
#include <iostream>
using namespace std;

namespace _nmspl
{
	enum ECCEHILDSIGN
	{
		ROOT,  //根节点
		CHILDREN_LEFT,  //左节点
		CHILDREN_RIGHT   //右节点
	};
	
//树中节点的定义
template<typename T>  //T代表节点数据
class binary_tree_node {
public:
	T data;              //数据域
	binary_tree_node *left; //左节点指针
	binary_tree_node *right;//右节点指针

	binary_tree_node<T>* pnode; //父节点指针
};



//树中节点的定义
template<typename T>  //T代表节点数据
class binary_tree {
public:
	binary_tree()  //构造函数
	{
		Root = nullptr;
	}
	~binary_tree() //析构函数
	{
	}
public:
	binary_tree_node<T>* create_binary_node(binary_tree_node<T>* parent, ECCEHILDSIGN node_sign, const T& e);//创建一个节点
	void delete_tree_node(binary_tree_node<T>* p);
	//利用一个二叉树的前序遍历创建一个二叉树
	void create_tree_acc_p(char* pstr);
	//利用一个二叉树的前序遍历创建二叉树的递归函数
	void create_tree_acc_p_cir(binary_tree_node<T>*& tnode, char* pstr);
	//前序遍历一个二叉树  从Root开始遍历
	void preorder() {
		cout << " 前序遍历结果：" << endl;
		preorder(Root);
		cout<< endl;
	}

	void preorder(binary_tree_node<T>*& tnode) {
		if (tnode != NULL) {
			
			cout << tnode->data<<"   ";
			preorder(tnode->left);
			preorder(tnode->right);
		}
	}
	//中序遍历
	
	void inorder() {
		cout << " 中序遍历结果：" << endl;
		inorder(Root);
		cout << endl;
	}
	void inorder(binary_tree_node<T>*& tnode) {
		if (tnode != NULL) {
			inorder(tnode->left);
			cout << tnode->data << "   ";
			inorder(tnode->right);
		}
	}
	//后序遍历
	void postorder() {
		cout << " 后序遍历结果：" << endl;
		postorder(Root);
	}
	void postorder(binary_tree_node<T>*& tnode) {
		if (tnode != NULL) {
			postorder(tnode->left);
			postorder(tnode->right);
			cout << tnode->data << "   ";
			
		}
	}
private:
	binary_tree_node<T>* Root;

	

};

//释放二叉树节点函数实现
//先释放这个节点的左右节点  然后释放这个节点
template<typename T>
void binary_tree<T>::delete_tree_node(binary_tree_node<T>* p)
{

	if (p != NULL)
	{
		delete_tree_node(p->left);
		delete_tree_node(p->right);
		delete_tree_node(p);

	}
}
//创建一个树节点  一个一个节点进行创建
template<typename T>
binary_tree_node<T>* binary_tree<T>::create_binary_node(binary_tree_node<T>* parent, ECCEHILDSIGN node_sign, const T& e) {
	//先创建一个node节点  然后将它放到正确的位置上
	binary_tree_node<T>* tmp_node = new binary_tree_node<T>;
	tmp_node->data = e;
	tmp_node->left = NULL;
	tmp_node->right = NULL;
	if (node_sign == ROOT) {
		Root = tmp_node;
	}
	if (node_sign == CHILDREN_LEFT) {
		parent->left = tmp_node;
	}
	if (node_sign == CHILDREN_RIGHT) {
		parent->right = tmp_node;
	}
	return tmp_node;
}








//利用一个二叉树的前序遍历创建一个二叉树
template<typename T>
void binary_tree<T>::create_tree_acc_p(char* pstr) {
	 
	 create_tree_acc_p_cir(Root,pstr);

}

//利用一个二叉树的前序遍历创建二叉树的递归函数
template<typename T>
void binary_tree<T>::create_tree_acc_p_cir(binary_tree_node<T>*& tnode, char* pstr) {
	//"fh##eew#"
	if (*pstr == '#') 
	{    
		tnode = NULL;
		
	}
	else
	{
		//创建根节点
		tnode = new binary_tree_node<T>;
		tnode->data = *pstr;
		//循环调用创建左右子树  子子树
		create_tree_acc_p_cir(tnode->left, ++pstr);  //创建左子树
		create_tree_acc_p_cir(tnode->right, ++pstr);  //创建右子树
	
	}
	
	}
}
