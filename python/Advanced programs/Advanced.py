from tkinter import *
import random

# Setup the main window
window = Tk()
window.title("🎲 Random Number Generator Game")
window.geometry("500x400")
window.configure(bg="#aad1f3")  # Light blue background

# Game state variables
attempt = 0
running = True

# Styling constants
FONT_MAIN = ("Helvetica", 14)
FONT_BOLD = ("Helvetica", 16, "bold")
BTN_STYLE = {"font": FONT_MAIN, "bg": "#0A54B5", "fg": "white", "padx": 10, "pady": 5}

# UI Layout Frame
main_frame = Frame(window, bg="#aad1f3")
main_frame.pack(expand=True)

# Title
title_label = Label(main_frame, text="🎰 Try Your Luck!", font=("Helvetica", 20, "bold"), bg="#aad1f3", fg="#333")
title_label.pack(pady=15)

# Labels
attempt_label = Label(main_frame, text="Attempt Number: 0", font=FONT_MAIN, bg="#aad1f3")
attempt_label.pack(pady=5)

result_label = Label(main_frame, text="", font=FONT_MAIN, bg="#aad1f3")
result_label.pack(pady=5)

status_label = Label(main_frame, text="", font=FONT_BOLD, fg="blue", bg="#aad1f3")
status_label.pack(pady=10)

# Generate numbers logic
def generate_numbers():
    global attempt, running

    if not running:
        status_label.config(text="🔁 Game over. Press 'Play Again' to restart.")
        return

    i = random.randint(1, 100)
    j = random.randint(1, 100)
    product = i * j
    attempt += 1

    attempt_label.config(text=f"Attempt Number: {attempt}")
    result_label.config(text=f"🎯 Numbers: {i}, {j} | Product: {product}")

    if i == 100 and j == 100:
        if attempt <= 1000:
            status_label.config(text="🎉 Both numbers are 100!! YOU ARE LUCKY!!!!")
        else:
            status_label.config(text="🎉 Both numbers are 100!! But took over 1000 tries.")
        running = False
    elif attempt >= 1000:
        status_label.config(text="⚠️ 1000 attempts reached. No luck this time!")
        running = False

# Reset game logic
def reset_game():
    global attempt, running
    attempt = 0
    running = True
    attempt_label.config(text="Attempt Number: 0")
    result_label.config(text="")
    status_label.config(text="")

# Buttons
generate_button = Button(main_frame, text="🎲 Generate Numbers", command=generate_numbers, **BTN_STYLE)
generate_button.pack(pady=10)

reset_button = Button(main_frame, text="🔄 Play Again", command=reset_game, **BTN_STYLE)
reset_button.pack(pady=5)

# Start the GUI loop
window.mainloop()
