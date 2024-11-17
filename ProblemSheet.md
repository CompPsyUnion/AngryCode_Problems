# ANGRYCODE

Welcome to Angrycode Programming & Algorthm Competition hold by Computer Psycho Union and Science & Engineering Students Association, UNNC.

Dictionaries are not allowed with one exception. Those whose first language is not English may use a standard translation dictionary to translate between that language and English provided that neither language is the subject of this examination. Subject specific translation dictionaries are not permitted.
Paper materials are **PERMITTED** in this competition.

No electronic devices capable of storing and retrieving text, including electronic dictionaries, may be used.
You can **ONLY** use Chrome, Virual Studio Code, Terminal on university's computer, and use our Online Judge system in Chrome.

## Problem 1: Shortest path of the king

### Background & Problem

The king is left alone on the chessboard. In spite of this loneliness, he doesn't lose heart, because he has business of national importance. For example, he has to pay an official visit to square $ t $ . As the king is not in habit of wasting his time, he wants to get from his current position $ s $ to square $ t $ in the least number of moves. Help him to do this.

 ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF3A/5ee13bc754378d9b20e7cf9389534f02014d55d0.png)

In one move the king can get to the square that has a common side or a common vertex with the square the king is currently in (generally there are 8 different squares he can move to).

### Input Format

The first line contains the chessboard coordinates of square $ s $ , the second line — of square $ t $ .

Chessboard coordinates consist of two characters, the first one is a lowercase Latin letter (from a to h), the second one is a digit from 1 to 8.

### Output Format

In the first line print $ n $ — minimum number of the king's moves. Then in $ n $ lines print the moves themselves. Each move is described with one of the 8: L, R, U, D, LU, LD, RU or RD.

L, R, U, D stand respectively for moves left, right, up and down (according to the picture), and 2-letter combinations stand for diagonal moves. If the answer is not unique, print any of them.

### Examples

###### Input #1

```
a8
h1
```

###### Output #1

```
7
RD
RD
RD
RD
RD
RD
RD
```



## Problem 2: Traing

### Background & Problem

In UNNC, **n ducklings** have recently been born, and these ducklings need to undergo a series of special training sessions to improve their survival skills. For the **i-th duckling**, the cost for one training session is **p<sub>i</sub>** gold coins, and to become a qualified duckling, it needs at least **c<sub>i</sub>** training sessions.

To ensure the efficiency of the training, you (or your team) have been chosen as caretakers and have introduced a group training scheme. This scheme allows for a training session for each duckling, with a total cost of **S** gold coins (the group training scheme can be purchased multiple times, meaning the ducklings can undergo group training sessions multiple times).

As a responsible caretaker, please calculate the minimum amount of gold coins required to ensure that all the ducklings become qualified.

### Input format

The first line of input contains two integers, **n** and **S**, separated by a space, representing the number of ducklings and the cost of a group training session in gold coins.

The following **n** lines each contain two integers, **p<sub>i</sub>** and **c<sub>i</sub>**, separated by a space, indicating the cost of one training session in gold coins for the **i-th duckling** and the number of training sessions needed for the **i-th duckling** to become qualified.

### Output format

The output should consist of a single line containing one integer, representing the minimum number of gold coins needed to ensure that all the ducklings become qualified.


### Sample input and output

###### Input

```
3 6
5 2
2 4
3 2
```

###### Output

```
16
```

### Data size

For all test cases:

- **1 &le; n &le; $10^5$**
- **1 &le; p<sub>i</sub>, c<sub>i</sub> &le; $10^6$**
- **1 &le; S &le; $10^{10}$**

## Problem 3: Patrol

### Background

In the peaceful kingdom of Villagria, $n$ villages form the lifeblood of the region, connected by a web of $n−1$ roads.  

These roads, spanning $1$ unit of length each, create a network that allows villagers to visit any other village in the kingdom. The roads are crucial, but so is their safety. To protect the villagers from potential threats, patrol cars are deployed daily from the central police station, located in Village $1$.

However, as the patrol cars navigate the network, they must traverse every road and return to the police station at the end of their route, making the patrol a costly and time-consuming operation. The kingdom, ever striving for efficiency, has decided to optimize the patrol route.

### Task

With limited resources, the kingdom can build only $k$ additional road(s), connecting any two villages in the network. The road(s) might:

- Connect two previously unconnected villages.
- Create a shortcut between two villages already linked indirectly.
- Form a ring by connecting a village to itself.

