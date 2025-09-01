#to check the grade of a student
marks = int(input("Please enter your marks: "))
if marks > 100 or marks< 0:
    print("Invalid marks. Please enter a value between 0 and 100.")
elif marks >=90: 
    print("you got an A")
    
elif marks >=80:
    print("you got a B")
    
elif marks >=70:
    print("you got a C")
    
elif marks >=60:
    print("you got a D")
    
else :
    print("you got an F. Work Harder dude!")

