<h2><a href="https://codeforces.com/contest/1208/problem/B" target="_blank" rel="noopener noreferrer">1208B — Uniqueness</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1208B](https://codeforces.com/contest/1208/problem/B) |

## Topics
`binary search` `brute force` `implementation` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">B. Uniqueness</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_{1}, a_{2}, \ldots, a_{n}$$$. You can remove <span class="tex-font-style-bf">at most one</span> subsegment from it. The remaining elements should be pairwise distinct.</p><p>In other words, <span class="tex-font-style-bf">at most one</span> time you can choose two integers $$$l$$$ and $$$r$$$ ($$$1 \leq l \leq r \leq n$$$) and delete integers $$$a_l, a_{l+1}, \ldots, a_r$$$ from the array. Remaining elements should be pairwise distinct. </p><p>Find the minimum size of the subsegment you need to remove to make all remaining elements distinct.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$n$$$ ($$$1 \le n \le 2000$$$) — the number of elements in the given array.</p><p>The next line contains $$$n$$$ spaced integers $$$a_{1}, a_{2}, \ldots, a_{n}$$$ ($$$1 \le a_{i} \le 10^{9}$$$) — the elements of the array. </p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the minimum size of the subsegment you need to remove to make all elements of the array pairwise distinct. If no subsegment needs to be removed, print $$$0$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007331526940816275" id="id0040153833419762786" class="input-output-copier">Copy</div></div><pre id="id007331526940816275">3
1 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002538832425308404" id="id006776028805147338" class="input-output-copier">Copy</div></div><pre id="id002538832425308404">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0042063840366796945" id="id008318960160977559" class="input-output-copier">Copy</div></div><pre id="id0042063840366796945">4
1 1 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000923010180063415" id="id009922137235980852" class="input-output-copier">Copy</div></div><pre id="id000923010180063415">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008574185133956712" id="id008271266794841065" class="input-output-copier">Copy</div></div><pre id="id008574185133956712">5
1 4 1 4 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008252117390568736" id="id005409828186264797" class="input-output-copier">Copy</div></div><pre id="id008252117390568736">2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example all the elements are already distinct, therefore no subsegment needs to be removed.</p><p>In the second example you can remove the subsegment from index $$$2$$$ to $$$3$$$.</p><p>In the third example you can remove the subsegments from index $$$1$$$ to $$$2$$$, or from index $$$2$$$ to $$$3$$$, or from index $$$3$$$ to $$$4$$$.</p></div>