# 1054. Complement of Base 10 Integer

**Difficulty:** Easy
**Acceptance Rate:** 6336.9%

**Topics:** Bit Manipulation

[View on LeetCode](https://leetcode.com/problems/complement-of-base-10-integer/)

## Description

The complement of an integer is the integer you get when you flip all the 0&#39;s to 1&#39;s and all the 1&#39;s to 0&#39;s in its binary representation.

	For example, The integer 5 is &quot;101&quot; in binary and its complement is &quot;010&quot; which is the integer 2.

Given an integer n, return its complement.

 

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is &quot;101&quot; in binary, with complement &quot;010&quot; in binary, which is 2 in base-10.

Example 2:

Input: n = 7
Output: 0
Explanation: 7 is &quot;111&quot; in binary, with complement &quot;000&quot; in binary, which is 0 in base-10.

Example 3:

Input: n = 10
Output: 5
Explanation: 10 is &quot;1010&quot; in binary, with complement &quot;0101&quot; in binary, which is 5 in base-10.

 

Constraints:

	0 <= n < 109

 

Note: This question is the same as 476: https://leetcode.com/problems/number-complement/

## Hints

1. A binary number plus its complement will equal 111....111 in binary.  Also, N = 0 is a corner case.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 8 MB | 2026-03-11 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
