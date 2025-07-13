# 📘 STL in C++ – Ultimate DSA Notes & Cheat Sheet

## 🚀 What is STL?

**STL (Standard Template Library)** is a powerful set of C++ template classes to provide **common data structures** and **algorithms** like vectors, stacks, queues, sets, maps, and sorting/searching.

> ✅ STL helps write **clean**, **optimized**, and **faster** code without reinventing the wheel.

---

## ❓ Why Use STL?

- 🔁 **Code Reusability** – No need to write data structures from scratch.
- 🛡️ **Time-tested & Optimized** – Backed by years of development.
- 🚀 **Speeds up coding** – Crucial in **DSA, CP, and interviews**.
- ⏱️ **Built-in time complexities** help write efficient code fast.

---

## 🧱 STL Core Components

| Component      | What it is                    | Examples                        |
| -------------- | ----------------------------- | ------------------------------- |
| **Containers** | Data structures to store data | `vector`, `set`, `map`, `stack` |
| **Algorithms** | Ready-made functions          | `sort`, `reverse`, `count`      |
| **Iterators**  | Smart pointers to containers  | `begin()`, `end()`, `auto`      |

---

## 📦 STL Containers - Classified

### 1️⃣ Sequence Containers – Linear structures

> Maintain insertion order

| Container | Description                | Use When                   |
| --------- | -------------------------- | -------------------------- |
| `vector`  | Dynamic array (contiguous) | Most commonly used         |
| `list`    | Doubly linked list         | Frequent insert/delete mid |
| `deque`   | Double-ended queue         | Insert/delete both ends    |
| `array`   | Static array               | Fixed-size, C++11+         |

### 2️⃣ Associative Containers – Fast lookup

> Automatically **sorted**

| Container  | Description            | Internals      |
| ---------- | ---------------------- | -------------- |
| `set`      | Unique sorted elements | Red-Black Tree |
| `multiset` | Duplicates allowed     | Red-Black Tree |
| `map`      | Key-value, unique keys | Red-Black Tree |
| `multimap` | Key-value, duplicates  | Red-Black Tree |

### 3️⃣ Unordered Containers – Hash-based (faster)

> Elements are not sorted, but offer **O(1) average access**

| Container            | Description        |
| -------------------- | ------------------ |
| `unordered_set`      | Unique keys        |
| `unordered_map`      | Key-value pairs    |
| `unordered_multiset` | Duplicates allowed |
| `unordered_multimap` | Duplicates allowed |

### 4️⃣ Container Adaptors – Built over other containers

| Container        | Built On | Use Case        |
| ---------------- | -------- | --------------- |
| `stack`          | `deque`  | LIFO operations |
| `queue`          | `deque`  | FIFO operations |
| `priority_queue` | `vector` | Max/Min Heap    |

---

## 🧮 STL Time Complexity Cheat Sheet

| Operation           | `vector`   | `set` / `map` | `unordered_map` | `priority_queue` |
| ------------------- | ---------- | ------------- | --------------- | ---------------- |
| Insert              | O(1)\*     | O(log n)      | O(1) avg        | O(log n)         |
| Access by Index     | O(1)       | -             | -               | -                |
| Search              | O(n)       | O(log n)      | O(1) avg        | -                |
| Erase (by iterator) | O(n)       | O(log n)      | O(1) avg        | O(log n)         |
| Sorting             | O(n log n) | -             | -               | -                |

\*Amortized for `vector` insert at end.

---

## 🔁 Iterators in STL

```cpp
vector<int>::iterator it;
auto it = v.begin(); // modern C++
```

| Function   | Purpose               |
| ---------- | --------------------- |
| `begin()`  | Points to 1st element |
| `end()`    | Past-the-last element |
| `rbegin()` | Reverse begin         |
| `rend()`   | Reverse end           |

---

## ⚙️ Common STL Algorithms (Header: `<algorithm>`)

| Function                   | Description                      |
| -------------------------- | -------------------------------- |
| `sort(v.begin(), v.end())` | Sort in ascending                |
| `reverse(...)`             | Reverse a container              |
| `count(...)`               | Count occurrences                |
| `find(...)`                | Linear search (returns iterator) |
| `binary_search(...)`       | True/False if found              |
| `lower_bound(...)`         | First not less than val          |
| `upper_bound(...)`         | First greater than val           |
| `max_element(...)`         | Iterator to max value            |
| `min_element(...)`         | Iterator to min value            |

---

## 🧠 Interview-Focused Container Operations Summary

### `vector<int> v`

```cpp
v.push_back(10);    // O(1)
v.pop_back();       // O(1)
v.size();           // O(1)
v.clear();          // O(n)
```

### `set<int> s`

```cpp
s.insert(5);        // O(log n)
s.count(5);         // O(log n)
s.erase(5);         // O(log n)
```

### `unordered_map<int, string> m`

```cpp
m[1] = "One";       // O(1)
m.find(1);          // O(1)
m.erase(1);         // O(1)
```

### `priority_queue<int> pq`

```cpp
pq.push(5);         // O(log n)
pq.top();           // O(1)
pq.pop();           // O(log n)
```

---

## 💡 Bonus: STL Pro Tips for Interviews

- ✅ Always use `auto` with iterators for simplicity
- ✅ Use `emplace_back()` over `push_back()` for speed in objects
- ✅ Prefer `unordered_map` over `map` unless you need sorting
- ✅ Never iterate unordered containers with assumptions on order
- ✅ Always write custom comparator with `priority_queue` when needed

---

## 🧪 Practice This To Master STL

| Task                   | STL Concepts            |
| ---------------------- | ----------------------- |
| Sort an array          | `sort()`                |
| Find 2-sum             | `unordered_map`         |
| K-largest elements     | `priority_queue`        |
| Frequency map          | `map` / `unordered_map` |
| Unique sorted elements | `set`                   |
| Sliding window         | `deque`                 |