The new road(s) must be strategically chosen, as the patrol car is required to traverse it exactly once per day. The goal is to minimize the total patrol distance, ensuring that the region remains safe while saving resources and time.

As the kingdom’s most talented strategist, you are tasked with determining which single road to construct. The stakes are high: your decision will shape the future of Villagria’s patrol operations, ensuring safety while maintaining harmony in the land.

**Note that in this problem, $k=1$.**

### Input format

The first line of input will include $2$ intergers $n$ and $k$, the number of villages and number of road(s) to be built.

Then follows $n$ lines. Each line contains $2$ intergers $x$ and $y$, meaning that there exists a path between village $x$ and village $y$.

### Output format

One interger representing the minimum length of patrol route.

## Example

###### Input #1

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

###### Output #1

```out
11
```

### Data Size

For 100\% of the test data: $1 \le n \le 10^{5}$ and $k=1$.

### Constraints

| Language | Time Limit | Memory Limit |
| :------: | :--------: | :----------: |
|  C/C++   |  1,000ms   |    512MiB    |
|   Java   |  2,000ms   |    512MiB    |
|  Python  |  2,000ms   |    512MiB    |



## Problem 4: A show-off cat

### Background & Problem

The cat living next to DB, always a fan of shiny objects(Baling~ Baling~), has taken up a hobby of mining diamonds in her spare time!  She has collected $N$ diamonds ($N \leq 50,000$) of varying sizes, and she wants to arrange some of them in **a pair of**  display cases in her cattery.


Since she wants the diamonds in each of the two cases to be relatively similar in  size, she decides that she will not include two diamonds in the same case if their sizes differ by more than $K$ (two diamonds can be displayed together in the same case if their sizes differ by exactly $K$).  Given $K$, please help her determine the maximum number of diamonds she can display in both cases together.


### Input format

The first line of the input file contains $N$ and $K$ ($0 \leq K \leq 1,000,000,000$).

The next $N$ lines each contain an integer giving the size of one of the

diamonds.  All sizes will be positive and will not exceed $1,000,000,000$.

### Output format

Output a single positive integer, telling the maximum number of diamonds that

**She can showcase in total in both the cases.**

### Example

###### Input

```
7 3
10
5
1
12
9
5
14
```

###### Output

```
5
```

### Data size

Those specific value ranges can be found above.

## Problem 5

### Background

In the vibrant land of Aetheria, an annual celebration called the Festival of Radiant Balloons captivates all who witness it. During the festival, an array of balloons is released, each crafted with magical properties that allow them to inflate on their own. However, this isn’t a random display—it's a test of skill and precision for the Balloon Masters.

Each of the $n$ balloons starts deflated, positioned along a magical field. The $i$-th balloon is placed at a specific position $x_i$, and it begins to inflate as soon as it's placed. The radius of each balloon grows uniformly, filling the space around it. However, the magic governing these balloons has two critical rules:

1. A balloon will stop inflating if it touches another balloon that has already finished inflating.
2. A balloon cannot exceed its pre-defined maximum radius limit, $r_i$.

The sequence of inflation is precise—each balloon inflates in the order it was placed, from the first to the $n$-th.

The Balloon Masters are tasked with determining the final radius of each balloon after inflation completes. This isn't just a test of knowledge; it determines the harmony and beauty of the festival display. Will you, a rising apprentice Balloon Master, be able to predict the mesmerizing finale of the festival's radiant balloons?

### Task

There are n balloons, all of which are empty at the beginning.

Next, they are inflated in order from $1$ to $n$, with the $i$-th balloon touching the ground at position $x_i$.

When a balloon touches a balloon in front of it or reaches the maximum radius limit, it stops inflating. The maximum radius limit of the $i$-th balloon is $r_i$.

Now please find out the final radius of each balloon.

### Input format

The first line of input will include an interger $n$, the number of ballons.

Then follows $n$ lines. Each line contains $2$ **intergers** $x_i$ and $r_i$.

### Output format

Your output should include exact $n$ lines. The $i$-th line contains an demical number accurate to **3** demical places representing the minimum length of circle for $i$-th b.

### Example

###### Input #1

```in
3
0 9
8 1
13 7
```

###### Output #1

```out
9.000
1.000
4.694
```

### Data size

For 100\% of the test data: $1 \le n \le 2\times 10^{5}$ and $0\le x_i,r_i \le 1\times 10^{9}$.

