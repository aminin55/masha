import turtle

def pif(depth):
	if depth == 1:
		return ["1"]

	else:
		row=pif(depth-1)
		tmp=["1"]
		for i in range(0,depth-2):
			tmp.append ( str( int(row[i])+int(row[i+1]) ) )
		tmp.append("1")
		return tmp

def pr_str(row,fSize):
	for i in range(0,len(row)):
		if (int(row[i])%2==0):
			pensil.pencolor('blue')
		else:
			pensil.pencolor('red')

		pensil.write(row[i], font=("Arial", fSize-2, "normal"))
		pensil.up()
		pensil.goto(pensil.xcor()+fSize*2,pensil.ycor())

pensil = turtle.Turtle()
turtle.screensize(800,800)
pensil.ht()
pensil.pencolor('blue')
pensil.speed(250)

for i in range(1,60):
	pensil.up()
	pensil.goto(0-i*8,400-i*10)
	pensil.down()
	pr_str(pif(i),8);


input()