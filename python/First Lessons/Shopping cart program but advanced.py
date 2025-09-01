item = input("What would you like to buy: ")
price = float(input("What is the price: "))
quantity = int(input("How many would you like: "))
total_price = price*quantity


if quantity <= 1 :
 print(f"You have bought {quantity} x {item}")
 print("Your total is: " , total_price )

else :
 print(f"You have bought {quantity} x {item}s")
 print("Your total is: " , total_price )

