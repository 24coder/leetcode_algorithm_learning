#栈注意事项
#栈接口实现
```cpp

//顺序栈代码
	class sequestack
	{
	public:
		sequestack(int size = 10) :mtop(0), mcap(size)
		{
			mpstack = new int(mcap);
		}
		~sequestack() {
			delete[] mpstack;
			mpstack = nullptr;

		};
	public:
//放入元素
		void push_back(int val) {
			if (mtop == mcap)
			expand(2 * mcap);
			mpstack[mtop++] = val;
		}

//弹出元素
		void pop() {
			mtop--;
		}
//栈的大小
		int size() {
			return mtop;
		}
//获取栈顶元素
		int top()const {
			if (mtop == 0)
			{
				throw "stack is empty";
			}
			return mpstack[mtop - 1];
		}
//判断栈空
		bool empty() {
			 return mtop==0;
		}
	private:
		void expand(int size) {
			int * mstack = new int(size);
			memcpy(mstack, mpstack, mtop);
			delete[] mpstack;
			mpstack = mstack;
			mcap = size;

		}
	public:
		int* mpstack;
		int mtop;  //栈顶位置  指针或者下标
		int mcap;
	};


```



