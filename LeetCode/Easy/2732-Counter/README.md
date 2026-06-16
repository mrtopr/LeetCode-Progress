# 2732. Counter

**Difficulty:** Easy
**Acceptance Rate:** 8242.9%

**Topics:** —

[View on LeetCode](https://leetcode.com/problems/counter/)

## Description

Given an integer n, return a counter function. This counter function initially returns n and then returns 1 more than the previous value every subsequent time it is called (n, n + 1, n + 2, etc).

 

Example 1:

Input: 
n = 10 
[&quot;call&quot;,&quot;call&quot;,&quot;call&quot;]
Output: [10,11,12]
Explanation: 
counter() = 10 // The first time counter() is called, it returns n.
counter() = 11 // Returns 1 more than the previous time.
counter() = 12 // Returns 1 more than the previous time.

Example 2:

Input: 
n = -2
[&quot;call&quot;,&quot;call&quot;,&quot;call&quot;,&quot;call&quot;,&quot;call&quot;]
Output: [-2,-1,0,1,2]
Explanation: counter() initially returns -2. Then increases after each sebsequent call.

 

Constraints:

	-1000 <= n <= 1000
	0 <= calls.length <= 1000
	calls[i] === &quot;call&quot;

## Hints

1. In JavaScript, a function can return a closure. A closure is defined as a function and the variables declared around it (it's lexical environment).
2. A count variable can be initialized in the outer function and mutated in the inner function.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| javascript | 28 ms | 53.7 MB | 2026-06-06 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
