#a program that:
#Asks the user how many numbers they want to enter (e.g., 5).
#Collects that many numbers from the user into a list.
#After collection, prints:
#The full list
#The maximum number
#The minimum number
#The sum of all numbers
#The average (mean) of the numbers

list1=[]
while True:
    try:
        list_len = int(input("Please enter the number of items you want to add in the list: "))
        if list_len <= 0:
            print("Please enter a positive integer.")
            continue
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
        



while True:
    try: 
        numbers = int(input("Please enter a number: "))
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
        continue
        
    list1.append(numbers)
    if len(list1) >= list_len:
     break
print(list1)
print("The largest number in list is:", max(list1))
print("The smallest number in list is:" , min(list1))
print("The sum of the numbers in list is:" ,sum(list1))
print("The average of the numbers in list is:" ,sum(list1)/len(list1))