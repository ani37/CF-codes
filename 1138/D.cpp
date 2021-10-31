#include<bits/stdc++.h>
#define LL long long int
#define M 1000000007
#define endl "\n"
#define eps 0.00000001
LL pow(LL a,LL b,LL m){ a%=m;LL x=1,y=a;while(b > 0){if(b%2 == 1){x=(x*y);if(x>m) x%=m;}y = (y*y);if(y>m) y%=m;b /= 2;}return x%m;}
LL gcd(LL a,LL b){if(b==0) return a; else return gcd(b,a%b);}
LL gen(LL start,LL end){LL diff = end-start;LL temp = rand()%start;return temp+diff;}
using namespace std;
vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
int main()	{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    int zeros = 0, ones = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '0')
            ++zeros;
        else
            ++ones;
    }
    int temp1 = 0, temp2 = 0;
    for(int i = 0; i < b.length(); i++) {
        if(b[i] == '0')
            ++temp1;
        else
            ++temp2;
    }
    if(temp1 > zeros || temp2 > ones) {
        cout << a;
        return 0;
    }
    vector<int> temp = prefix_function(b);
    int sz = temp.back();
    string ans = b;
    zeros -= temp1;
    ones -= temp2;
    bool flag = 1;
    while(flag) {
        for(int i = sz; i < b.length(); i++) {
            if(b[i] == '0' && zeros > 0) {
                --zeros;
                ans.push_back('0');
            }
            else if(b[i] == '1' && ones > 0) {
                --ones;
                ans.push_back('1');
            }
            else {
                flag = 0;
                break;
            }
        }
        
    }
    while(zeros) {
        ans.push_back('0');
        --zeros;
    }
    while(ones) {
        ans.push_back('1');
        --ones;
    }
    cout << ans;
    
}
