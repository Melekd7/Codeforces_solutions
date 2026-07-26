<h2><a href="https://codeforces.com/contest/1230/problem/B" target="_blank" rel="noopener noreferrer">1230B — Ania and Minimizing</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1230B](https://codeforces.com/contest/1230/problem/B) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Ania and Minimizing</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ania has a large integer $$$S$$$. Its decimal representation has length $$$n$$$ and doesn't contain any leading zeroes. Ania is allowed to change at most $$$k$$$ digits of $$$S$$$. She wants to do it in such a way that $$$S$$$ still won't contain any leading zeroes and it'll be minimal possible. What integer will Ania finish with?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ ($$$1 \leq n \leq 200\,000$$$, $$$0 \leq k \leq n$$$) — the number of digits in the decimal representation of $$$S$$$ and the maximum allowed number of changed digits.</p><p>The second line contains the integer $$$S$$$. It's guaranteed that $$$S$$$ has exactly $$$n$$$ digits and doesn't contain any leading zeroes.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the minimal possible value of $$$S$$$ which Ania can end with. Note that the resulting integer should also have $$$n$$$ digits.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008124347820970593" id="id00900229428463004" class="input-output-copier">Copy</div></div><pre id="id008124347820970593">5 3
51528
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0012537443161289696" id="id006902803319573096" class="input-output-copier">Copy</div></div><pre id="id0012537443161289696">10028
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006031754802377876" id="id007783968678575738" class="input-output-copier">Copy</div></div><pre id="id006031754802377876">3 2
102
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000768090574625534" id="id009757015532442713" class="input-output-copier">Copy</div></div><pre id="id000768090574625534">100
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008410885785520847" id="id0008101369214773457" class="input-output-copier">Copy</div></div><pre id="id008410885785520847">1 1
1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00610859634544015" id="id006445417964099098" class="input-output-copier">Copy</div></div><pre id="id00610859634544015">0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>A number has leading zeroes if it consists of at least two digits and its first digit is $$$0$$$. For example, numbers $$$00$$$, $$$00069$$$ and $$$0101$$$ have leading zeroes, while $$$0$$$, $$$3000$$$ and $$$1010$$$ don't have leading zeroes.</p></div>