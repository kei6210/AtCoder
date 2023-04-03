import time

t1 = time.time()
# 累積和
a=list(range(1,30))
a2=[0]
for i in a:a2.append(a2[-1]+i)
print(a2)
t2 = time.time()
print(t2-t1)

#DP1
n=6
w=8
weight=[2,1,3,2,1,5]
value=[3,2,6,1,3,85]

dp=[[0 for i in range(w+1)] for j in range(n+1)]
for i in range(n):
    for j in range(w+1):
        if j>=weight[i] : dp[i+1][j]=max(dp[i][j-weight[i]]+value[i],dp[i][j])
        else: dp[i+1][j]=dp[i][j]
    print(dp[:i+2])
print(dp[n][w])