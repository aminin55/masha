import turtle

pensil = turtle.Turtle()
pensil.ht()
pensil.pencolor('blue')
pensil.speed(250)

points = [[-350,-250],[0,350],[350,-250]] #size of triangle

def getMid(p1,p2):
    return ( (p1[0]+p2[0]) / 2, (p1[1] + p2[1]) / 2) #find midpoint

def triangle(points,depth):

    pensil.up()
    pensil.goto(points[0][0],points[0][1])
    pensil.down()
    pensil.goto(points[1][0],points[1][1])
    pensil.goto(points[2][0],points[2][1])
    pensil.goto(points[0][0],points[0][1])

    if depth>0:
        triangle([points[0],
                        getMid(points[0], points[1]),
                        getMid(points[0], points[2])],
                   depth-1)
        triangle([points[1],
                        getMid(points[0], points[1]),
                        getMid(points[1], points[2])],
                   depth-1)
        triangle([points[2],
                         getMid(points[2], points[1]),
                         getMid(points[0], points[2])],
                   depth-1)


triangle(points,5)
input()