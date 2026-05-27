#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canReduceToOne(vector<int>& a) {
    sort(a.begin(), a.end());
    for (int i = 1; i < a.size(); i++) {
        if (a[i] - a[i - 1] > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (canReduceToOne(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
