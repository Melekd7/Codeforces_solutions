<h2><a href="https://codeforces.com/contest/1133/problem/A" target="_blank" rel="noopener noreferrer">1133A — Middle of the Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1133A](https://codeforces.com/contest/1133/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Middle of the Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp is going to participate in the contest. It starts at $$$h_1:m_1$$$ and ends at $$$h_2:m_2$$$. It is guaranteed that the contest lasts an even number of minutes (i.e. $$$m_1 \% 2 = m_2 \% 2$$$, where $$$x \% y$$$ is $$$x$$$ modulo $$$y$$$). It is also guaranteed that the entire contest is held during a single day. And finally it is guaranteed that the contest lasts at least two minutes.</p><p>Polycarp wants to know the time of the midpoint of the contest. For example, if the contest lasts from $$$10:00$$$ to $$$11:00$$$ then the answer is $$$10:30$$$, if the contest lasts from $$$11:10$$$ to $$$11:12$$$ then the answer is $$$11:11$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains two integers $$$h_1$$$ and $$$m_1$$$ in the format <span class="tex-font-style-tt">hh:mm</span>.</p><p>The second line of the input contains two integers $$$h_2$$$ and $$$m_2$$$ in the same format (<span class="tex-font-style-tt">hh:mm</span>).</p><p>It is guaranteed that $$$0 \le h_1, h_2 \le 23$$$ and $$$0 \le m_1, m_2 \le 59$$$.</p><p>It is guaranteed that the contest lasts an even number of minutes (i.e. $$$m_1 \% 2 = m_2 \% 2$$$, where $$$x \% y$$$ is $$$x$$$ modulo $$$y$$$). It is also guaranteed that the entire contest is held during a single day. And finally it is guaranteed that the contest lasts at least two minutes.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two integers $$$h_3$$$ and $$$m_3$$$ ($$$0 \le h_3 \le 23, 0 \le m_3 \le 59$$$) corresponding to the midpoint of the contest in the format <span class="tex-font-style-tt">hh:mm</span>. Print each number as exactly two digits (prepend a number with leading zero if needed), separate them with '<span class="tex-font-style-tt">:</span>'.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006369058011811353" id="id0007974748134425746" class="input-output-copier">Copy</div></div><pre id="id006369058011811353">10:00
11:00
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005892281105325873" id="id004055988686187967" class="input-output-copier">Copy</div></div><pre id="id005892281105325873">10:30
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004855527194405336" id="id009784150279415725" class="input-output-copier">Copy</div></div><pre id="id004855527194405336">11:10
11:12
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009258051055905772" id="id0006673926378579464" class="input-output-copier">Copy</div></div><pre id="id009258051055905772">11:11
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002756160323236495" id="id007615041630422034" class="input-output-copier">Copy</div></div><pre id="id002756160323236495">01:02
03:02
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001405639202375526" id="id0021505302264764092" class="input-output-copier">Copy</div></div><pre id="id001405639202375526">02:02
</pre></div></div></div>