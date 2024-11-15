# FlingLikFullOfVim

Difficulty: ******

Time limit: 2.00s

Memory limit: 512MB

## Background

Ernest Vincent Wright was an American author, known for writing a novel (Gadsby) without using the letter **“e”**. Bertram Liu is a big fan of Ernest and tries to imitate him in writing a novel, but is looking for a real challenge. He uses only the first ten characters of the alphabet (namely abcdefghij).

Ironically, the “e” key on his computer breaks halfway through the novel, and for consistency, he decides to delete all the “e”s he has already written. His friend, a programmer, recommended him to use the text editor Vim to perform this task. Unfortunately, Bertram is not very familiar with Vim, and knows only three different commands: **“x”**, **“h”** and **“f”**.

- **“x”** deletes the character at the cursor. The cursor position (counted from the left) does not change. Bertram shall not use this command if the cursor is at the last character of the document.
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

## Task

Write a program that calculates the least number of key presses that Bertram needs to use to delete all the **“e”s** in the document, but no other letters. Initially, the cursor is at the first character of the document.

## Input

The first line contains the integer \( N\), the length of the document. The next line contains N characters,
each one of the ten lowercase letters from **“a”** to **“j”**. The first and the last letter of the input are both different from **“e”**.

## Output

The only line of output should contain exactly one integer \( T \): the least number of key presses Bertram needs to delete all the **“e”s**.

## Example

### Example Input #1

```in
35
chefeddiefedjeffeachbigagedegghehad
```

### Example Output #1

```out
36
```

## Tips

An optimal solution for the example test case is:

```text
fdhxhhxffhxfahxhhhxhhhxfdhxfghxfahhx
```

You can test this by starting the Vim editor yourself (type **“vim 1.txt”** at the command prompt to open **1.txt**, type **“:q\<ENTER\>”** to quit).

## Constraints

- For 50% of the test cases, \( N \le 500 \).
- For 60% of the test cases, \( N \le 5000 \).
- For 100% of the test cases, \( N \le 70000 \).

## For ya

In actual cases where \( T \ge 14 \), this is more likely to be efficient (not counting the \<Shift\> key):

```text
:%s/\%d101//g<Enter>
```

Ah, but alas, poor Bertram was unaware of this clever workaround, that's a pity. But let’s remain optimistic — perhaps soon he’ll stumble upon these knowledge and become a true Vim master!
