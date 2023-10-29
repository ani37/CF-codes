#include <iostream>
using namespace std;
// initialise the main function
int main()
{
    // add solver function
    solve();
}

void solve(){
    int a, b;
    cout << "Enter two numbers to multiply: \n";
    cin >> a >> b;

    int result = 0;
    while (b > 0)
    {
        if (b % 2 != 0)
        {
            result += a;
        }
        a = a << 1;
        b = b >> 1;
    }
    // print the result
    cout << "Product: " << result << '\n';
    return 0;   
}
