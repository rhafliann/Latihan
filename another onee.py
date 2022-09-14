import turtle

def draw_square(square):

for i in range(0,2):

	square.forward(100)

	square.right(30)

	square.forward(100)

	square.right(150)
def draw_flower():

robopen = turtle.Turtle()

robopen.shape("turtle")
robopen.color("pink")



for i in range(0,36):

	draw_square(robopen)

	robopen.right(10)



for i in range(0,4):

	robopen.circle(50)

	robopen.right(90)

robopen.right(90)


robopen.color("green")


robopen.forward(300)

robopen.right(90)

draw_square(robopen)

robopen.left(180)

draw_square(robopen)

robopen.left(270)

robopen.forward(200)
draw_flower()