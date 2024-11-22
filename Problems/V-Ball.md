# V-Ball

Difficulty: *****

Time limit: 1.50s

Memory limit: 250MB

## Background

As you know, at the beginning of this semester, UNNC organised a freshman V-Ball. And Cathy, an experienced senior, was tasked with arranging dance partners for the freshmen who attended as singles.

There were $N$ boys and $N$ girls attending the ball without finding a partner in advance, and each boy needed to be paired up with one girl to form a dancing couple eventually.

As a responsible senior, Cathy collected the relationships between these freshmen, noting whether they knew each other beforehand, and how close they were, representing this **level of closeness** as $a_{i,j}$.

She also needs to consider whether it is proper for two people to dance together, such as whether there will be a significant difference in their height and weight, and calculated this accordingly as $b_{i,j}$, indicating **the degree of discordance** when the \(i_{th}\) boy and \(j_{th}\) girl dance together.

To evaluating how "good" the overall result is, we have a real number $C$, and here's how we can calculate this:

In a scheme there are $n$ pairs of dance partners, assuming each pair's level of closeness is $a'_1,a'_2,...,a'_n$ respectively, and each pair's degree of discordance is $b'_1,b'_2,...,b'_n$ respectively, then:

$$
C=\frac {a'_1+a'_2+...+a'_n}{b'_1+b'_2+...+b'_n}
$$

Cathy wants a program inputting $a_{i,j}$ and $b_{i,j}$ and output the biggest $C$. Luckily for her, she got you here helping her out.

There are, of course, many other issues to consider, but you don't need to worry about those stuffs. Cathy will handle the additional details and further adjust the result herself. For now, she only wants to determine the upper limit of her scheme based on the current situation.

## Task

Your programme need to find and output the biggest $C$ given the provided data.

## Input format

The first line contains an integer $N$.

The next $N$ lines contain $N$ integers each, where the integer at the $i_{th}$ row and $j_{th}$ column is represented as $a_{i,j}$.

The following $N$ lines contain $N$ integers each, where the integer at the $i_{th}$ row and $j_{th}$ column is represented as $b_{i,j}$.

## Output format

Output a single number, representing the maximum value of $C$. The answer should be rounded to **6 decimal places**, and the contestant’s output must exactly match the standard output.

## Example #1

### Example Input #1

```in
3
19 17 16
25 24 23
35 36 31
9 5 6
3 4 2
7 8 9
```

### Example Output #1

```out
5.357143
```

## Tips

- For 10% of the test cases, $1 \le N \le 5$.
- For 40% of the test cases, $1 \le N \le 18$.
- For 100% of the test cases, $1 \le N \le 100$, and $1 \le a_{i,j}, b_{i,j} \le 10^4$.
