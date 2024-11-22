### Background

In a world where knowledge is stored in cryptic scrolls, an ancient text known as The Eternal Sequence has baffled scholars for centuries. The text, a single unbroken string of symbols, is believed to hold the secrets to untold power and wisdom. However, the key to unlocking these secrets lies in deciphering the recurrence patterns hidden within specific portions of the text.

The Council of Decoders, an elite group of scholars, has summoned you to assist in this monumental task. They present you with the challenge: given the scroll of length $n$, you must answer $m$ queries from the council. Each query specifies an interval $[l,r]$ in the scroll, and your mission is to determine the minimum length of any recurring segment within that interval.

A recurring segment is a substring that appears more than once in the interval. The shorter the recurring segment, the more potent its encoded message. The council believes these patterns will guide them to the hidden truth.

However, time is of the essence. With competing kingdoms attempting to decode the scroll for themselves, you must develop an efficient algorithm to handle the council's queries swiftly and accurately.

Will you rise to the challenge and help the Council of Decoders unravel the secrets of The Eternal Sequence? The fate of knowledge itself hangs in the balance.

### Task

For a given string of length $n$, you are asked to handle $m$ queries about the minimum length of recurrence segment in the interval $[l,r]$.

**Hint** Recurrence segment of a string refers to a specific substring that repeats within the given string. For example, `abc` is a recurrence segment of `abcabcabc` while `abcabc` isn't.

### Input format

The first line of input will include an interger $n$, the length of given string.

The second line will be the string contains only lowercase letters.

The third line will include an interger $m$, the number of queries.

Then follows $m$ lines. Each line contains $2$ intergers $l$ and $r$.

### Output format

Your output should include exact $m$ lines. The $i$-th line contains an interger representing the minimum length of circle for $i$-th query.

### Sample input and output

#### Input #1

```in
10
abcabcddee
5
1 6
1 3
7 10
1 1
4 6
```

#### Output #1

```out
3
3
2
1
3
```

### Data size

For 100\% of the test data: $1 \le n \le 5\times 10^{5}$ and $1\le m \le 1\times 10^{6}$.

The given string is constructed by LOWERCASE letters only.
