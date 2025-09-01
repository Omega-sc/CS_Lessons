#import random
#choices = {1,2,3,4,5,6}
#i = random.choice(choices)
#j = random.choice(choices)
#print(i*j


# The code you've posted will raise an error because you're using a set for choices, and random.choice() expects a sequence (like a list or tuple), not a set.
# Use [] instead of {}
import random
A = [1,2,3,4,5,6]
i = random.choice(A)
j= random.choice(A)
print(i*j) 