## Problem 6

### Background

In a mystical land filled with magical energy, there exists a **Crystal Forest** containing \( N \) crystal stones. The position of each crystal stone is given by its coordinates \((x_i, y_i)\). The Grand Mage wants to draw a minimal magic circle (circular barrier) to protect all the crystal stones. The magic circle must enclose all the crystal stones, and no stone can lie outside the circle.

The Grand Mage aims to use the least energy, so the circle must be the smallest possible.

### Task

Your task is to help the Grand Mage find this minimal magic circle and determine its **radius** and **center coordinates**.

### Input

The first line contains an integer \( N \), representing the number of crystal stones.

The next \( N \) lines each contain two real numbers \( x_i \) and \( y_i \), representing the coordinates of the \( i_{th} \) crystal stone, with up to two decimal places.

### Output

The first line of output should contain a real number, representing the radius of the magic circle.

The second line of output should contain two real numbers, representing the coordinates of the circle's center.

Your answer is considered correct if all the outputs' absolute error does not exceed \( 10^{-9} \).

### Example

###### Input #1

```in
6
8.0 9.0
4.0 7.5
1.0 2.0
5.1 8.7
9.0 2.0
4.5 1.0
```

###### Output #1

```out
5.0000000000
5.0000000000 5.0000000000
```

### Constraints

During the process of drawing the magic circle, all the data satisfies:

- \( 1 \leq N \leq 10^5 \)
- \( |x_i|, |y_i| \leq 10^4 \)

## Problem 7: Let's party(pa ti)! (Counting Steps)

### Problem Description

UNNC Library has launched the "Let's party" campaign to help students relieve stress and raise awareness about environmental protection. The staircase from the entrance of the library from the 1st floor to the 2nd floor has \(N\) steps. You can go up one step or two steps at a time. Write a program to calculate the total number of different ways to climb the stairs.

### Input Format

A single number representing the number of steps.

### Output Format

Output the total number of ways to climb the stairs.

### Example

###### Input #1

``` 
4 
```

###### Output #1

``` 
5 
```

### Tips
- For \(60\%\) of the data, \(N \leq 50\);

- For \(100\%\) of the data, \(1 \le N \leq 5000\).

  

## Problem 8: Let's make friends!

### Background & Problem

After going through numerous hardships, the duckling finally arrived at DB and met the cat and her display case of diamonds. However, an awkward situation arose: they couldn't understand each other's language (duckling: Quack? Quack?  cat: Meow? Meow?), which made communication difficult.

