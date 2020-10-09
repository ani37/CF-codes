/*
		Polymorphism

means having many form
herarchy of class 

*/

// #include <bits/stdc++.h>
// using namespace std;

// class Person{
// public:
// 	void display(){
// 		cout << "I am from person base class" << endl;
// 	}
// };
// class Student : public Person{
// public: 
// 	void display(){
// 		cout << "I am from student derived class " << endl;
// 	}
// };

// class Farmer : public Person {
// public:
// 	void display(){
// 		cout << "I am from Farmer derived class " << endl;
// 	}

// };

// void introme(Person p){
// 	p.display();
// }

// int main(){

// 	Farmer anil;
// 	Student alex;

// 	introme(anil);
// 	introme(alex);

// 	return 0;
// }





#include <bits/stdc++.h>
using namespace std;

string calculate(string s1, string s2, int k){
	int ctr = 0;
	int n = s1.size();
	int m = s2.size();
	if(n != m) return "No";
	for(int i = 0; i < n; i++){
		if(s1[i] != s2[i]) ctr++;
	}
	if(ctr <= k) return "Yes";
	return "No";
}

// int solve(int m, int n){
// 	if (m == 1) return 1;
// 	if(m == 2) return solve(m-1 , n-1) + solve();

// }

int solve(int a, int b, int c, int d, int i){
	while(a > c){
		b= c+d;
		d = c << i;
		while( b < 15) {
			cout << d << endl;
			d = d + 4;
			b +=4;
		}
		c = c+16;
	}
	cout << b;
}

void solve ( int b){
	for(int a = 1 ; a&a <= 3 ; a++){
		b =b+a*5;
		cout <<b << " ";
	}
}

int solve(int x, int y)
{
	int p = (x+y) and (x) or (y);
	if(p != 0){
		int k = x^y;
	 cout << k;
	}
	else{
		int t = x&y;
		cout << t;
	}
}

int main(){
	// int k; cin >> k;
	// solve(32, 0, 4, 0 ,0);
	// solve(0);
	solve(16, 234);
	// string s1, s2; cin >> s1 >> s2;
	// int ans = calculate(s1, s2 ,k);
	// cout << ans << endl;
}


