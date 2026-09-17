<h2><a href="https://codeforces.com/contest/1141/problem/C" target="_blank" rel="noopener noreferrer">1141C — Polycarp Restores Permutation</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1141C](https://codeforces.com/contest/1141/problem/C) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">C. Polycarp Restores Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>An array of integers $$$p_1, p_2, \dots, p_n$$$ is called a <span class="tex-font-style-it">permutation</span> if it contains each number from $$$1$$$ to $$$n$$$ exactly once. For example, the following arrays are permutations: $$$[3, 1, 2]$$$, $$$[1]$$$, $$$[1, 2, 3, 4, 5]$$$ and $$$[4, 3, 1, 2]$$$. The following arrays are <span class="tex-font-style-it">not</span> permutations: $$$[2]$$$, $$$[1, 1]$$$, $$$[2, 3, 4]$$$.</p><p>Polycarp invented a really cool permutation $$$p_1, p_2, \dots, p_n$$$ of length $$$n$$$. It is very disappointing, but he forgot this permutation. He only remembers the array $$$q_1, q_2, \dots, q_{n-1}$$$ of length $$$n-1$$$, where $$$q_i=p_{i+1}-p_i$$$.</p><p>Given $$$n$$$ and $$$q=q_1, q_2, \dots, q_{n-1}$$$, help Polycarp restore the invented permutation.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the integer $$$n$$$ ($$$2 \le n \le 2\cdot10^5$$$) — the length of the permutation to restore. The second line contains $$$n-1$$$ integers $$$q_1, q_2, \dots, q_{n-1}$$$ ($$$-n  \lt  q_i  \lt  n$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the integer <span class="tex-font-style-tt">-1</span> if there is no such permutation of length $$$n$$$ which corresponds to the given array $$$q$$$. Otherwise, if it exists, print $$$p_1, p_2, \dots, p_n$$$. Print any such permutation if there are many of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005880205992294005" id="id0079448642206421" class="input-output-copier">Copy</div></div><pre id="id005880205992294005">3
-2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005090546483509539" id="id00870619690463378" class="input-output-copier">Copy</div></div><pre id="id005090546483509539">3 1 2 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0021398645539297312" id="id005979232981549589" class="input-output-copier">Copy</div></div><pre id="id0021398645539297312">5
1 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009319636607834354" id="id0029293860834955876" class="input-output-copier">Copy</div></div><pre id="id009319636607834354">1 2 3 4 5 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004042354961013084" id="id006399032642233845" class="input-output-copier">Copy</div></div><pre id="id0004042354961013084">4
-1 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007494056978452934" id="id008262826006305352" class="input-output-copier">Copy</div></div><pre id="id0007494056978452934">-1
</pre></div></div></div>