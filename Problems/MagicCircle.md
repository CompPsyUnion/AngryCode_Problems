# Magic Circle

Difficulty: \*\**\*\*

Time limit: 1.00s

Memory limit: 128MB

## Background

In a mystical land filled with magical energy, there exists a **Crystal Forest** containing \( N \) crystal stones. The position of each crystal stone is given by its coordinates \((x_i, y_i)\). The Grand Mage wants to draw a minimal magic circle (circular barrier) to protect all the crystal stones. The magic circle must enclose all the crystal stones, and no stone can lie outside the circle.

The Grand Mage aims to use the least energy, so the circle must be the smallest possible.

## Task

Your task is to help the Grand Mage find this minimal magic circle and determine its **radius** and **center coordinates**.

## Input

The first line contains an integer \( N \), representing the number of crystal stones.

The next \( N \) lines each contain two real numbers \( x_i \) and \( y_i \), representing the coordinates of the \( i_{th} \) crystal stone, with up to two decimal places.

## Output

The first line of output should contain a real number, representing the radius of the magic circle.

The second line of output should contain two real numbers, representing the coordinates of the circle's center.

Your answer is considered correct if all the outputs' absolute error does not exceed \( 10^{-9} \).

## Example

### Example Input #1

```in
6
8.0 9.0
4.0 7.5
1.0 2.0
5.1 8.7
9.0 2.0
4.5 1.0
```

### Example Output #1

```out
5.0000000000
5.0000000000 5.0000000000
```

## Constraints

During the process of drawing the magic circle, all the data satisfies:

- \( 1 \leq N \leq 10^5 \)
- \( |x_i|, |y_i| \leq 10^4 \)
