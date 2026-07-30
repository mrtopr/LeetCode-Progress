# 1212. Sequential Digits

**Difficulty:** Medium
**Acceptance Rate:** 6862.2%

**Topics:** Enumeration

[View on LeetCode](https://leetcode.com/problems/sequential-digits/)

## Description

An integer has sequential digits if and only if each digit in the number is one more than the previous digit.

Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.

 

Example 1:

Input: low = 100, high = 300
Output: [123,234]
Example 2:

Input: low = 1000, high = 13000
Output: [1234,2345,3456,4567,5678,6789,12345]

 

Constraints:

	10 <= low <= high <= 10^9

## Hints

1. Generate all numbers with sequential digits and check if they are in the given range.
2. Fix the starting digit then do a recursion that tries to append all valid digits.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 8.4 MB | 2026-07-13 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
