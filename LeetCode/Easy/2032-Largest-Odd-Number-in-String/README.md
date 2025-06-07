# 2032. Largest Odd Number in String

**Difficulty:** Easy
**Acceptance Rate:** 6786.4%

**Topics:** Math, String, Greedy

[View on LeetCode](https://leetcode.com/problems/largest-odd-number-in-string/)

## Description

You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string &quot;&quot; if no odd integer exists.

A substring is a contiguous sequence of characters within a string.

 

Example 1:

Input: num = &quot;52&quot;
Output: &quot;5&quot;
Explanation: The only non-empty substrings are &quot;5&quot;, &quot;2&quot;, and &quot;52&quot;. &quot;5&quot; is the only odd number.

Example 2:

Input: num = &quot;4206&quot;
Output: &quot;&quot;
Explanation: There are no odd numbers in &quot;4206&quot;.

Example 3:

Input: num = &quot;35427&quot;
Output: &quot;35427&quot;
Explanation: &quot;35427&quot; is already an odd number.

 

Constraints:

	1 <= num.length <= 105
	num only consists of digits and does not contain any leading zeros.

## Hints

1. In what order should you iterate through the digits?
2. If an odd number exists, where must the number start from?

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 17.8 MB | 2025-06-03 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
