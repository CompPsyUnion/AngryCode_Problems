# Patrol - Hard Version

| Language | Time Limit | Memory Limit |
|:--------:|:----------:|:------------:|
|C/C++     |1,000ms     |512MiB        |
|Java      |2,000ms     |512MiB        |
|Python    |2,000ms     |512MiB        |

## Background

In the peaceful kingdom of Villagria, $n$ villages form the lifeblood of the region, connected by a web of $n−1$ roads.  

These roads, spanning $1$ unit of length each, create a network that allows villagers to visit any other village in the kingdom. The roads are crucial, but so is their safety. To protect the villagers from potential threats, patrol cars are deployed daily from the central police station, located in Village $1$.

However, as the patrol cars navigate the network, they must traverse every road and return to the police station at the end of their route, making the patrol a costly and time-consuming operation. The kingdom, ever striving for efficiency, has decided to optimize the patrol route.

## Task

With limited resources, the kingdom can build only $k$ additional road(s), connecting any two villages in the network. The road(s) might:

- Connect two previously unconnected villages.
- Create a shortcut between two villages already linked indirectly.
- Form a ring by connecting a village to itself.

The new road(s) must be strategically chosen, as the patrol car is required to traverse it exactly once per day. The goal is to minimize the total patrol distance, ensuring that the region remains safe while saving resources and time.

As the kingdom’s most talented strategist, you are tasked with determining which single road to construct. The stakes are high: your decision will shape the future of Villagria’s patrol operations, ensuring safety while maintaining harmony in the land.

**Note that in this problem, $1\le k \le 2$.**

## Input format

The first line of input will include $2$ intergers $n$ and $k$, the number of villages and number of road(s) to be built.

Then follows $n$ lines. Each line contains $2$ intergers $x$ and $y$, meaning that there exists a path between village $x$ and village $y$.

## Output format

One interger representing the minimum length of patrol route.

## Sample input and output

### Input #1

```in
8 1 
1 2 
3 1 
3 4 
5 3 
7 5 
8 5 
5 6 
```

### Output #1

```out
11
```

### Input #2

```in
8 2 
1 2 
3 1 
3 4 
5 3 
7 5 
8 5 
5 6 
```

### Output #2

```out
10
```

### Input #3

```in
5 2 
1 2 
2 3 
3 4 
4 5 
```

### Output #3

```out
6
```

## Data size

For 100\% of the test data: $1 \le n \le 10^{5}$ and $1\le k\le 2$.
