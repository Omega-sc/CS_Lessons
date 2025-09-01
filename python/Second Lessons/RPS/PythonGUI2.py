from tkinter import *
def click():
    print("DONT")
    
window = Tk()
label = Label(window, text="Welcome to my first app",  font=20, fg="#a1a9f4", bg="#000000" )
label2 = Label(window, text = "Ok so you did click me huh. Dont click again!!!")

label.place(x=0 , y=0)
window.geometry("400x500")
label.pack()

button = Button(window, text="Dont Click me")
button.config(command=click)
button.pack()
button.config(font='ariel')
window.mainloop()