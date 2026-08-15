<h2><a href="https://codeforces.com/contest/1133/problem/C" target="_blank" rel="noopener noreferrer">1133C — Balanced Team</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1133C](https://codeforces.com/contest/1133/problem/C) |

## Topics
`sortings` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">C. Balanced Team</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are a coach at your local university. There are $$$n$$$ students under your supervision, the programming skill of the $$$i$$$-th student is $$$a_i$$$.</p><p>You have to create a team for a new programming competition. As you know, the more students some team has the more probable its victory is! So you have to create a team with the maximum number of students. But you also know that a team should be <span class="tex-font-style-it">balanced</span>. It means that the programming skill of each pair of students in a created team should differ by no more than $$$5$$$.</p><p>Your task is to report the maximum possible number of students in a <span class="tex-font-style-it">balanced</span> team.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of students.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$), where $$$a_i$$$ is a programming skill of the $$$i$$$-th student.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the maximum possible number of students in a <span class="tex-font-style-it">balanced</span> team.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0019996078876393342" id="id009612198267591973" class="input-output-copier">Copy</div></div><pre id="id0019996078876393342">6
1 10 17 12 15 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008981951130041876" id="id0048762421513104204" class="input-output-copier">Copy</div></div><pre id="id0008981951130041876">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006928192157292106" id="id005444731030656135" class="input-output-copier">Copy</div></div><pre id="id006928192157292106">10
1337 1337 1337 1337 1337 1337 1337 1337 1337 1337
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0019266282550982505" id="id0009197876846001307" class="input-output-copier">Copy</div></div><pre id="id0019266282550982505">10
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0006966319581815072" id="id0016214394126081233" class="input-output-copier">Copy</div></div><pre id="id0006966319581815072">6
1 1000 10000 10 100 1000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008704206638930038" id="id006672161893248154" class="input-output-copier">Copy</div></div><pre id="id008704206638930038">1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example you can create a team with skills $$$[12, 17, 15]$$$.</p><p>In the second example you can take all students in a team because their programming skills are equal.</p><p>In the third example you can create a team consisting of a single student (and you cannot create a team consisting of at least two students).</p></div>