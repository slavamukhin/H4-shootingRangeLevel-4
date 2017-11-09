#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x < -2 && y > 1) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
