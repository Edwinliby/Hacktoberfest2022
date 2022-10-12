neg_count=0
neg_s=0
pos_count=0
pos_s=0
print("Enter -1 to exit")
num=int(input("Enter the number:"))
while(num!=-1):
    if(num<0):
        neg_count=neg_count+1
        neg_s=neg_s+num
    else:
        pos_count=pos_count+1
        pos_s=pos_s+num
    num=int(input("Enter the number:"))
neg_avg=float(neg_s)/neg_count
pos_avg=float(pos_s)/pos_count
print("The avg of negative number is :",neg_avg)
print("The avg of postive number is :",pos_avg)