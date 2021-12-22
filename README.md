# kth-student
CS141
This task is still based on the above setting - In CS141, there are 𝑛 students. In the online system, we have the final exam score for everyone. Your task is to write a program to help answer the query below: given 𝑘, please output the 𝑘-th highest distinct score. Note that there may be tie (multiple student may have the same score), and they only count as one distinct score. Also note that the highest score is viewed as the first, instead of the 0-th.

For example, if the scores of all students are:

97, 85, 99, 52, 85, 92, 85

Then, if 𝑘=2, then you should output the score of the second best student, which is 97. If 𝑘=5, you should output the score of the 5th highest distinct score, which is 52. Although there's a tie between the three students, the score 85 is viewed as the 4-th highest score. Then the 5th highest score is 52.

Your program needs to answer a series of 𝑚 such queries.
