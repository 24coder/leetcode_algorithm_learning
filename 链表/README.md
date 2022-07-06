#链表注意事项
凡是需要特别判断头结点的地方，建立一个虚拟头结点即可。
凡是头结点会改变(头结点可能被删除，可能是另外一个节点作为头结点等等)的地方，建立一个虚拟头结点会比较好,直接将这个虚拟头结点的下一个节点指向那个头结点会变的链表



```cpp
//链表实现
	class linklist {
	public:
		linklist(int data=0) :now(data),next(nullptr){
			
		};
		~linklist();
		
	public:
		int now;
		linklist* next;
		linklist* head=this;

	//头插法
		void insert_head(int val) {
			linklist* new_node = new linklist(val);
			new_node->next = head->next;
			head->next = new_node;
			return;
		}


	//尾插法
	void insert_behind(int val) {
		linklist* new_node = new linklist(val);
		linklist*head_;
		while (head->next != nullptr) {
			head = head->next;
		}
		head->next = new_node;
		return;
	}
	//打印链表
	void print_linklist() {
		linklist* p = head->next;
		while (p != nullptr)
		{
			cout << p->now;
			p = p->next;
		}
		cout << endl;
	
	}





    //单链表搜索接口
	bool find(linklist* p, int a)
	{
		while (p != nullptr) {
			if (p->now == a) {

				return true;
			}
			p = p->next;
		}


	}


	};
  
  ```  
  
  
  链表测试  
  ```cpp
  
  int  main() {
  //链表测试
	linklist t(199);
	for (int i = 0; i < 10; i++) {
		t.insert_head(i);
	}
	cout << t.now<<endl;
	t.print_linklist();
	system("pause");
}
```




