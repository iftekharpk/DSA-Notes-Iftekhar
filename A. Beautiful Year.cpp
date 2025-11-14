#include <bits/stdc++.h>
using namespace std;

bool caryyear(int year) {
    bool seen[10] = {false};
    while (year > 0) {
        int d = year % 10;
        if (seen[d]) return false;
        seen[d] = true;
        year /= 10;
    }
    return true;
}

int main() {
    int y;
    cin >> y;
    int year = y + 1;
    while (true) {
        if (caryyear(year)) {
            cout << year << endl;
            break;
        }
        year++;
    }
    return 0;
}
