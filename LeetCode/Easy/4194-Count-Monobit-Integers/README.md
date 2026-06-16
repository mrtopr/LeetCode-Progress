# 4194. Count Monobit Integers

**Difficulty:** Easy
**Acceptance Rate:** 6666.7%

**Topics:** Bit Manipulation, Enumeration

[View on LeetCode](https://leetcode.com/problems/count-monobit-integers/)

## Description

You are given an integer n.

An integer is called Monobit if all bits in its binary representation are the same.

Return the count of Monobit integers in the range [0, n] (inclusive).

 

Example 1:

Input: n = 1

Output: 2

Explanation:

	The integers in the range [0, 1] have binary representations &quot;0&quot; and &quot;1&quot;.
	Each representation consists of identical bits. Thus, the answer is 2.

Example 2:

Input: n = 4

Output: 3

Explanation:

	The integers in the range [0, 4] include binaries &quot;0&quot;, &quot;1&quot;, &quot;10&quot;, &quot;11&quot;, and &quot;100&quot;.
	Only 0, 1 and 3 satisfy the Monobit condition. Thus, the answer is 3.

 

Constraints:

	0 <= n <= 1000

## Hints

1. Go through all the integers in the range [0, n] and count the monobit integers

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 8.6 MB | 2026-02-01 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
