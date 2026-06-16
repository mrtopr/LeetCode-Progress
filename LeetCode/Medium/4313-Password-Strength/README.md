# 4313. Password Strength

**Difficulty:** Medium
**Acceptance Rate:** 7525.3%

**Topics:** Hash Table, String

[View on LeetCode](https://leetcode.com/problems/password-strength/)

## Description

You are given a string password.

The strength of the password is calculated based on the following rules:

	1 point for each distinct lowercase letter (&#39;a&#39; to &#39;z&#39;).
	2 points for each distinct uppercase letter (&#39;A&#39; to &#39;Z&#39;).
	3 points for each distinct digit (&#39;0&#39; to &#39;9&#39;).
	5 points for each distinct special character from the set &quot;!@#$&quot;.

Each character contributes at most once, even if it appears multiple times.

Return an integer denoting the strength of the password.

 

Example 1:

Input: password = &quot;aA1!&quot;

Output: 11

Explanation:

	The distinct characters are &#39;a&#39;, &#39;A&#39;, &#39;1&#39; and &#39;!&#39;.
	Thus, the strength = 1 + 2 + 3 + 5 = 11.

Example 2:

Input: password = &quot;bbB11#&quot;

Output: 11

Explanation:

	The distinct characters are &#39;b&#39;, &#39;B&#39;, &#39;1&#39; and &#39;#&#39;.
	Thus, the strength = 1 + 2 + 3 + 5 = 11.​​​​​​​

 

Constraints:

	1 <= password.length <= 105
	password consists of lowercase and uppercase English letters, digits, and special characters from &quot;!@#$&quot;.

## Hints

1. Remove duplicates from the string.
2. Now you can sum up the corresponding points of each character.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 23 ms | 17.6 MB | 2026-05-24 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
