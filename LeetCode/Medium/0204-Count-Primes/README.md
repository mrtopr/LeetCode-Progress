# 204. Count Primes

**Difficulty:** Medium
**Acceptance Rate:** 3631.5%

**Topics:** Array, Math, Enumeration, Number Theory

[View on LeetCode](https://leetcode.com/problems/count-primes/)

## Description

Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:

Input: n = 0
Output: 0

Example 3:

Input: n = 1
Output: 0

 

Constraints:

	0 <= n <= 5 * 106

## Hints

1. Checking all the integers in the range [1, n - 1] is not efficient. Think about a better approach.
2. Since most of the numbers are not primes, we need a fast approach to exclude the non-prime integers.
3. Use Sieve of Eratosthenes.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 713 ms | 12.8 MB | 2025-03-18 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
