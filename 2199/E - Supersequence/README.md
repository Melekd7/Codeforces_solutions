<h2><a href="https://codeforces.com/contest/2199/problem/E" target="_blank" rel="noopener noreferrer">2199E — Supersequence</a></h2>

| | |
|---|---|
| **Difficulty** | 2100 |
| **Language** | Kotlin 1.7 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2199E](https://codeforces.com/contest/2199/problem/E) |

## Topics
`*special` `binary search` `greedy`

---

## Problem Statement

<div class="header"><div class="title">E. Supersequence</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>An array $$$a$$$ is called a subsequence of an array $$$b$$$ if some elements can be removed from array $$$b$$$ (possibly all, possibly none) to obtain the array $$$a$$$.</p><p>You are given an array $$$a = [a_1, a_2, \dots, a_n]$$$. We call an array $$$b = [b_1, b_2, \dots, b_m]$$$ beautiful if:</p><ul> <li> $$$a$$$ is a subsequence of $$$b$$$; </li><li> for each $$$i$$$ from $$$1$$$ to $$$m-1$$$, the elements $$$b_i$$$ and $$$b_{i+1}$$$ differ by exactly $$$1$$$ (that is, $$$|b_i - b_{i+1}| = 1$$$); </li><li> among all arrays that satisfy these two requirements, the length of $$$b$$$ is minimum. </li></ul><p>You have to process $$$q$$$ queries. In the $$$i$$$-th query, a single integer $$$x_i$$$ is given. Your task is as follows:</p><ul> <li> if $$$x_i$$$ is greater than the minimum possible number of elements in a beautiful array, print $$$-1$$$; </li><li> otherwise, if the same number occupies position $$$x_i$$$ in all beautiful arrays, print that number; </li><li> otherwise, print $$$0$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$q$$$ ($$$1 \le n, q \le 2 \cdot 10^5$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$).</p><p>The third line contains $$$q$$$ integers $$$x_1, x_2, \dots, x_q$$$ ($$$1 \le x_i \le 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, print a single integer — the answer to it.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005178849947281304" id="id0010542160667892075" class="input-output-copier">Copy</div></div><pre id="id005178849947281304"><div class="test-example-line test-example-line-even test-example-line-0">5 16</div><div class="test-example-line test-example-line-even test-example-line-0">4 1 1 5 9</div><div class="test-example-line test-example-line-even test-example-line-0">1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002995881944083063" id="id007897987213717663" class="input-output-copier">Copy</div></div><pre id="id002995881944083063">4 3 2 1 0 1 2 3 4 5 6 7 8 9 -1 -1
</pre></div></div></div>