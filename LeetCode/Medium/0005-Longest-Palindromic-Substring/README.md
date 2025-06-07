# 5. Longest Palindromic Substring

**Difficulty:** Medium
**Acceptance Rate:** 3834.2%

**Topics:** Two Pointers, String, Dynamic Programming

[View on LeetCode](https://leetcode.com/problems/longest-palindromic-substring/)

## Description

Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = &quot;babad&quot;
Output: &quot;bab&quot;
Explanation: &quot;aba&quot; is also a valid answer.

Example 2:

Input: s = &quot;cbbd&quot;
Output: &quot;bb&quot;

 

Constraints:

	1 <= s.length <= 1000
	s consist of only digits and English letters.

## Hints

1. How can we reuse a previously computed palindrome to compute a larger palindrome?
2. If “aba” is a palindrome, is “xabax” a palindrome? Similarly is “xabay” a palindrome?
3. Complexity based hint:
If we use brute-force and check whether for every start and end position a substring is a palindrome we have O(n^2) start - end pairs and O(n) palindromic checks. Can we reduce the time for palindromic checks to O(1) by reusing some previous computation.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 90 ms | 9.4 MB | 2025-06-07 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
