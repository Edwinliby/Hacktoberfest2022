n = 153 ; temp = n; p = 0

# function to calculate
# the sum of individual digits
while (n >0):
    rem = n % 10
    p = (p) + (rem * rem * rem)
    n = n // 10
if temp == p:
    print("armstrong")
else:
    print("not a armstrong number")
