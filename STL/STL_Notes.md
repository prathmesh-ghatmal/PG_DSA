# 📘 Complete STL (Standard Template Library) Notes – C++ DSA Preparation

---

## ✅ What is STL?

STL stands for **Standard Template Library** in C++.
It provides **generic classes and functions** to make coding easier, faster, and more optimized. STL is heavily used in DSA, Competitive Programming, and interviews.

---

## ❓ Why Use STL?

- Speeds up development with pre-written data structures and algorithms
- Code becomes more readable and concise
- STL components are **highly optimized** and tested
- Helps you focus on solving logic rather than writing utility structures

---

## 🔧 Components of STL

1. **Containers** – Data structures to store data (e.g., `vector`, `map`, `set`, etc.)
2. **Algorithms** – Built-in functions for searching, sorting, etc. (e.g., `sort`, `binary_search`)
3. **Iterators** – Smart pointers to traverse containers.
4. **Function Objects (Functors)** – For custom logic like comparators.

---

## 📦 STL Containers

### 🔹 `pair`

- Combines two values.

```cpp
pair<int, int> p = {1, 2};
```

Use Case: Useful to return or store two related values.

---

### 🔹 `vector`

- Dynamic array with contiguous memory.

```cpp
vector<int> v = {1, 2, 3};
```

**Operations:**

- `push_back(x)` – O(1)
- `pop_back()` – O(1)
- `insert(pos, val)` – O(n)
- `erase(pos)` – O(n)

**Use Case:** Store dynamic lists when frequent access and end insertions are needed.
**Properties:** Random access allowed; fast at end insert/delete.

---

### 🔹 `list`

- Doubly linked list.

```cpp
list<int> l = {1, 2, 3};
```

**Operations:**

- `push_front`, `push_back` – O(1)
- `erase(iterator)` – O(1)

**Use Case:** Frequent insertions/deletions from middle/front.
**Properties:** No random access.

---

### 🔹 `stack`

- LIFO (Last In First Out)

```cpp
stack<int> s;
s.push(10);
```

**Operations:** `push`, `pop`, `top` – O(1)
**Use Case:** Backtracking, undo operations, expression evaluation.

---

### 🔹 `queue`

- FIFO (First In First Out)

```cpp
queue<int> q;
q.push(1);
```

**Operations:** `push`, `pop`, `front` – O(1)
**Use Case:** BFS, order of processing.

---

### 🔹 `deque`

- Double-ended queue

```cpp
deque<int> dq;
dq.push_front(10);
dq.push_back(20);
```

**Operations:** Insert/delete at both ends – O(1)
**Use Case:** Sliding window problems.

---

### 🔹 `priority_queue`

- Max heap by default

```cpp
priority_queue<int> pq;
pq.push(10);
```

**Operations:**

- `push` – O(log n)
- `top()` – O(1)
- `pop()` – O(log n)
  **Use Case:** Top-k problems, Dijkstra’s algorithm.

---

### 🔹 `set`

- Sorted and unique elements

```cpp
set<int> s;
s.insert(10);
```

**Operations:** Insert, erase, find – O(log n)
**Use Case:** Unique sorted collection
**Properties:** Red-black tree internally.

---

### 🔹 `unordered_set`

- Unique but not sorted

```cpp
unordered_set<int> us;
```

**Operations:** Insert, erase, find – O(1) average
**Use Case:** Fast presence check
**Properties:** Hash table internally.

---

### 🔹 `multiset`

- Allows duplicate sorted elements

```cpp
multiset<int> ms;
ms.insert(10);
```

**Use Case:** Counting frequency where duplicates matter.

---

### 🔹 `map`

- Key-value pairs sorted by key

```cpp
map<int, string> m;
m[1] = "one";
```

**Operations:** `insert`, `erase`, `find` – O(log n)
**Use Case:** Dictionary with key ordering
**Properties:** Red-black tree.

---

### 🔹 `unordered_map`

- Key-value pairs, no sorting

