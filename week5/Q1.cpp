#include <bits/stdc++.h>
using namespace std;

void solve() {
    int array_size;
    cin >> array_size;
    char array[array_size];
    int count[26] = {0};
    for (int i = 0; i < array_size; i++) {
        cin >> array[i];
        count[array[i] - 'a']++;
    }
    char ch;
    int count_ch = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] > count_ch) {
            ch = (char)(i + 'a');
            count_ch = count[i];
        }
    }
    if (count_ch == 1) {
        cout << "No duplicate present\n";
    } else {
        cout << ch << " " << count_ch;
    }
}

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }
    return 0;
}
