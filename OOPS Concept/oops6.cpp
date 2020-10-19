#include <bits/stdc++.h>
using namespace std;

class Human{
private:
	string *str;
	int *age;
public:
	Human(string iname, int iage){
		str = new string;
		age = new int;

		*str = iname;
		*age = iage;

	}
	void display(){
		cout << *str << " " << *age << endl;
	}
	~Human(){
		delete str;
		delete age;
		cout << "Memory is relaxed"<< endl;
	}
};

int main(){
	Human* anil = new Human("anil", 28);
	anil->display();
	delete anil;
	return 0;
}