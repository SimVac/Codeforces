#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;
        int count = 0;
        for (int j = 0; j < 3; ++j) {
            int n;
            cin >> n;
            if (n > a)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
