# 3. Longest Substring Without Repeating Characters

**Difficulty:** Medium
**Acceptance Rate:** 3960.8%

**Topics:** Hash Table, String, Sliding Window

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

## Description

Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = &quot;abcabcbb&quot;
Output: 3
Explanation: The answer is &quot;abc&quot;, with the length of 3. Note that &quot;bca&quot; and &quot;cab&quot; are also correct answers.

Example 2:

Input: s = &quot;bbbbb&quot;
Output: 1
Explanation: The answer is &quot;b&quot;, with the length of 1.

Example 3:

Input: s = &quot;pwwkew&quot;
Output: 3
Explanation: The answer is &quot;wke&quot;, with the length of 3.
Notice that the answer must be a substring, &quot;pwke&quot; is a subsequence and not a substring.

 

Constraints:

	0 <= s.length <= 105
	s consists of English letters, digits, symbols and spaces.

## Hints

1. There are less than 100 unique characters. We can check all substrings with length at most 100 for example. This is a good enough approximation.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 19 ms | 11.5 MB | 2026-01-02 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
