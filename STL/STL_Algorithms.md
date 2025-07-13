# 🔧 C++ STL Algorithms Cheat Sheet for DSA & Interviews

---

## ✨ What Are STL Algorithms?

STL algorithms are a set of ready-to-use **functions** provided by the C++ Standard Library under the `<algorithm>` header. They allow you to perform operations like **sorting, searching, counting, comparing**, etc., on containers such as vectors, arrays, sets, and more.

They save time, reduce boilerplate, and are **highly optimized**. These algorithms work with **iterators**, so they can be used with almost any container.

---

## 🔸 Header Required

```cpp
#include <algorithm>
```

---

## 📊 Most Common STL Algorithms (with Clear Examples)

### 1. `sort()` – Sort Elements in Ascending Order

```cpp
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {5, 3, 1, 4, 2};
    sort(v.begin(), v.end()); // v = {1, 2, 3, 4, 5}
    for (int x : v) cout << x << " ";
    return 0;
}
```

✅ **Use case:** Sorting before binary search, greedy problems.

---

### 2. `reverse()` – Reverse the Elements

```cpp
reverse(v.begin(), v.end()); // v becomes {5, 4, 3, 2, 1}
```

✅ **Use case:** Reversing results, two-pointer tricks.

---

### 3. `count()` – Count Occurrences

```cpp
int cnt = count(v.begin(), v.end(), 2); // returns 1 if 2 appears once
```

✅ **Use case:** Count duplicates or frequency.

---

### 4. `find()` – Find an Element

```cpp
auto it = find(v.begin(), v.end(), 3);
if (it != v.end()) cout << "Found at index: " << it - v.begin();
```

✅ **Use case:** Checking presence or finding position.

---

### 5. `binary_search()` – Search in Sorted Container

```cpp
sort(v.begin(), v.end());
bool found = binary_search(v.begin(), v.end(), 4);
cout << (found ? "Yes" : "No");
```

✅ **Use case:** Fast search in sorted containers.

---

### 6. `lower_bound()` – First Element >= X

```cpp
vector<int> v = {10, 20, 30, 30, 40};
auto it = lower_bound(v.begin(), v.end(), 30);
cout << "Index: " << it - v.begin(); // Output: 2
```

✅ **Use case:** Range queries, binary search variations.

---

### 7. `upper_bound()` – First Element > X

```cpp
auto it = upper_bound(v.begin(), v.end(), 30);
cout << "Index: " << it - v.begin(); // Output: 4
```

✅ **Use case:** Count occurrences via `upper_bound - lower_bound`

---

### 8. `max_element()` / `min_element()`

```cpp
int maxVal = *max_element(v.begin(), v.end());
int minVal = *min_element(v.begin(), v.end());
```

✅ **Use case:** Retrieve max or min quickly.

---

### 9. `accumulate()` – Sum Elements

```cpp
#include <numeric>
int sum = accumulate(v.begin(), v.end(), 0); // Start with 0
```

✅ **Use case:** Total sum or prefix sum calculations.

---

### 10. `next_permutation()` – Get Next Lexicographical Order

```cpp
vector<int> perm = {1, 2, 3};
next_permutation(perm.begin(), perm.end()); // perm = {1, 3, 2}
```

✅ **Use case:** Brute-force all permutations.

---

### 11. `prev_permutation()` – Get Previous Lexicographical Order

```cpp
prev_permutation(perm.begin(), perm.end());
```

✅ **Use case:** Backtrack to previous arrangement.

---

### 12. `all_of()` / `any_of()` / `none_of()` – Condition Checks

```cpp
bool allPos = all_of(v.begin(), v.end(), [](int x) { return x > 0; });
bool anyEven = any_of(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
bool noneNeg = none_of(v.begin(), v.end(), [](int x) { return x < 0; });
```

✅ **Use case:** Fast condition checking on entire array.

---

### 13. `remove()` – Remove Elements (with `erase()`)

```cpp
v.erase(remove(v.begin(), v.end(), 2), v.end());
```

✅ **Use case:** Delete all occurrences of a value cleanly.

---

## 💡 Custom Sort with Comparator

### Descending Order Sort

```cpp
sort(v.begin(), v.end(), greater<int>()); // 5 4 3 2 1
```

### Sort Pairs by Second Element

```cpp
vector<pair<int, int>> vp = {{1, 3}, {2, 2}, {3, 1}};
sort(vp.begin(), vp.end(), [](pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
});
```

---

## 📋 Summary Table

| Algorithm          | Purpose                        | Time Complexity |
| ------------------ | ------------------------------ | --------------- |
| sort()             | Sort elements                  | O(n log n)      |
| reverse()          | Reverse order                  | O(n)            |
| count()            | Count occurrences              | O(n)            |
| find()             | Find element                   | O(n)            |
| binary_search()    | Check presence (sorted)        | O(log n)        |
| lower_bound()      | First element >= target        | O(log n)        |
| upper_bound()      | First element > target         | O(log n)        |
| max_element()      | Largest value                  | O(n)            |
| min_element()      | Smallest value                 | O(n)            |
| accumulate()       | Sum of elements                | O(n)            |
| next_permutation() | Next lexicographic permutation | O(n)            |
| prev_permutation() | Previous permutation           | O(n)            |
| all_of()           | Check if all match condition   | O(n)            |
| any_of()           | Check if any match condition   | O(n)            |
| none_of()          | Check if none match            | O(n)            |
| remove() + erase() | Remove elements from container | O(n)            |

---

## 🚀 Final Words

STL algorithms make C++ powerful and expressive. With practice, these will save you **hours** in contests and interviews. Learn to combine them with iterators and lambdas to write elegant, high-performance code.

Happy Coding! 🚀
