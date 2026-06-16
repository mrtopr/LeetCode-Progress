# 567. Permutation in String

**Difficulty:** Medium
**Acceptance Rate:** 4938.3%

**Topics:** Hash Table, Two Pointers, String, Sliding Window

[View on LeetCode](https://leetcode.com/problems/permutation-in-string/)

## Description

Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1&#39;s permutations is the substring of s2.

 

Example 1:

Input: s1 = &quot;ab&quot;, s2 = &quot;eidbaooo&quot;
Output: true
Explanation: s2 contains one permutation of s1 (&quot;ba&quot;).

Example 2:

Input: s1 = &quot;ab&quot;, s2 = &quot;eidboaoo&quot;
Output: false

 

Constraints:

	1 <= s1.length, s2.length <= 104
	s1 and s2 consist of lowercase English letters.

## Hints

1. Obviously, brute force will result in TLE. Think of something else.
2. How will you check whether one string is a permutation of another string?
3. One way is to sort the string and then compare. But, Is there a better way?
4. If one string is a permutation of another string then they must have one common metric. What is that?
5. Both strings must have same character frequencies, if  one is permutation of another. Which data structure should be used to store frequencies?
6. What about hash table?  An array of size 26?

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 26 ms | 32.5 MB | 2026-01-30 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
