<h2><a href="https://codeforces.com/contest/1106/problem/C" target="_blank" rel="noopener noreferrer">1106C — Lunar New Year and Number Division</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1106C](https://codeforces.com/contest/1106/problem/C) |

## Topics
`greedy` `implementation` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Lunar New Year and Number Division</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">Lunar New Year is approaching, and Bob is struggling with his homework – a number division problem.</span></p><p>There are $$$n$$$ positive integers $$$a_1, a_2, \ldots, a_n$$$ on Bob's homework paper, where $$$n$$$ is always an <span class="tex-font-style-bf">even</span> number. Bob is asked to divide those numbers into groups, where each group must contain at least $$$2$$$ numbers. Suppose the numbers are divided into $$$m$$$ groups, and the sum of the numbers in the $$$j$$$-th group is $$$s_j$$$. Bob's aim is to minimize the sum of the square of $$$s_j$$$, that is $$$$$$\sum_{j = 1}^{m} s_j^2.$$$$$$</p><p>Bob is puzzled by this hard problem. Could you please help him solve it?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an <span class="tex-font-style-bf">even</span> integer $$$n$$$ ($$$2 \leq n \leq 3 \cdot 10^5$$$), denoting that there are $$$n$$$ integers on Bob's homework paper.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^4$$$), describing the numbers you need to deal with.</p></div><div class="output-specification"><div class="section-title">Output</div><p>A single line containing one integer, denoting the minimum of the sum of the square of $$$s_j$$$, which is $$$$$$\sum_{i = j}^{m} s_j^2,$$$$$$ where $$$m$$$ is the number of groups.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031629573512088915" id="id008602977168551746" class="input-output-copier">Copy</div></div><pre id="id0031629573512088915">4
8 5 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006023295931278261" id="id00676660995429769" class="input-output-copier">Copy</div></div><pre id="id006023295931278261">164
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004807770223732446" id="id006442449261773686" class="input-output-copier">Copy</div></div><pre id="id004807770223732446">6
1 1 1 2 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0015500601261304625" id="id009354357531610566" class="input-output-copier">Copy</div></div><pre id="id0015500601261304625">27
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, one of the optimal solutions is to divide those $$$4$$$ numbers into $$$2$$$ groups $$$\{2, 8\}, \{5, 3\}$$$. Thus the answer is $$$(2 + 8)^2 + (5 + 3)^2 = 164$$$.</p><p>In the second sample, one of the optimal solutions is to divide those $$$6$$$ numbers into $$$3$$$ groups $$$\{1, 2\}, \{1, 2\}, \{1, 2\}$$$. Thus the answer is $$$(1 + 2)^2 + (1 + 2)^2 + (1 + 2)^2 = 27$$$.</p></div>