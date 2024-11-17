## Background and Problem description

In UNNC, **n ducklings** have recently been born, and these ducklings need to undergo a series of special training sessions to improve their survival skills. For the **i-th duckling**, the cost for one training session is **p<sub>i</sub>** gold coins, and to become a qualified duckling, it needs at least **c<sub>i</sub>** training sessions.

To ensure the efficiency of the training, you (or your team) have been chosen as caretakers and have introduced a group training scheme. This scheme allows for a training session for each duckling, with a total cost of **S** gold coins (the group training scheme can be purchased multiple times, meaning the ducklings can undergo group training sessions multiple times).

As a responsible caretaker, please calculate the minimum amount of gold coins required to ensure that all the ducklings become qualified.

## Input format

The first line of input contains two integers, **n** and **S**, separated by a space, representing the number of ducklings and the cost of a group training session in gold coins.

The following **n** lines each contain two integers, **p<sub>i</sub>** and **c<sub>i</sub>**, separated by a space, indicating the cost of one training session in gold coins for the **i-th duckling** and the number of training sessions needed for the **i-th duckling** to become qualified.

## Output format

The output should consist of a single line containing one integer, representing the minimum number of gold coins needed to ensure that all the ducklings become qualified.


## Sample input and output

### Input
```
3 6
5 2
2 4
3 2
```
### Output
```
16
```

## Data size

For all test cases:
- **1 &le; n &le; $10^5$**
- **1 &le; p<sub>i</sub>, c<sub>i</sub> &le; $10^6$**
- **1 &le; S &le; $10^{10}$**