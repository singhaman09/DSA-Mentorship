import numpy as np 
import matplotlib.pylab as plot 

#initialize variables 
#velocity, gravity
v = 30 
g = -9.8 
#increment theta 25 to 60 then find  t, x, y
#define x and y as arrays 
theta = np.arange(25,65,5)   

t = ((2 * v) * np.sin(theta)) / g #the total time projectile remains in the #air
t1 = np.array(t) #why are some negative 



x = ((v * t1) * np.cos(theta))
y = ((v * t1) * np.sin(theta)) - ((0.5 * g) * (t ** 2))

plot.plot(x,y)
plot.show()