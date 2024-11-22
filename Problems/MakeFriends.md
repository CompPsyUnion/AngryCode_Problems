# Let's make friends ***!***

## Background and Problem description

After going through numerous hardships, the duckling finally arrived at DB and met the cat and her display case of diamonds. However, an awkward situation arose: they couldn't understand each other's language (duckling: Quack? Quack?  cat: Meow? Meow?), which made communication difficult.

To solve this problem, they found a dictionary to help them understand what the other was saying. The rules for using the dictionary are as follows: the dictionary contains only two lines (one for each animal's language), and we know that the information expressed in the second line is a substring of the first line. Your task is to act as a translator and find the first position where the information from the second line appears in the first line.

## Input format

The first line of input contains the message described in a certain language. This message will not contain more than $10^6$ characters. There will be exactly one whitespace between adjacent words, and the end of the line will be marked with **\$**. Characters after **\$** will not be considered part of the message.

The following line contains the sentence described in another language, which we need to find in the first line. This sentence will also not be longer than $10^6$ characters and will follow the same format as described above.

Except for the last character \$, all other characters are English letters and spaces.

## Output format

Output the position where the sentence from the second line first appears in the message from the first line.
**Solution will always exist.**

## Sample input and output

### Input

```in
miao meow meow woof hello $
ga quack moo $
```

### Output

```out
3
```

## Data size

Those specific value ranges can be found above.
