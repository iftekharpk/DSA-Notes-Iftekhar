# 💾 Space Complexity

## 🔹 Definition
Space complexity measures how much extra memory an algorithm uses besides the input data.

| Notation | Meaning | Example |
|:----------|:---------|:--------|
| O(1) | Constant | Using only a few variables |
| O(n) | Linear | Using an extra array or list |
| O(n²) | Quadratic | Using a 2D matrix |

---

### 🧠 Example:
```cpp
int sum(int n) {
    int s = 0; // O(1)
    for (int i = 0; i < n; i++) {
        s += i;
    }
    return s;
}
```
👉 Space Complexity = **O(1)** (no extra space)
