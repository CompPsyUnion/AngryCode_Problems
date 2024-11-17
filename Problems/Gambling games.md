# Gambling games

### Problem Description

As an OIer who loves gambling, you have received a rare ticket to enter the only profitable casino in the world. There are n prize pools in the casino, and the bonus of the i-th prize pool is ai. Each prize pool has a parameter bi (1<=bi<=n)

The casino rules are as follows:,

At the beginning, players will be provided with a prize pool, and whenever they are given the i-th prize pool, they have two options:

1. Obtain the prize money from this prize pool.
2. Skip the prize money in this pool, so they will never be able to receive the prize money in this pool.

Afterwards, the casino will offer players another prize pool based on the following rules

If the player selects prize pool i, they will choose a prize pool within the range of j<i

If the player skips prize pool i, they will choose a prize pool within the range of j<bi

Among these prize pools, it will choose the one with the highest index, which has never been given to players before (players have neither selected nor skipped it before). If there is no such prize pool, then the player's gambling is over, and their prize money is equal to the total prize money of all the selected prize pools. Especially, if players choose the first prize pool, their gambling is over. Note that players can receive a maximum of one prize pool per game.

Now that you have arrived at this casino, please write a program to calculate the maximum bonus you can receive.

#### input

Each test consists of multiple test cases. The first line contains an integer t (1 ≤ t ≤ 10 ^ 5) - the number of test cases. The description of the test cases is as follows.

The first line of each test case contains an integer n (1 ≤ n ≤ 4 ⋅ 10 ^ 5) - the number of prize pools.

The second line of each test case contains n integers a1, a2,..., an (1 ≤ ai ≤ 10 ^ 9) - the prize money in the prize pool.

The third line of each test case contains n integers b1, b2,..., bn (1 ≤ bi ≤ n) - the parameters of the prize pool.

Ensure n

All test cases shall not exceed 4 ⋅ 10 ^ 5.

#### output

For each test case, output an integer - the highest score you can obtain.

### Input Format

```
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

### Output Format
```
16
200
100
1000
```