import tkinter as tk

from tkinter import filedialog, Text
import os

root = tk.Tk()

canvas = tk.Canvas(root, height = 700, width=700, bg="#263D42")
canvas.pack()

def testprint():
    print("Test button was pressed.")

def quitbutton():
    exit()

testbutton= tk.Button(root, text="This is a test button", width=12, bg='blue', fg='white', command=quit)
testbutton.place(x=150,y=380)

frame = tk.Frame(root, bg="white")
frame.place(relwidth=0.8, relheight=0.8, relx=0.1, rely=0.1)


root.mainloop()