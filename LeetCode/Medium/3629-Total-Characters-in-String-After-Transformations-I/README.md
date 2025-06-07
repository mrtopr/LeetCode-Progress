# 3629. Total Characters in String After Transformations I

**Difficulty:** Medium
**Acceptance Rate:** 4564.6%

**Topics:** Hash Table, Math, String, Dynamic Programming, Counting

[View on LeetCode](https://leetcode.com/problems/total-characters-in-string-after-transformations-i/)

## Description

You are given a string s and an integer t, representing the number of transformations to perform. In one transformation, every character in s is replaced according to the following rules:

	If the character is &#39;z&#39;, replace it with the string &quot;ab&quot;.
	Otherwise, replace it with the next character in the alphabet. For example, &#39;a&#39; is replaced with &#39;b&#39;, &#39;b&#39; is replaced with &#39;c&#39;, and so on.

Return the length of the resulting string after exactly t transformations.

Since the answer may be very large, return it modulo 109 + 7.

 

Example 1:

Input: s = &quot;abcyy&quot;, t = 2

Output: 7

Explanation:

	First Transformation (t = 1):

	
		&#39;a&#39; becomes &#39;b&#39;
		&#39;b&#39; becomes &#39;c&#39;
		&#39;c&#39; becomes &#39;d&#39;
		&#39;y&#39; becomes &#39;z&#39;
		&#39;y&#39; becomes &#39;z&#39;
		String after the first transformation: &quot;bcdzz&quot;
	
	
	Second Transformation (t = 2):
	
		&#39;b&#39; becomes &#39;c&#39;
		&#39;c&#39; becomes &#39;d&#39;
		&#39;d&#39; becomes &#39;e&#39;
		&#39;z&#39; becomes &quot;ab&quot;
		&#39;z&#39; becomes &quot;ab&quot;
		String after the second transformation: &quot;cdeabab&quot;
	
	
	Final Length of the string: The string is &quot;cdeabab&quot;, which has 7 characters.

Example 2:

Input: s = &quot;azbk&quot;, t = 1

Output: 5

Explanation:

	First Transformation (t = 1):

	
		&#39;a&#39; becomes &#39;b&#39;
		&#39;z&#39; becomes &quot;ab&quot;
		&#39;b&#39; becomes &#39;c&#39;
		&#39;k&#39; becomes &#39;l&#39;
		String after the first transformation: &quot;babcl&quot;
	
	
	Final Length of the string: The string is &quot;babcl&quot;, which has 5 characters.

 

Constraints:

	1 <= s.length <= 105
	s consists only of lowercase English letters.
	1 <= t <= 105

## Hints

1. Maintain the frequency of each character.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 523 ms | 639.8 MB | 2025-06-07 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
