# Displaying multiplication table of entered number


# Take the input from the user 
num = float(input("Enter the number - "))

# Iterating 10 times from i = 1 to 10
for i in range(1, 11):
   print(num, 'x', i, '=', num*i)
 