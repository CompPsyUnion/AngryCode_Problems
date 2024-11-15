# Ballons

| Language | Time Limit | Memory Limit |
|:--------:|:----------:|:------------:|
|C/C++     |1,000ms     |512MiB        |
|Java      |2,000ms     |512MiB        |
|Python    |2,000ms     |512MiB        |

## Background

In the vibrant land of Aetheria, an annual celebration called the Festival of Radiant Balloons captivates all who witness it. During the festival, an array of balloons is released, each crafted with magical properties that allow them to inflate on their own. However, this isn’t a random display—it's a test of skill and precision for the Balloon Masters.

Each of the $n$ balloons starts deflated, positioned along a magical field. The $i$-th balloon is placed at a specific position $x_i$, and it begins to inflate as soon as it's placed. The radius of each balloon grows uniformly, filling the space around it. However, the magic governing these balloons has two critical rules:

1. A balloon will stop inflating if it touches another balloon that has already finished inflating.
2. A balloon cannot exceed its pre-defined maximum radius limit, $r_i$.

The sequence of inflation is precise—each balloon inflates in the order it was placed, from the first to the $n$-th.

The Balloon Masters are tasked with determining the final radius of each balloon after inflation completes. This isn't just a test of knowledge; it determines the harmony and beauty of the festival display. Will you, a rising apprentice Balloon Master, be able to predict the mesmerizing finale of the festival's radiant balloons?

## Task
There are n balloons, all of which are empty at the beginning.

Next, they are inflated in order from $1$ to $n$, with the $i$-th balloon touching the ground at position $x_i$.

When a balloon touches a balloon in front of it or reaches the maximum radius limit, it stops inflating. The maximum radius limit of the $i$-th balloon is $r_i$.

Now please find out the final radius of each balloon.

## Input format
The first line of input will include an interger $n$, the number of ballons.

Then follows $n$ lines. Each line contains $2$ **intergers** $x_i$ and $r_i$.

## Output format
Your output should include exact $n$ lines. The $i$-th line contains an demical number accurate to **3** demical places representing the minimum length of circle for $i$-th b.

## Sample input and output
### Input #1
```
3
0 9
8 1
13 7
```
### Output #1
```
9.000
1.000
4.694
```

## Data size
For 100\% of the test data: $1 \le n \le 2\times 10^{5}$ and $0\le x_i,r_i \le 1\times 10^{9}$.