while True:
    try:
        age = int(input("Please enter your age: "))
        if age <= 0 :
            print("Please enter a valid age: ")
            continue
        break
    except ValueError:
        print ("Please enter a valid age: ")
    
if age <= 12:
    print("You're a child")
elif age <17:
        print("Youre a teen")
elif age >=18:
        print("Youre an adult")
elif age >= 60:
        print("Youre a senior citizen")
