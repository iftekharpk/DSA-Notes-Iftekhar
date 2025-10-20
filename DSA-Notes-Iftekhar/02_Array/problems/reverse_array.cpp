// Problem: Reverse an array (Two-pointer approach)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout << "Reversed Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
