#二叉树注意事项  
二叉树遍历：从根出发、依次访问二叉树所有节点  使得每个节点都被访问到  且只被访问一次   
经典遍历方式：前序 中序  后序遍历(深度优先遍历[沿着每一个分支向下进行搜索]) 名字由来是使用对根的访问的顺序来的  
前序遍历：  
 顺序：  根->左—>右  
中序遍历：  
 顺序：  左->根—>右  
后序遍历：  
 顺序：  右->左—>根  
 已知前序、中序、后序遍历是无法唯一确定一个二叉树 
 已知前序、中序可以唯一确定一个二叉树   
 已知中序、后序可以唯一确定一个二叉树    
 二叉树层序遍历：广度优先搜索  一般借助队列实现访问  
 已知层序遍历是无法唯一确定一个二叉树  
 已知层序和中序遍历可以唯一确定一个二叉树  
 层序遍历的过程：
1、初始化一个队列
2、把二叉树的根节点如队列
3、判断队列是否为空，如果为空，就让队头结点出队（相当于遍历了该节点）
   同时要将这个刚刚出队的节点左孩子和右孩子分别入队（如果该节点右左右孩子）
4、重复3步骤，一直到队列为空  
二叉树存储方式：
顺序存储方式：
当右斜树顺序存储方式(就是只有右节点)会浪费很大的空间  所以顺序存储方式适合存储完全二叉树

链式存储方式：一个数据域两个指针域    如果需要找到每个节点的父节点，可以将链表设计成三叉链表，可以直接通过指针找到父节点  


  




