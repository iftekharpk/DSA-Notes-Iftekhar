#include <bits/stdc++.h>
using namespace std;

int totalMoney(int n) {
    int total = 0;     // মোট টাকা রাখার জন্য
    int monday = 1;    // প্রথম সোমবারে ১ ডলার থেকে শুরু

    // প্রতিটা সপ্তাহ নিয়ে কাজ করবো
    while (n > 0) {
        // সপ্তাহের প্রতিদিনে কত জমাচ্ছে সেটা হিসাব
        for (int day = 0; day < 7 && n > 0; day++) {
            total += monday + day; // সোমবারে monday, মঙ্গলবারে monday+1, ইত্যাদি
            n--; // একদিন কমে গেল
        }
        monday++; // পরের সপ্তাহে সোমবারে ১ ডলার বেশি হবে
    }

    return total;
}

int main() {
    int n;
    cin >> n;  // ইউজারের কাছ থেকে দিন সংখ্যা নিই
    cout << totalMoney(n) << endl; // ফলাফল প্রিন্ট করি
    return 0;
}
