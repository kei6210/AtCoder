import random

#ワーシャルフロイト法
n=int(input())
c=[[random.randint(1, 10) for i in range(n)] for i in range(n)]
for i in c:
    print(i)
# for k in range(n):
#     for i in range(n):
#         for j in range(n):
#             c[i][j]=min(c[i][j],c[i][k]+c[k][j])
# for i in c:
#     print(i)

from scipy.sparse.csgraph import floyd_warshall 
cost=floyd_warshall(c)
print(cost)