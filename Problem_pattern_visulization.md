# 📘 Problem Solving Patterns in C++

This document explains the most common problem-solving patterns used in coding interviews, with easy explanations and C++ code templates for each pattern.

---

## 1. 🪟 Sliding Window

**Use when:** Dealing with subarrays or substrings.

```cpp
int maxSumSubarray(vector<int>& arr, int k) {
    int maxSum = 0, windowSum = 0;
    for (int end = 0, start = 0; end < arr.size(); ++end) {
        windowSum += arr[end];
        if (end >= k - 1) {
            maxSum = max(maxSum, windowSum);
            windowSum -= arr[start++];
        }
    }
    return maxSum;
}
```

---

## 2. 🔁 Two Pointers

**Use when:** Need to compare or scan from both ends.

```cpp
bool hasPairWithSum(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        (sum < target) ? ++left : --right;
    }
    return false;
}
```

---

## 3. 🐢 Fast & Slow Pointers

**Use when:** Detecting cycles or finding midpoints.

```cpp
bool hasCycle(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
```

---

## 4. 🧠 Hashing

**Use when:** Fast lookup or frequency count.

```cpp
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) return true;
        seen.insert(num);
    }
    return false;
}
```

---

## 5. 📦 Merge Intervals

**Use when:** Working with interval ranges.

```cpp
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for (auto& interval : intervals) {
        if (merged.empty() || merged.back()[1] < interval[0]) {
            merged.push_back(interval);
        } else {
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    return merged;
}
```

---

## 6. 🧵 Backtracking

**Use when:** Generating all combinations or permutations.

```cpp
void generateSubsets(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
    if (index == nums.size()) {
        result.push_back(current);
        return;
    }
    generateSubsets(nums, index + 1, current, result);
    current.push_back(nums[index]);
    generateSubsets(nums, index + 1, current, result);
    current.pop_back();
}
```

---

## 7. 💡 Binary Search

**Use when:** Working with sorted arrays or to minimize/maximize.

```cpp
int binarySearch(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
```

---

## 8. 🧠 Dynamic Programming

**Use when:** Problems have overlapping subproblems.

```cpp
int fib(int n) {
    if (n <= 1) return n;
    vector<int> dp(n+1);
    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= n; ++i)
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}
```

---
