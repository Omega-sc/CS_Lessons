#make a calculator that adds up the tax on an item and displays final values
item = input("Enter the name of your item: ")
cost = int(input("Enter the cost of your item: "))
tax = float(input("Enter the Tax Percentage applicable to the item: "))
tax_amt = cost*tax/100
final_price = cost + tax_amt
print("The value of your item is: " , final_price)
print("Thank you for shopping with us")