To solve this problem, they found a dictionary to help them understand what the other was saying. The rules for using the dictionary are as follows: the dictionary contains only two lines (one for each animal's language), and we know that the information expressed in the second line is a substring of the first line. Your task is to act as a translator and find the first position where the information from the second line appears in the first line.

### Input format

The first line of input contains the message described in a certain language. This message will not contain more than **10<sup>6</sup>** characters. There will be exactly one whitespace between adjacent words, and the end of the line will be marked with \$. Characters after \$ will not be considered part of the message. 

The following line contains the sentence described in another language, which we need to find in the first line. This sentence will also not be longer than **10<sup>6</sup>** characters and will follow the same format as described above.

Except for the last character \$, all other characters are English letters and spaces.


### Output format

Output the position where the sentence from the second line first appears in the message from the first line.
**Solution will always exist.**

### Example

###### Input

```
miao meow meow woof hello $
ga quack moo $
```

###### Output

```
3
```

### Data size

Those specific value ranges can be found above.



## Problem 9: Baicen's Bookshelf

### Background & Problem 

Liu Baicen found that the books on his shelves had been unorganized for a long time and were now very messy, but before that Liu had numbered all the books from 1 to N, one by one, this made it easy for him to organize his bookshelves.
But Liu was stuck in a rut that required him to organize his bookshelves according to the following rules:

- only two books can be exchanged when tidying up
- for two books that are not in the right place, there will be no swapping (for example, books numbered 1,3,2 and 4, books numbered 3 and 2 will not be swapped)
- the operation of each exchange can not be repeated
Out of kindness, it is agreed that at least 2 of these books are in the right place, and at most max (n/2,2) books are in the right place
Liu Baicen found himself unable to tear the question by hand, but he immediately thought of you! Strange talk allows him to ask you for help, in order to group of friends can always after ~~ molest ~~ him, you decided to take this task.
So, please design a program to print out the steps of the exchange.



## Problem 10: Scroll

### Background & Problem

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

### Example

###### Input #1

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

###### Output #1

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

## Problem 11: Gambling games

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

#### Input

Each test consists of multiple test cases. The first line contains an integer t (1 ≤ t ≤ 10 ^ 5) - the number of test cases. The description of the test cases is as follows.

The first line of each test case contains an integer n (1 ≤ n ≤ 4 ⋅ 10 ^ 5) - the number of prize pools.

The second line of each test case contains n integers a1, a2,..., an (1 ≤ ai ≤ 10 ^ 9) - the prize money in the prize pool.

The third line of each test case contains n integers b1, b2,..., bn (1 ≤ bi ≤ n) - the parameters of the prize pool.

Ensure n

All test cases shall not exceed 4 ⋅ 10 ^ 5.

### Output

For each test case, output an integer - the highest score you can obtain.

### Exemple

###### Input

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

###### Output

```
16
200
100
1000
```



## Problem 12: V-ball

### Background & Problem

As you know, at the beginning of this semester, UNNC organised a freshman V-Ball. And Cathy, an experienced senior, was tasked with arranging dance partners for the freshmen who attended as singles.

There were \( N \) boys and \( N \) girls attending the ball without finding a partner in advance, and each boy needed to be paired up with one girl to form a dancing couple eventually.

As a responsible senior, Cathy collected the relationships between these freshmen, noting whether they knew each other beforehand, and how close they were, representing this **level of closeness** as \( a_{i,j} \).

She also needs to consider whether it is proper for two people to dance together, such as whether there will be a significant difference in their height and weight, and calculated this accordingly as \( b_{i,j} \), indicating **the degree of discordance** when the \(i_{th}\) boy and \(j_{th}\) girl dance together.

To evaluating how "good" the overall result is, we have a real number \( C \), and here's how we can calculate this:

In a scheme there are \( n \) pairs of dance partners, assuming each pair's level of closeness is \( a'_1,a'_2,...,a'_n \) respectively, and each pair's degree of discordance is \( b'_1,b'_2,...,b'_n \) respectively, then:

$$
C=\frac {a'_1+a'_2+...+a'_n}{b'_1+b'_2+...+b'_n}
$$

Cathy wants a program inputting \( a_{i,j} \) and \( b_{i,j} \) and output the biggest \( C \). Luckily for her, she got you here helping her out.

There are, of course, many other issues to consider, but you don't need to worry about those stuffs. Cathy will handle the additional details and further adjust the result herself. For now, she only wants to determine the upper limit of her scheme based on the current situation.

### Task

Your programme need to find and output the biggest \( C \) given the provided data.

### Input format

The first line contains an integer \( N \).

The next \( N \) lines contain \( N \) integers each, where the integer at the \( i_{th} \) row and \( j_{th} \) column is represented as \( a_{i,j} \).

The following \( N \) lines contain \( N \) integers each, where the integer at the \( i_{th} \) row and \( j_{th} \) column is represented as \( b_{i,j} \).

### Output format

Output a single number, representing the maximum value of \( C \). The answer should be rounded to **6 decimal places**, and the contestant’s output must exactly match the standard output.

### Example

###### Input #1

```in
3
19 17 16
25 24 23
35 36 31
9 5 6
3 4 2
7 8 9
```

###### Output #1

```out
5.357143
```

### Constraints

- For 10% of the test cases, \( 1 \le N \le 5 \).
- For 40% of the test cases, \( 1 \le N \le 18 \).
- For 100% of the test cases, \( 1 \le N \le 100 \), and \( 1 \le a_{i,j}, b_{i,j} \le 10^4 \).

## Problem 13: FlingLikFullOfVim

### Problem Constraints

Time limit: 2.00s

Memory limit: 512MB

### Background & Problem

Ernest Vincent Wright was an American author, known for writing a novel (Gadsby) without using the letter **“e”**. Yinan Sun is a big fan of Ernest and tries to imitate him in writing a novel, but is looking for a real challenge. He uses only the first ten characters of the alphabet (namely abcdefghij).

Ironically, the “e” key on his computer breaks halfway through the novel, and for consistency, he decides to delete all the “e”s he has already written. His friend, a programmer, recommended him to use the text editor Vim to perform this task. Unfortunately, Yinan is not very familiar with Vim, and knows only three different commands: **“x”**, **“h”** and **“f”**.

