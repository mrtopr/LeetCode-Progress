# 3812. Smallest Palindromic Rearrangement I

**Difficulty:** Medium
**Acceptance Rate:** 7448.4%

**Topics:** String, Sorting, Counting Sort

[View on LeetCode](https://leetcode.com/problems/smallest-palindromic-rearrangement-i/)

## Description

You are given a palindromic string s.

Return the lexicographically smallest palindromic permutation of s.

 

Example 1:

Input: s = &quot;z&quot;

Output: &quot;z&quot;

Explanation:

A string of only one character is already the lexicographically smallest palindrome.

Example 2:

Input: s = &quot;babab&quot;

Output: &quot;abbba&quot;

Explanation:

Rearranging &quot;babab&quot; &rarr; &quot;abbba&quot; gives the smallest lexicographic palindrome.

Example 3:

Input: s = &quot;daccad&quot;

Output: &quot;acddca&quot;

Explanation:

Rearranging &quot;daccad&quot; &rarr; &quot;acddca&quot; gives the smallest lexicographic palindrome.

 

Constraints:

	1 <= s.length <= 105
	s consists of lowercase English letters.
	s is guaranteed to be palindromic.

## Hints

1. Consider a palindrome as composed of two mirror-image halves.
2. Construct one half (using s), and then the other half is its reverse to obtain the lexicographically smallest permutation.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 88 ms | 54.1 MB | 2026-07-30 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
