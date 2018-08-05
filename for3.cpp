#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int temp = 0;
    cout << "input two number: " << endl;
    cin >> a >> b;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;

        /*
        while (b >= a) {
            cout << "\n" << b << endl;
            b--;
        }
        */
    } else {
        while (a <= b) {
            cout << "\n" << a << endl;
            a++;
        }
    }
    return 0;
}
