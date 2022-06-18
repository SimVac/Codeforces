#include "bits/stdc++.h"

using namespace std;

void testcase (){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int doppi = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] == v[i+1])
            doppi++;
    }
    if (doppi % 2 == 1)
        doppi++;
    cout << n - doppi << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        testcase();
    }
    return 0;
}