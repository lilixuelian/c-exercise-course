#include<iostream>
#include<string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

void print(list<int> v){
	list<int> ::iterator it;
    for(it = v.begin();it != v.end(); ++it){
    	cout << *it << " ";
    }
    cout << endl;
}

int main(){
	vector<list<int>> v(10000);
	int n, i = 0;
	
	cin >> n;
	while(i++ < n){
		string s;
		cin >> s;
		if(s == "new"){
			int id;
			cin >> id;
			v[id] = list<int> ();
		}
		else if(s == "add"){
			int id, num;
			cin >> id >> num;
			v[id].push_back(num);
		}
		else if(s == "out"){
			int id;
			cin >> id;
			v[id].sort();
			print(v[id]);
		}
		else if(s == "merge"){
			int id1, id2;
			cin >> id1 >> id2;
			v[id1].merge(v[id2]);
		}
		else if(s == "unique"){
			int id;
			cin >> id;
			v[id].unique();
		}
	}
}
