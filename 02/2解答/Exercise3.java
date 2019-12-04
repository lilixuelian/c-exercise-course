/**
 * ���ܣ���С������
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
	Child firstChild = null; //����һ��ָ�������һ��С�������ã��̶�������
	Child tempChild = null; //����һ��ָ����α꣬������ѭ���������ܶ�
	int n = 0; //���м���С��
	int w = 0; //�ӵڼ���С����ʼ��
	int s = 0; //������

	public void setN(int n){ //��������Ĵ�С
		this.n = n;
	}

	public void setW(int w){ //���ôӵڼ���С����ʼ����
		this.w = w;
	}

	public void setS(int s){ //����������
		this.s = s;
	}

	public void createCircle() { //��ʼ��ѭ������
		for (int i=1; i<=n; i++) {
			if (i == 1) { //������һ��С��
				Child ch = new Child(i);
				this.firstChild = ch;
				this.tempChild = ch;
			}
			else {
				if (i == n) {//�������һ��С��
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

	public void show(){ //��ʾѭ������
		Child tempChild = this.firstChild;
		do{
			System.out.println(tempChild.no);
			tempChild = tempChild.nextChild; 
		}while (tempChild != this.firstChild);
	}

	public void countChild(){
		/**1.���ҵ���ʼ�������Ǹ�С��
		 * 2.��s��
		 * 3.����Ӷ�����ɾ��
		 */

		Child tempChild = this.firstChild;
		Child temp2Child = this.firstChild;
		for (int i=1; i<w; i++){ //��Ϊ�Լ�����һ��1��������w-1��
			tempChild = tempChild.nextChild;
		}

		while (this.n != 1)	{
			for (int j=1; j<s; j++){ 
				tempChild = tempChild.nextChild;
			}

			//�ҵ�Ҫ������ǰһ��С��
			temp2Child = tempChild;
			while (temp2Child.nextChild != tempChild){
				temp2Child = temp2Child.nextChild;
			}

			temp2Child.nextChild = tempChild.nextChild;
			//��tempChildָ����һ��������С��
			tempChild = tempChild.nextChild;
			this.n --;
		}

		//������һ��С��
		System.out.println("���һ��������С���ǣ�" + tempChild.no);
	}
}