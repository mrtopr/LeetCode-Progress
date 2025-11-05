# 20. Valid Parentheses

**Difficulty:** Easy
**Acceptance Rate:** 4461.3%

**Topics:** String, Stack

[View on LeetCode](https://leetcode.com/problems/valid-parentheses/)

## Description

Given a string s containing just the characters &#39;(&#39;, &#39;)&#39;, &#39;{&#39;, &#39;}&#39;, &#39;[&#39; and &#39;]&#39;, determine if the input string is valid.

An input string is valid if:

	Open brackets must be closed by the same type of brackets.
	Open brackets must be closed in the correct order.
	Every close bracket has a corresponding open bracket of the same type.

 

Example 1:

Input: s = &quot;()&quot;

Output: true

Example 2:

Input: s = &quot;()[]{}&quot;

Output: true

Example 3:

Input: s = &quot;(]&quot;

Output: false

Example 4:

Input: s = &quot;([])&quot;

Output: true

Example 5:

Input: s = &quot;([)]&quot;

Output: false

 

Constraints:

	1 <= s.length <= 104
	s consists of parentheses only &#39;()[]{}&#39;.

## Hints

1. Use a stack of characters.
2. When you encounter an opening bracket, push it to the top of the stack.
3. When you encounter a closing bracket, check if the top of the stack was the opening for it. If yes, pop it from the stack. Otherwise, return false.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 8.6 MB | 2025-06-16 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
