/**
 * 功能：数小孩问题
 */

public class CountChild {
	public static void main(String[] args){
		ChildCircle cc = new ChildCircle();
		cc.setN(5);
		cc.createCircle();
		cc.setW(2);
		cc.setS(2);
		cc.show();
		cc.countChild();
	}
}

class Child {
	int no;
	Child nextChild = null;

	public Child(int no) {
		this.no = no;
	}
}

class ChildCircle {
	Child firstChild = null; //定义一个指向链表第一个小孩的引用（固定不动）
	Child tempChild = null; //定义一个指针或游标，用于在循环链表中跑动
	int n = 0; //共有几个小孩
	int w = 0; //从第几个小孩开始数
	int s = 0; //数几下

	public void setN(int n){ //设置链表的大小
		this.n = n;
	}

	public void setW(int w){ //设置从第几个小孩开始数数
		this.w = w;
	}

	public void setS(int s){ //设置数几下
		this.s = s;
	}

	public void createCircle() { //初始化循环链表
		for (int i=1; i<=n; i++) {
			if (i == 1) { //创建第一个小孩
				Child ch = new Child(i);
				this.firstChild = ch;
				this.tempChild = ch;
			}
			else {
				if (i == n) {//创建最后一个小孩
					Child ch = new Child(i);
					tempChild.nextChild = ch;
					tempChild = ch;
					tempChild.nextChild = this.firstChild;
				}
				else {
					Child ch = new Child(i);
					tempChild.nextChild = ch;
					tempChild = ch;
				}
			}
		}
	}

	public void show(){ //显示循环链表
		Child tempChild = this.firstChild;
		do{
			System.out.println(tempChild.no);
			tempChild = tempChild.nextChild; 
		}while (tempChild != this.firstChild);
	}

	public void countChild(){
		/**1.先找到开始数数的那个小孩
		 * 2.数s下
		 * 3.将其从队列中删除
		 */

		Child tempChild = this.firstChild;
		Child temp2Child = this.firstChild;
		for (int i=1; i<w; i++){ //因为自己数了一下1，所以是w-1次
			tempChild = tempChild.nextChild;
		}

		while (this.n != 1)	{
			for (int j=1; j<s; j++){ 
				tempChild = tempChild.nextChild;
			}

			//找到要出环的前一个小孩
			temp2Child = tempChild;
			while (temp2Child.nextChild != tempChild){
				temp2Child = temp2Child.nextChild;
			}

			temp2Child.nextChild = tempChild.nextChild;
			//让tempChild指向下一个数数的小孩
			tempChild = tempChild.nextChild;
			this.n --;
		}

		//输出最后一个小孩
		System.out.println("最后一个出环的小孩是：" + tempChild.no);
	}
}