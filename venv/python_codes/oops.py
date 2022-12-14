class Mobile:
    var=20
    def __init__(self,price,color):
        self.price=price
        self.color=color
    def display():
        print("it is local fun in class")

m1=Mobile(50000, "black")
m2=Mobile(60000, "red")
m1.display()