- **“x”** deletes the character at the cursor. The cursor position (counted from the left) does not change. Yinan shall not use this command if the cursor is at the last character of the document.
- **“h”** moves the cursor one step backward (to the left). Nothing happens if the cursor is at the beginning of the document.
- **“f”** waits for the user to input another character \( C \), and then moves the cursor forward to the next occurrence of \( C \) (even if the character at the cursor happens to be \( C \)). Nothing happens if \( C \) does not occur anywhere to the right of the cursor position.

For example, if the current text is

$$
jeff\boxed{i}ehadabigidea
$$

where the cursor is denoted by a frame like \(\boxed{i}\), then

- **“x”** would give \(jeff\boxed{e}hadabigidea\)
- **“h”** would give \(jef\boxed{f}iehadabigidea`\)
- **“fi”** would give \(jeffiehadab\boxed{i}gidea\)

> Note that the “e” key is broken, so the command “fe” cannot be used.

#### Task

Write a program that calculates the least number of key presses that Yinan needs to use to delete all the **“e”s** in the document, but no other letters. Initially, the cursor is at the first character of the document.

### Input format

The first line contains the integer \( N\), the length of the document. The next line contains N characters,
each one of the ten lowercase letters from **“a”** to **“j”**. The first and the last letter of the input are both different from **“e”**.

### Output format

The only line of output should contain exactly one integer \( T \): the least number of key presses Yinan needs to delete all the **“e”s**.

### Example

###### Input #1

```in
35
chefeddiefedjeffeachbigagedegghehad
```

###### Output #1

```out
36
```

### Tips

An optimal solution for the example test case is:

```text
fdhxhhxffhxfahxhhhxhhhxfdhxfghxfahhx
```

You can test this by starting the Vim editor yourself (type **“vim 1.txt”** at the command prompt to open **1.txt**, type **“:q\<ENTER\>”** to quit).

### Constraints

- For 50% of the test cases, \( N \le 500 \).
- For 60% of the test cases, \( N \le 5000 \).
- For 100% of the test cases, \( N \le 70000 \).

### For ya

In actual cases where \( T \ge 14 \), this is more likely to be efficient (not counting the \<Shift\> key):

```text
:%s/\%d101//g<Enter>
```

Ah, but alas, poor Yinan was unaware of this clever workaround, that's a pity. But let’s remain optimistic — perhaps soon he’ll stumble upon these knowledge and become a true Vim master!



## Additional #3: Patrol - Hard Version

### Background

In the peaceful kingdom of Villagria, $n$ villages form the lifeblood of the region, connected by a web of $n−1$ roads.  

These roads, spanning $1$ unit of length each, create a network that allows villagers to visit any other village in the kingdom. The roads are crucial, but so is their safety. To protect the villagers from potential threats, patrol cars are deployed daily from the central police station, located in Village $1$.

However, as the patrol cars navigate the network, they must traverse every road and return to the police station at the end of their route, making the patrol a costly and time-consuming operation. The kingdom, ever striving for efficiency, has decided to optimize the patrol route.

### Task

With limited resources, the kingdom can build only $k$ additional road(s), connecting any two villages in the network. The road(s) might:

- Connect two previously unconnected villages.
- Create a shortcut between two villages already linked indirectly.
- Form a ring by connecting a village to itself.

The new road(s) must be strategically chosen, as the patrol car is required to traverse it exactly once per day. The goal is to minimize the total patrol distance, ensuring that the region remains safe while saving resources and time.

As the kingdom’s most talented strategist, you are tasked with determining which single road to construct. The stakes are high: your decision will shape the future of Villagria’s patrol operations, ensuring safety while maintaining harmony in the land.

**Note that in this problem, $1\le k \le 2$.**

### Input format

The first line of input will include $2$ intergers $n$ and $k$, the number of villages and number of road(s) to be built.

Then follows $n$ lines. Each line contains $2$ intergers $x$ and $y$, meaning that there exists a path between village $x$ and village $y$.

### Output format

One interger representing the minimum length of patrol route.

### Sample input and output

###### Input #1

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

###### Output #1

```out
11
```

###### Input #2

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

###### Output #2

```out
10
```

###### Input #3

```in
5 2 
1 2 
2 3 
3 4 
4 5 
```

###### Output #3

```out
6
```

### Data size

For 100\% of the test data: $1 \le n \le 10^{5}$ and $1\le k\le 2$.
