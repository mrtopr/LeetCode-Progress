# 3939. Process String with Special Operations II

**Difficulty:** Hard
**Acceptance Rate:** 3980.2%

**Topics:** String, Simulation

[View on LeetCode](https://leetcode.com/problems/process-string-with-special-operations-ii/)

## Description

You are given a string s consisting of lowercase English letters and the special characters: &#39;*&#39;, &#39;#&#39;, and &#39;%&#39;.

You are also given an integer k.

Build a new string result by processing s according to the following rules from left to right:

	If the letter is a lowercase English letter append it to result.
	A &#39;*&#39; removes the last character from result, if it exists.
	A &#39;#&#39; duplicates the current result and appends it to itself.
	A &#39;%&#39; reverses the current result.

Return the kth character of the final string result. If k is out of the bounds of result, return &#39;.&#39;.

 

Example 1:

Input: s = &quot;a#b%*&quot;, k = 1

Output: &quot;a&quot;

Explanation:

	
		
			i
			s[i]
			Operation
			Current result
		
	
	
		
			0
			&#39;a&#39;
			Append &#39;a&#39;
			&quot;a&quot;
		
		
			1
			&#39;#&#39;
			Duplicate result
			&quot;aa&quot;
		
		
			2
			&#39;b&#39;
			Append &#39;b&#39;
			&quot;aab&quot;
		
		
			3
			&#39;%&#39;
			Reverse result
			&quot;baa&quot;
		
		
			4
			&#39;*&#39;
			Remove the last character
			&quot;ba&quot;
		
	

The final result is &quot;ba&quot;. The character at index k = 1 is &#39;a&#39;.

Example 2:

Input: s = &quot;cd%#*#&quot;, k = 3

Output: &quot;d&quot;

Explanation:

	
		
			i
			s[i]
			Operation
			Current result
		
	
	
		
			0
			&#39;c&#39;
			Append &#39;c&#39;
			&quot;c&quot;
		
		
			1
			&#39;d&#39;
			Append &#39;d&#39;
			&quot;cd&quot;
		
		
			2
			&#39;%&#39;
			Reverse result
			&quot;dc&quot;
		
		
			3
			&#39;#&#39;
			Duplicate result
			&quot;dcdc&quot;
		
		
			4
			&#39;*&#39;
			Remove the last character
			&quot;dcd&quot;
		
		
			5
			&#39;#&#39;
			Duplicate result
			&quot;dcddcd&quot;
		
	

The final result is &quot;dcddcd&quot;. The character at index k = 3 is &#39;d&#39;.

Example 3:

Input: s = &quot;z*#&quot;, k = 0

Output: &quot;.&quot;

Explanation:

	
		
			i
			s[i]
			Operation
			Current result
		
	
	
		
			0
			&#39;z&#39;
			Append &#39;z&#39;
			&quot;z&quot;
		
		
			1
			&#39;*&#39;
			Remove the last character
			&quot;&quot;
		
		
			2
			&#39;#&#39;
			Duplicate the string
			&quot;&quot;
		
	

The final result is &quot;&quot;. Since index k = 0 is out of bounds, the output is &#39;.&#39;.

 

Constraints:

	1 <= s.length <= 105
	s consists of only lowercase English letters and special characters &#39;*&#39;, &#39;#&#39;, and &#39;%&#39;.
	0 <= k <= 1015
	The length of result after processing s will not exceed 1015.

## Hints

1. Track the length of the string after each operation on s.
2. Walk backwards through s, undoing each # by using modulus on the tracked lengths, and undoing each % by mirroring across the midpoint, to pinpoint the kth character.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 23 ms | 24.1 MB | 2026-06-17 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
