# 🧠 Problem Solving Patterns in Programming (with Roadmap)

This guide outlines key problem-solving patterns used in coding interviews and algorithm challenges, explained in a simple way with a learning roadmap.

---

## 📘 Why Learn Patterns?

* Most problems follow common patterns.
* Recognizing the pattern helps you solve problems faster and more reliably.
* Once you learn the core logic of each pattern, many variations become easy.

---

## 🧩 Core Problem Solving Patterns

### 1. 🪟 Sliding Window

**Use when:** You're asked to find subarrays/substrings of fixed or dynamic size.

**Examples:**

* Max sum of subarray of size k
* Longest substring without repeating characters

**Key idea:** Use two pointers to create a "window" that expands/contracts as needed.

---

### 2. 🧮 Two Pointers

**Use when:** Working with sorted arrays or need to compare elements from both ends.

**Examples:**

* Pair with target sum
* Reverse an array in-place

**Key idea:** Use one pointer at the start and one at the end.

---

### 3. 🔁 Fast and Slow Pointers (Floyd's Cycle)

**Use when:** Need to detect cycles or find middle of a list.

**Examples:**

* Detect cycle in linked list
* Find middle node

**Key idea:** One pointer moves 2 steps, the other 1 step.

---

### 4. 📦 Hashing / Hash Maps

**Use when:** You need fast lookup, counting, or grouping.

**Examples:**

* First non-repeating character
* Group anagrams

**Key idea:** Use `unordered_map` or `set` to store counts or indexes.

---

### 5. 🔀 Two Heaps

**Use when:** You're asked to get medians or maintain a balance.

**Examples:**

* Find median in data stream

**Key idea:** Use a max heap and min heap to maintain lower and upper halves.

---

### 6. 🧠 Binary Search

**Use when:** You can apply divide-and-conquer or work with sorted data.

**Examples:**

* Find element in sorted array
* Search in rotated array

**Key idea:** Keep halving the search space.

---

### 7. 🧵 Merge Intervals

**Use when:** You're given ranges and need to merge or optimize them.

**Examples:**

* Merge overlapping intervals
* Insert interval

**Key idea:** Sort intervals and merge based on overlap.

---

### 8. 🔢 Subsets / Combinations / Backtracking

**Use when:** Generating all combinations or permutations.

**Examples:**

* Subsets
* N-Queens
* Sudoku solver

**Key idea:** Use recursion to explore all possibilities.

---

### 9. 🎯 Dynamic Programming (DP)

**Use when:** You see overlapping subproblems or choices.

**Examples:**

* Fibonacci numbers
* 0/1 Knapsack
* Longest common subsequence

**Key idea:** Store results of subproblems (memoization or tabulation).

---

### 10. 📈 Greedy

**Use when:** You can make a local optimal choice at each step.

**Examples:**

* Activity selection
* Fractional knapsack
* Minimum number of coins

**Key idea:** Pick best option now and hope it leads to global optimum.

---

## 🗺️ Roadmap to Learn Patterns

### Phase 1: Basics

* Arrays, strings, loops
* Practice simple problems

### Phase 2: Core Patterns

* Sliding Window
* Two Pointers
* Hash Maps

### Phase 3: Intermediate

* Fast/Slow pointers
* Merge Intervals
* Subsets/Backtracking

### Phase 4: Advanced

* Dynamic Programming (start with 1D DP)
* Binary Search Variants
* Greedy

### Phase 5: Mastery

* Practice mixed pattern problems
* Timed contests or mock interviews

---

## 📚 Resources

* LeetCode, HackerRank, Codeforces
* Books: "Grokking the Coding Interview", "Cracking the Coding Interview"
* YouTube Channels: NeetCode, WilliamFiset, Abdul Bari

---

Happy coding! Keep your fundamentals strong and recognize patterns like a master.
