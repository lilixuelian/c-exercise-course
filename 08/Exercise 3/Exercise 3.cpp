#include<iostream>
#include"MyString.cpp"
using namespace std;

int main(){
	char str[] = "12345";
	char* pstr = str;
	MyString mystring(pstr);
	char str2[] = "123467";
	char* pstr2 = str2;
	MyString mystring2(pstr2);
	char a = '4';
	char str3[] = "abcde";
	cout << "mystring=12345.at(2)£º" << mystring.at(2) << endl;
	cout << "mystring=12345 length:" << mystring.length() << endl << "mystring2=123467 length:" << mystring2.length() << endl;
	cout << "find whther 4 is in mystring:" << mystring.find(a) << endl;
	cout << "mystring=12345 compare to mystring2=123467:" << mystring.compare(mystring2) << endl;
	cout << "mystring=12345 compare to mystring2=123467 from index0 to index2:" << mystring.compare(0, 3, mystring2) << endl;
	mystring.copy(str3, 2, 2);
	cout << endl << "after copy str3=abcde from index2 to index3:";
	for(int i = 0; i < 2; i++){
		cout << mystring.at(i);
	}
	cout << endl << "before clear, whether empty:" << mystring.empty() << endl;
	mystring.clear();
	cout << "after clear, whether empty:" << mystring.empty() << endl;
}
