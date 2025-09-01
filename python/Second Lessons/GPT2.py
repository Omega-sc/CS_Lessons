while True:
    number = int(input("Please enter a number: "))
    if number > 0 :
        break 
    else: 
        print("The number must be greater than 0. Please try again.")
        
list1 = []
        
while number> 0:
        print(number)

        list1.append(number) 
        print("Countdown history:" , list1)
   
        number -= 1
print("Countdown complete! Blast off!!")
 