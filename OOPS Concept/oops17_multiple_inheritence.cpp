#include <bits/stdc++.h>
using namespace std;

class Father {
public:
	int height;
	void askFather(){
		cout << "1st" <<endl;
		cout << "am your father ask me " << endl;
	}

};

class Mother {
public:
	string skincolor;
	void askMother(){
		cout << "am your mother ask me " << endl;
	}

	void askFather(){
		cout << "2nd "<< endl;
		cout << "am your father ask me " << endl;
	}

};

class Child : public Father, public Mother{
public:
	void askparents(){
		cout << "am asking my parents "<< endl;
	}
	void setcolorandheight(string color, int iheight){
		skincolor = color;
		height = iheight;
	}
	void display(){
		cout << height << " " << skincolor << " " <<  endl;
	}
};

int main(){
	Child anil;
	anil.setcolorandheight("white", 6);
	anil.display();	
	anil.askparents();
	anil.askFather();
	anil.askMother();
	return 0;
}