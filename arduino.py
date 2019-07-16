import serial as se
import tkinter as tk
set=se.Serial('COM5',9600)


a=0
def call(i):
     if i==1:
        global a
        
        if a==0:
            a=i
            print ("hello")
            set.write(b's')
        elif a!=0:
            a=0
            print ("bye")
            set.write(b'e')
        
     if  i==2:
        global lab
        #lab['text']="hello"   
        set.write(b't')
        str=set.readline()
        lab['text']=str
     if  i==3:
         set.write(b'r')
     if  i==4:
         set.write(b'l')
     if i==5:
         set.write(b'w')
root=tk.Tk()
root.title("ardino prject")
root.geometry("1360x768")

b_font = ('Fantasy',-40, 'bold italic')
button=tk.Button(root,text="left",font=b_font,bg="blue",fg="white",height=3,width=10,command=lambda:call(4))
button1=tk.Button(root,text="start",font=b_font,bg="blue",fg="white",height=3,width=10,command=lambda:call(1))
button2=tk.Button(root,text="right",font=b_font,bg="blue",fg="white",height=3,width=10,command=lambda:call(3))
button3=tk.Button(root,text="temperature",font=b_font,bg="blue",fg="white",command=lambda:call(2))
button4=tk.Button(root,text="reverse",font=b_font,bg="blue",fg="white",height=3,width=10,command=lambda:call(5))
l_font = ('Times',-30, 'bold underline')
lab=tk.Label(root,fg="yellow",font=l_font,bg='blue')
lab.place(x=900,y=50)

button.place(x=210,y=250)
button1.place(x=540,y=100)
button2.place(x=870,y=250)
button3.place(x=530,y=300)
button4.place(x=530,y=500)
#button.pady(24)
#button.pack()
root.mainloop()


