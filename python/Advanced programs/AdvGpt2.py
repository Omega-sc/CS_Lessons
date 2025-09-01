import random

attempt = 0
running = True

while running:
    while True:
        i = random.randint(1, 100)
        j = random.randint(1, 100)
        attempt += 1
        product = i * j
        print(f"Attempt#: {attempt}, Numbers Selected: {i}, {j} and their product: {product}")

        if i == 100 and j == 100:
            print("Both Numbers are 100!! Stopping the inner loop")
            break

    if attempt < 1000:
        print("You are lucky!!!")

    play_again = input("Do you want to play again? (y/n): ").lower()
    if not play_again == "y":
        running = False
        print("Thanks for playing!")
        
