#create a small program to accept valid usernames as user input
#Conditions being- no more than 12 characters
# no spaces or characters 
#no digits


username = input("Enter your username: ")
if len(username) > 12 :
   print("Your username must contain no more than 12 digits")
   username.find(" ") == 1
   print("Your username must not contain spaces")
   username.find("1") == 1 
   username.find("2") == 1 
   username.find("3") == 1
   username.find("4") == 1
   username.find("5") == 1
   username.find("6") == 1
   username.find("7") == 1
   username.find("8") == 1
   username.find("9") == 1 
   
   print("Your username cannot contain digits")
else:
    print("Your username has been created!!")    
    


#why this code is wrong
#because it prints all statements if one is found to be true
#this is why you have to use elif not

