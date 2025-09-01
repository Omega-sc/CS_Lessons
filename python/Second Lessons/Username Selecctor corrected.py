username = input("Enter your username: ")

if len(username) > 12:
    print("Your username cannot have more than 12 characters!")

elif not username.find(" ") == -1 :
    print("Your username cannot have spaces!")
elif not username.isalpha == -1:
    print("Your username cannot have digits!")
    
else:
    print("Your username has been created!!!")
