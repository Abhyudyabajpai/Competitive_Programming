#include <bits/stdc++.h>
using namespace std;
void getMin(int *a,int sum,int n,int index,int &min,int count)
{
if(sum == 0)
{
if(count < min)
{
min = count;
}
}
if(index>=n)
return;
if(a[index] <=sum)
{
getMin(a,sum-a[index],n,index,min,count+1);
getMin(a,sum,n,index+1,min,count);
}
else
{
getMin(a,sum,n,index+1,min,count);
}
}
int minn(int a,int b)
{
return a<b?a:b;
}
int main() {
//code
int c;
cin>>c;
for(int t=0;t<c;t++)
{
int v,n;
cin>>v>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}

int dp[n+1][v+1] = {0};
for(int i=0;i<=n;i++)
dp[i][0] = 0;
for(int i=1;i<=v;i++)
dp[0][i] = INT_MAX;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=v;j++)
{
//dp[i][j] = INT_MAX;
if(a[i-1] <= j)
{
if(dp[i][j-a[i-1]]!= INT_MAX)
dp[i][j] = minn(dp[i][j-a[i-1]]+1,dp[i-1][j]);
else
dp[i][j] = dp[i-1][j];
}
else
{
dp[i][j] = dp[i-1][j];
}
}
}
cout<<(dp[n][v]==INT_MAX?-1:dp[n][v])<<endl;
}
return 0;
}
