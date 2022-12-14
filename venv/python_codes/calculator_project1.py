from tkinter import *
def sum2():
	a=int(t1.get())
	b=int(t2.get())
	c=a+b
	l=len(t3.get())
	t3.delete(0,l)
	t3.insert(0,c)
def product2():
	a=int(t1.get())
	b=int(t2.get())
	c=a*b
	l=len(t3.get())
	t3.delete(0,l)
	t3.insert(0,c)
def divide2():
	a=int(t1.get())
	b=int(t2.get())
	c=a/b
	l=len(t3.get())
	t3.delete(0,l)
	t3.insert(0,c)
def modulus2():
	a=int(t1.get())
	b=int(t2.get())
	c=a%b
	l=len(t3.get())
	t3.delete(0,l)
	t3.insert(0,c)
def subtract2():
	a=int(t1.get())
	b=int(t2.get())
	c=a-b
	l=len(t3.get())
	t3.delete(0,l)
	t3.insert(0,c)
def clear2():
	c=0
	l=len(t3.get())
	t3.delete(0,l)
	t3.insert(0,c)


w=Tk()
w.configure(background="light blue")
w.geometry("100x400")  
w.title("test")  
label = Label(w, text = "CALCULATOR", bg = "green", bd = 60, fg = "white", font = "Castellar")  
label.pack()

l1=Label(w, text="enter first no",font = "Castellar")
l1.pack()
t1=Entry(w)
t1.pack()

l2=Label(w, text="enter second no",font = "Castellar")
l2.pack()
t2=Entry(w)
t2.pack()
b1=Button(w, text="sum", bg="purple", fg="pink", font = "Castellar", command=sum2)
b2=Button(w, text="product", bg="purple", fg="pink", font = "Castellar", command=product2)
b3=Button(w,text='divide',bg='purple',fg='pink', font = "Castellar",command=divide2)
b4=Button(w,text='modulus',bg='purple',fg='pink', font = "Castellar",command=modulus2)
b5=Button(w,text='subtract',bg='purple',fg='pink' ,font = "Castellar",command=subtract2)
b1.pack()
b2.pack()
b3.pack()
b4.pack()
b5.pack()

l3=Label(w, text="Result",font = ("Times", "24", "bold"))
l3.pack()
t3=Entry(w)
t3.pack()

b6=Button(w,text='clear',bg='purple',fg='pink', font = "Castellar",command=clear2)
b6.pack()
w.mainloop()