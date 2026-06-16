# 4137. Number of Prefix Connected Groups

**Difficulty:** Medium
**Acceptance Rate:** 6073.3%

**Topics:** Array, Hash Table, String, Counting

[View on LeetCode](https://leetcode.com/problems/number-of-prefix-connected-groups/)

## Description

You are given an array of strings words and an integer k.

Two words a and b at distinct indices are prefix-connected if a[0..k-1] == b[0..k-1].

A connected group is a set of words such that each pair of words is prefix-connected.

Return the number of connected groups that contain at least two words, formed from the given words.

Note:

	Words with length less than k cannot join any group and are ignored.
	Duplicate strings are treated as separate words.

 

Example 1:

Input: words = [&quot;apple&quot;,&quot;apply&quot;,&quot;banana&quot;,&quot;bandit&quot;], k = 2

Output: 2

Explanation:

Words sharing the same first k = 2 letters are grouped together:

	words[0] = &quot;apple&quot; and words[1] = &quot;apply&quot; share prefix &quot;ap&quot;.
	words[2] = &quot;banana&quot; and words[3] = &quot;bandit&quot; share prefix &quot;ba&quot;.

Thus, there are 2 connected groups, each containing at least two words.

Example 2:

Input: words = [&quot;car&quot;,&quot;cat&quot;,&quot;cartoon&quot;], k = 3

Output: 1

Explanation:

Words are evaluated for a prefix of length k = 3:

	words[0] = &quot;car&quot; and words[2] = &quot;cartoon&quot; share prefix &quot;car&quot;.
	words[1] = &quot;cat&quot; does not share a 3-length prefix with any other word.

Thus, there is 1 connected group.

Example 3:

Input: words = [&quot;bat&quot;,&quot;dog&quot;,&quot;dog&quot;,&quot;doggy&quot;,&quot;bat&quot;], k = 3

Output: 2

Explanation:

Words are evaluated for a prefix of length k = 3:

	words[0] = &quot;bat&quot; and words[4] = &quot;bat&quot; form a group.
	words[1] = &quot;dog&quot;, words[2] = &quot;dog&quot; and words[3] = &quot;doggy&quot; share prefix &quot;dog&quot;.

Thus, there are 2 connected groups, each containing at least two words.

 

Constraints:

	1 <= words.length <= 5000
	1 <= words[i].length <= 100
	1 <= k <= 100
	All strings in words consist of lowercase English letters.

## Hints

1. Filter out words with length k; they can never participate in any valid group.
2. Two words are connected exactly when their first k characters are identical; this reduces the problem to grouping by prefix.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 83 ms | 137.5 MB | 2026-02-14 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
