<h2><a href="https://codeforces.com/contest/1307/problem/D" target="_blank" rel="noopener noreferrer">1307D — Cow and Fields</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1307D](https://codeforces.com/contest/1307/problem/D) |

## Topics
`binary search` `data structures` `dfs and similar` `graphs` `greedy` `shortest paths` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. Cow and Fields</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Bessie is out grazing on the farm, which consists of $$$n$$$ fields connected by $$$m$$$ bidirectional roads. She is currently at field $$$1$$$, and will return to her home at field $$$n$$$ at the end of the day.</p><p>The Cowfederation of Barns has ordered Farmer John to install one extra bidirectional road. The farm has $$$k$$$ special fields and he has decided to install the road between two different special fields. He may add the road between two special fields that already had a road directly connecting them.</p><p>After the road is added, Bessie will return home on the shortest path from field $$$1$$$ to field $$$n$$$. Since Bessie needs more exercise, Farmer John must <span class="tex-font-style-bf">maximize</span> the length of this shortest path. Help him!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integers $$$n$$$, $$$m$$$, and $$$k$$$ ($$$2 \le n \le 2 \cdot 10^5$$$, $$$n-1 \le m \le 2 \cdot 10^5$$$, $$$2 \le k \le n$$$)  — the number of fields on the farm, the number of roads, and the number of special fields. </p><p>The second line contains $$$k$$$ integers $$$a_1, a_2, \ldots, a_k$$$ ($$$1 \le a_i \le n$$$)  — the special fields. All $$$a_i$$$ are distinct.</p><p>The $$$i$$$-th of the following $$$m$$$ lines contains integers $$$x_i$$$ and $$$y_i$$$ ($$$1 \le x_i, y_i \le n$$$, $$$x_i \ne y_i$$$), representing a bidirectional road between fields $$$x_i$$$ and $$$y_i$$$. </p><p>It is guaranteed that one can reach any field from every other field. It is also guaranteed that for any pair of fields there is at most one road connecting them.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output one integer, the <span class="tex-font-style-bf">maximum</span> possible length of the shortest path from field $$$1$$$ to $$$n$$$ after Farmer John installs one road optimally.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005983636304032911" id="id004229600232333415" class="input-output-copier">Copy</div></div><pre id="id005983636304032911">5 5 3
1 3 5
1 2
2 3
3 4
3 5
2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00012468590483598496" id="id00795973348198769" class="input-output-copier">Copy</div></div><pre id="id00012468590483598496">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006357193550381441" id="id0022060697182587496" class="input-output-copier">Copy</div></div><pre id="id006357193550381441">5 4 2
2 4
1 2
2 3
3 4
4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006792618828167619" id="id005489633155781202" class="input-output-copier">Copy</div></div><pre id="id006792618828167619">3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The graph for the first example is shown below. The special fields are denoted by red. It is optimal for Farmer John to add a road between fields $$$3$$$ and $$$5$$$, and the resulting shortest path from $$$1$$$ to $$$5$$$ is length $$$3$$$. </p><center> <img class="tex-graphics" height="227px" src="https://espresso.codeforces.com/7029f3c3a3910129aa505fc6159d65518e060ad5.png" style="max-width: 100.0%;max-height: 100.0%;" width="378px">   </center><p>The graph for the second example is shown below. Farmer John must add a road between fields $$$2$$$ and $$$4$$$, and the resulting shortest path from $$$1$$$ to $$$5$$$ is length $$$3$$$. </p><center> <img class="tex-graphics" height="265px" src="https://espresso.codeforces.com/06328a74321e072469311d954753a0f70bde06ca.png" style="max-width: 100.0%;max-height: 100.0%;" width="454px">   </center></div>