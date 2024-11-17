### Problem Description

Imagine you are Liu Baicen, the vice president of the Computer Psycho Union, and you are now responsible for arranging the list of presenters for weekly activities. This semester, there are a total of 8 weekly activities, with each activity having `n` people presenting (0<n<=5). The technical department has `x` members (x>=15), who are proficient in `y` different fields (x>y>5\). Each member is only proficient in one field, and each field must have at least one expert.

You want the presentation counts for each field and each individual to be as evenly distributed as possible, so a variance less than 1 can be considered a feasible solution. The variance can be calculated using the following formula:
$$
\text{Var}_x = \frac{1}{x} \sum_{i=1}^x (P_i - P_{\text{avg}})^2 ; \text{Var}_y =  \frac{1}{y} \sum_{j=1}^y (A_j - A_{\text{avg}})^2
$$
where:
$$
P_{\text{avg}} = \frac{8 \times n}{x}, \quad A_{\text{avg}} = \frac{8 \times n}{y}
$$
Additionally, in each activity, content from the same field will appear only once, and no individual will present more than once in the same activity. To ensure students get rest, no one will participate in two consecutive activities.

### Input Format

The first line contains three integers n, x, and y, representing the number of presenters in each weekly activity, the number of members in the technical department, and the number of fields they are proficient in. For example, `3 15 4` means each activity has 3 presenters, the technical department has 15 members, and they are proficient in 4 different fields.

The second line lists the fields each of these `x` members are proficient in, separated by spaces.

Example:

```
3 15 3 // 3 presenters per activity, 15 members in the technical department, proficient in 3 fields
1 2 3 1 2 3 1 2 3 1 2 3 1 2 3 
```

### Output Format

The first line of the output contains an integer representing the number of feasible scheduling solutions.

If there are no feasible schedules, output "0".

Example:

```
0
```

### Problem Constraints

Memory: 512 MiB

Time: 1000ms