```cpp
unordered_map<int, string> um;
```

**Operations:** Avg O(1) for insert, find
**Use Case:** Fast key lookup
**Properties:** Hash table.

---

### 🔹 `multimap`

- Allows duplicate keys

```cpp
multimap<int, string> mm;
```

---

## ✂️ How `erase()` Works

```cpp
v.erase(it); // erase element at iterator
s.erase(10); // erase value
m.erase(key); // erase by key
```

Also supports:

```cpp
v.erase(startIt, endIt); // erase range
```

---

## 🔁 Iterators

```cpp
vector<int>::iterator it = v.begin();
auto it = v.begin();
```

### Common Functions:

- `begin()` → First element
- `end()` → Past-the-last
- `rbegin()` → Reverse begin
- `rend()` → Reverse end

### Example:

```cpp
for(auto it = v.begin(); it != v.end(); ++it)
    cout << *it << " ";
```

---

## ⚙️ Algorithms

### Common Algorithms from `<algorithm>`:

```cpp
sort(v.begin(), v.end());         // O(n log n)
reverse(v.begin(), v.end());      // O(n)
count(v.begin(), v.end(), x);     // O(n)
find(v.begin(), v.end(), x);      // O(n)
binary_search(v.begin(), v.end(), x); // O(log n)
lower_bound(v.begin(), v.end(), x);   // O(log n)
upper_bound(v.begin(), v.end(), x);   // O(log n)
```

---

## 🔍 Comparators

### Custom sort:

```cpp
bool comp(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second; // sort by second element
}

sort(v.begin(), v.end(), comp);
```

### Custom priority queue:

```cpp
priority_queue<int, vector<int>, greater<int>> minHeap;
```

---

## 📊 Container Summary Table

| Container      | Use Case            | Insert   | Access   | Erase    | Search   |
| -------------- | ------------------- | -------- | -------- | -------- | -------- |
| vector         | Dynamic array       | O(1)\*   | O(1)     | O(n)     | O(n)     |
| list           | Frequent middle ops | O(1)     | O(n)     | O(1)     | O(n)     |
| deque          | Both-end ops        | O(1)     | O(1)     | O(1)     | O(n)     |
| stack          | LIFO                | O(1)     | O(1)     | O(1)     | -        |
| queue          | FIFO                | O(1)     | O(1)     | O(1)     | -        |
| priority_queue | Top-k, Max/Min Heap | O(log n) | O(1)     | O(log n) | -        |
| set            | Unique sorted       | O(log n) | -        | O(log n) | O(log n) |
| unordered_set  | Unique fast         | O(1)     | -        | O(1)     | O(1)     |
| map            | Key-value, ordered  | O(log n) | O(log n) | O(log n) | O(log n) |
| unordered_map  | Key-value, fast     | O(1)     | O(1)     | O(1)     | O(1)     |

---

## ⚡ Algorithms Summary Table

| Algorithm         | Use Case              | Complexity |
| ----------------- | --------------------- | ---------- |
| `sort()`          | Sorting container     | O(n log n) |
| `reverse()`       | Reverse container     | O(n)       |
| `count()`         | Count occurrences     | O(n)       |
| `find()`          | Find value            | O(n)       |
| `binary_search()` | Search in sorted data | O(log n)   |
| `lower_bound()`   | ≥ value (sorted only) | O(log n)   |
| `upper_bound()`   | > value (sorted only) | O(log n)   |

---

## 🧠 Final Thoughts

- STL is a **must-know** for any serious C++ programmer.
- It drastically cuts down implementation time.
- Master containers, algorithms, iterators, and custom comparators.
- Use `auto` to write cleaner iterator-based code.
- Practice frequently used patterns: sliding window, hash map, heaps, etc.

---

✅ **Must-Practice Problems:**

- Two Sum (unordered_map)
- Kth Largest Element (priority_queue)
- Remove Duplicates (set)
- Frequency Counter (map)
- Next Greater Element (stack)
