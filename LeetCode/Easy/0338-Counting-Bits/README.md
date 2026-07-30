# 338. Counting Bits

**Difficulty:** Easy
**Acceptance Rate:** 8078.8%

**Topics:** Dynamic Programming, Bit Manipulation

[View on LeetCode](https://leetcode.com/problems/counting-bits/)

## Description

Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1&#39;s in the binary representation of i.

Do not solve it with built-in functions (i.e., like __builtin_popcount in C++).
 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10

Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101

 

Constraints:

	0 <= n <= 105

 

Follow up:

	It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass?

## Hints

1. You should make use of what you have produced already.
2. Divide the numbers in ranges like [2-3], [4-7], [8-15] and so on. And try to generate new range from previous.
3. Or does the odd/even status of the number help you in calculating the number of 1s?

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 3 ms | 11.4 MB | 2026-07-30 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
