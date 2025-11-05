# 943. Sum of Subarray Minimums

**Difficulty:** Medium
**Acceptance Rate:** 3889.8%

**Topics:** Array, Dynamic Programming, Stack, Monotonic Stack

[View on LeetCode](https://leetcode.com/problems/sum-of-subarray-minimums/)

## Description

Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.

 

Example 1:

Input: arr = [3,1,2,4]
Output: 17
Explanation: 
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.

Example 2:

Input: arr = [11,81,94,43,3]
Output: 444

 

Constraints:

	1 <= arr.length <= 3 * 104
	1 <= arr[i] <= 3 * 104


## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 11 ms | 43.5 MB | 2025-06-18 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
