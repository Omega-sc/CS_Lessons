#to create a survey program

person_num = int(input("Enter the number of people participating in the survey: "))
list_child = []
list_teen = []
list_adult = []
list_s_c = []

while True:
    try:
        age = int(input("Please enter your age: "))
        if age <= 0:
            print("Please enter a valid age: ")
            continue
        
        if age <= 12:
            list_child.append(age)
        elif age <=17:
            list_teen.append(age)
        elif age <=59:
            list_adult.append(age)
        elif age >=60:
            list_s_c.append(age) 
            
            
    except ValueError:
        print("Please enter a valid age")
        continue
        
    if len(list_child) + len(list_teen) + len(list_adult) + len(list_s_c) == person_num:
      break

print("Survey complete!!! Printing restlts!")
print("Number of children: ", len(list_child))
print("Number of teens: ", len(list_teen))
print("Number of adults: ", len(list_adult))
print("Number of Senior Citizen: ", len(list_s_c))
print("Thank you for participating!!")



