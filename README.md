# kth-student
CS141
This task is still based on the above setting - In CS141, there are 𝑛 students. In the online system, we have the final exam score for everyone. Your task is to write a program to help answer the query below: given 𝑘, please output the 𝑘-th highest distinct score. Note that there may be tie (multiple student may have the same score), and they only count as one distinct score. Also note that the highest score is viewed as the first, instead of the 0-th.

For example, if the scores of all students are:

97, 85, 99, 52, 85, 92, 85

Then, if 𝑘=2, then you should output the score of the second best student, which is 97. If 𝑘=5, you should output the score of the 5th highest distinct score, which is 52. Although there's a tie between the three students, the score 85 is viewed as the 4-th highest score. Then the 5th highest score is 52.

Your program needs to answer a series of 𝑚 such queries.

Input
The first line is a single integer 𝑛 (1≤𝑛≤1000). In the next line, there are 𝑛 integers, which are the scores of the 𝑛 students. All the scores are between 0 to 106.

In the third line, there is an integer 𝑚 (1≤𝑚≤105), which is the number of queries you need to answer. In the next 𝑚 lines, each line contains a value 𝑘𝑖 𝑖=1..𝑚, which is the value of 𝑘 (the rank) of such a query.

Output
There should be 𝑚 lines in the output. The 𝑖-th line contains the answer for the 𝑖-th query, which is the 𝑘𝑖-th highest distinct score.
