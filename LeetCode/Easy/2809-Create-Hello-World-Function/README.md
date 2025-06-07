# 2809. Create Hello World Function

**Difficulty:** Easy
**Acceptance Rate:** 8191.4%

**Topics:** —

[View on LeetCode](https://leetcode.com/problems/create-hello-world-function/)

## Description

Write a function createHelloWorld. It should return a new function that always returns &quot;Hello World&quot;.
 

Example 1:

Input: args = []
Output: &quot;Hello World&quot;
Explanation:
const f = createHelloWorld();
f(); // &quot;Hello World&quot;

The function returned by createHelloWorld should always return &quot;Hello World&quot;.

Example 2:

Input: args = [{},null,42]
Output: &quot;Hello World&quot;
Explanation:
const f = createHelloWorld();
f({}, null, 42); // &quot;Hello World&quot;

Any arguments could be passed to the function but it should still always return &quot;Hello World&quot;.

 

Constraints:

	0 <= args.length <= 10


## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| javascript | 37 ms | 52.8 MB | 2025-04-21 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
