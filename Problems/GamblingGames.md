# Gambling games

## Problem Description

As an OIer who loves gambling, you have received a rare ticket to enter the only profitable casino in the world. There are \( n \) prize pools in the casino, and the bonus of the \( i_{th} \) prize pool is \( a_i \). Each prize pool has a parameter \( b_i \) (\( 1 \le b_i \le n \))

The casino rules are as follows:,

At the beginning, players will be provided with a prize pool, and whenever they are given the \( i_{th} \) prize pool, they have two options:

1. Obtain the prize money from this prize pool.
2. Skip the prize money in this pool, so they will never be able to receive the prize money in this pool.

Afterwards, the casino will offer players another prize pool based on the following rules

If the player selects prize pool \( i \), they will choose a prize pool within the range of \( j \le i \)

If the player skips prize pool \( i \), they will choose a prize pool within the range of \( j \le b_i \)

Among these prize pools, it will choose the one with the highest index, which has never been given to players before (players have neither selected nor skipped it before). If there is no such prize pool, then the player's gambling is over, and their prize money is equal to the total prize money of all the selected prize pools. Especially, if players choose the first prize pool, their gambling is over. Note that players can receive a maximum of one prize pool per game.

Now that you have arrived at this casino, please write a program to calculate the maximum bonus you can receive.

## Input format

Sure, let's translate the given problem constraints and details into LaTeX.

## Problem Statement in LaTeX

Each test consists of multiple test cases.

The first line contains an integer \( t \) — the number of test cases.

The description of the test cases is as follows:

- The first line of each test case contains an integer \( n \) — the number of prize pools.
- The second line of each test case contains \( n \) integers \( a_1, a_2, \ldots, a_n \) — the prize money in the prize pool.
- The third line of each test case contains \( n \) integers \( b_1, b_2, \ldots, b_n \) — the parameters of the prize pool.

## Output format

For each test case, output an integer, representing the highest score you can obtain.

## Sample input and output

### Input

```in
4
2
15 16
2 1
5
10 10 100 100 1000
3 4 1 1 1
3
100 49 50
3 2 2
4
100 200 300 1000
2 3 4 1
```

### Output

```out
16
200
100
1000
```

## Constraints

For all test cases:

- \( 1 \leq t \leq 10^5 \)
- \( 1 \leq n \leq 4 \cdot 10^5 \)
- \( 1 \leq a_i \leq 10^9 \)
