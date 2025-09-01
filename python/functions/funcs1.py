"""def sum(x,y):    #------ reason why this here does not work is because i invoked the parameters from inside the function instead!!!!


    x = int(input("Pls enter a number: "));
    y = int(input("Pls enter the second number: "));
    #to calculate the sum after input
    print("The sum of two numbers is:", x+y);

print("this is a simple addition calculator in python:");
sum();"""


#fixed version

'''def sum(): 


    x = int(input("Pls enter a number: "))
    y = int(input("Pls enter the second number: "))
    #to calculate the sum after input
    print("The sum of two numbers is:", x+y)

print("this is a simple addition calculator in python:")
sum()
'''

#a cleaner version should have logic and input separate from each other to make the function reusable


def sum(x,y):
    return x+y;


print("***THIS IS A SIMPLE ADDITION CALCULATOR***")

x =int((input("Enter a number: ")))
y =int((input("Enter second number: ")))
print("The result is:", sum(x,y))







    
