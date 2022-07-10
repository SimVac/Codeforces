#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int counter = 0;
        for (int j = 0; j < 4; ++j) {
            int temp;
            cin >> temp;
            if (temp)
                counter++;
        }
        if (counter == 0)
            cout << 0;
        else if (counter >= 4)
            cout << 2;
        else
            cout << 1;
        cout << endl;
    }
    return 0;
}
