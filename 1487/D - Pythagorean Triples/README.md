<h2><a href="https://codeforces.com/contest/1487/problem/D" target="_blank" rel="noopener noreferrer">1487D — Pythagorean Triples</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1487D](https://codeforces.com/contest/1487/problem/D) |

## Topics
`binary search` `brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Pythagorean Triples</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A Pythagorean triple is a triple of integer numbers $$$(a, b, c)$$$ such that it is possible to form a right triangle with the lengths of the first cathetus, the second cathetus and the hypotenuse equal to $$$a$$$, $$$b$$$ and $$$c$$$, respectively. An example of the Pythagorean triple is $$$(3, 4, 5)$$$.</p><p>Vasya studies the properties of right triangles, and he uses a formula that determines if some triple of integers is Pythagorean. Unfortunately, he has forgotten the exact formula; he remembers only that the formula was some equation with squares. So, he came up with the following formula: $$$c = a^2 - b$$$.</p><p>Obviously, this is not the right formula to check if a triple of numbers is Pythagorean. But, to Vasya's surprise, it actually worked on the triple $$$(3, 4, 5)$$$: $$$5 = 3^2 - 4$$$, so, according to Vasya's formula, it is a Pythagorean triple.</p><p>When Vasya found the right formula (and understood that his formula is wrong), he wondered: how many are there triples of integers $$$(a, b, c)$$$ with $$$1 \le a \le b \le c \le n$$$ such that they are Pythagorean both according to his formula and the real definition? He asked you to count these triples.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Each test case consists of one line containing one integer $$$n$$$ ($$$1 \le n \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the number of triples of integers $$$(a, b, c)$$$ with $$$1 \le a \le b \le c \le n$$$ such that they are Pythagorean according both to the real definition and to the formula Vasya came up with.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024329551783012415" id="id008062039095179897" class="input-output-copier">Copy</div></div><pre id="id0024329551783012415">3
3
6
9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004151452344923431" id="id003078127729856338" class="input-output-copier">Copy</div></div><pre id="id004151452344923431">0
1
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The only Pythagorean triple satisfying $$$c = a^2 - b$$$ with $$$1 \le a \le b \le c \le 9$$$ is $$$(3, 4, 5)$$$; that's why the answer for $$$n = 3$$$ is $$$0$$$, and the answer for $$$n = 6$$$ (and for $$$n = 9$$$) is $$$1$$$.</p></div>