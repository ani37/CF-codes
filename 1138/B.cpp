#include <bits/stdc++.h>
#define int long long int
using namespace std;
int a[5005];
int c[5005];
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i = 1;i<= n;i++){
        char ch;
        cin>>ch;
        c[i] = (ch - '0' );
    }
    int w = 0;
    for(int i = 1;i<= n;i++){
        char ch;
        cin>>ch;
        a[i] = (ch - '0' );
        w+= a[i];
    }
    vector <int> p1 , p2 , p0;
    for(int i = 1;i<= n;i++){
        if(c[i] == 0 && a[i] == 0 ){
            p0.push_back(i);
        }
        else if(c[i] == 1 && a[i] == 0 ){
            p1.push_back(i );
        }
        else if(c[i] == 0 && a[i] == 1 ){
            p1.push_back(i );
        }
        else{
            p2.push_back(i );
        }
    }
    int c2 = p2.size();
    int c1 = p1.size();
    int c0 = p0.size();
    int a2 = -1;
    int a1 = -1;
    int a0 = -1;
    for(int i = 0;i<= c2;i++ ){
        for(int j = 0;j<= c1;j++){
            if((i*2 + j == w) && (i+j <= n/2  ) && ( i+j+ c0 >= n/2 )   ){
                a2 = i;
                a1 = j;
                a0 = n/2 - i - j;
            }
        }
    }
    if(a2 == -1 ){
        cout<<"-1\n";return 0 ;
    }
    for(int i = 0;i<a2;i++ ){
        cout<<p2[i]<<" ";
    }
    for(int i = 0;i<a1;i++ ){
        cout<<p1[i]<<" ";
    }
    for(int i = 0;i<a0;i++ ){
        cout<<p0[i]<<" ";
    }
}
