

import random
options = ( "rock"  ,'paper' , 'scissor')
running = True
while running == True:


 computer = random.choice(options)
 player = None

 while player not in options:
   
   player = input("Enter your choice (rock, paper or scissor): ")
   if not player == options:
      print("Please enter a valid choice:")


   print(f"Player={player}")
   print(f"Computer={computer}")


   if player == computer:
      print("Tie!!!")
       
   elif player == "rock" and computer == "paper":
      print("You Lose!!!!")

   elif player == "rock" and computer == "scissor":
      print("You win!!!")
      
   elif player == "paper" and computer == "rock":
      print("You Win!!!")
      
   elif player == "paper" and computer == "scissor":
      print("You lose!!!")
      
   elif player == "scissor" and computer == "paper":
      print("You win!!!")
      
   elif player == "scissor" and computer == "rock":
      print("You lose")
   running == False
   
   play_again = input("Wanna play again? (y/n)").lower()
   
   if play_again == "n":
      running == False
      print("Thank you for playing:")
      
