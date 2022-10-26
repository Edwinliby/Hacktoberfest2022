def insertion_sort(l):
 for i in range(1,len(l)):
  temp=l[i]
  j=i-1
  while(j>=0 and temp<l[j]):
   l[j+1]=l[j]
   j=j-1
  l[j+1]=temp
 print(l)


l=list(map(int,input().split()))
insertion_sort(l)
