# 69. Sqrt(x)

**Difficulty:** Easy
**Acceptance Rate:** 4218.6%

**Topics:** Math, Binary Search

[View on LeetCode](https://leetcode.com/problems/sqrtx/)

## Description

Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

	For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

 

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

 

Constraints:

	0 <= x <= 231 - 1

## Hints

1. Try exploring all integers. (Credits: @annujoshi)
2. Use the sorted property of integers to reduced the search space. (Credits: @annujoshi)

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 2 ms | 8.6 MB | 2026-01-24 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
