
## Background and Problem description

After a series of training sessions, the ducklings have grown significantly. One day, they decided to visit the cat living next to DB (they heard that this cat has recently been playing with some shiny objects).

There is a river between the two places, so the ducklings plan to jump across the stones in the river to reach the other side. Since this is a very dangerous task, only one duckling will be chosen to visit the cat (due to their caretakers' extreme stinginess with their gold coins, none of them can swim or fly).

The stones in the river are arranged in a straight line, and each jump the duckling makes must land on a stone or on the shore. However, each stone has a certain height, and every time a duckling jumps from a stone, the height of that stone decreases by 1. When the height of a stone drops to 0, the duckling can no longer land on it (though making a jump that causes the stone's height to drop to 0 is allowed).

The duckling needs to visit the cat's house **x** times, meaning it must make **2x** round trips. When a duckling has a jumping ability **y**, it can jump a maximum distance of **y**. 

What is the minimum jumping ability the duckling must have to use these stones to complete the **x** visits? (Those stingy caretakers should be criticized once again!)


## Input format

The first line of input contains two integers, **n** and **x**, representing the width of the river and the number of times the duckling needs to visit. Note that **2x** is the actual number of times the river must be crossed.

The second line contains **n-1** non-negative integers **H<sub>1</sub>, H<sub>2</sub>, ..., H<sub>n-1</sub>**, where **H<sub>i</sub> > 0** indicates that there is a stone at a distance of **i** from the duckling's home with a height of **H<sub>i</sub>**, and **H<sub>i</sub> = 0** means there is no stone at that position.


## Output format

Output a single line containing one integer, representing the minimum jumping ability required for the duckling.

(Poor duckling, bad caretakers (¨s¨‰Ãó¨‰)¨s)

## Sample input and output

### Input
```
5 1
1 0 1 0
```
### Output
```
4
```

## Data size

For all test cases:
- **1 &le; n &le; 10<sup>5</sup>**
- **1 &le; x &le; 10<sup>9</sup>**
- **0 &le; H<sub>i</sub> &le; 10<sup>4</sup>**

