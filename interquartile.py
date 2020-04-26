#finding interquartile range
n=int(input())
x=list(map(int, input().split(" ")))
f=list(map(int, input().split(" ")))
s=[]
for j in range(n):
    for i in range(f[j]):
        s.append(x[j])
s.sort()
l=len(s)
def median(array,m):
    if m%2==0:
        median=(array[m//2-1]+array[(m//2)])/2
    else:
        median=array[m//2]
    return round(median)
q1=median(s,l//2)
if l%2==0:
    q2=median(s[l//2:],l//2)
else:
    q2=median(s[l//2+1:],l//2)
print(round(float(q2-q1),1))
