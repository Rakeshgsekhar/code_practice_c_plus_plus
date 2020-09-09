def isValid(screen,m,n,x,y,oldColor,newColor):
    if x<0 or x>=m or y<0 or y>=n or screen[x][y] != oldColor or screen[x][y] == newColor:
        return False
    return True
def floodFill(screen,m,n,x,y,oldColor,newColor):
    memo = []
    memo.append([x,y])
    screen[x][y] = newColor;

    while memo:
        currentPixel= memo.pop()
        posX = currentPixel[0]
        posY = currentPixel[1]

        if isValid(screen,m,n,posX+1,posY,oldColor,newColor):
            screen[posX+1][posY] = newColor
            memo.append([posX+1,posY])
        if isValid(screen,m,n,posX-1,posY,oldColor,newColor):
            screen[posX-1][posY] = newColor
            memo.append([posX-1,posY])
        if isValid(screen,m,n,posX,posY+1,oldColor,newColor):
            screen[posX][posY+1] = newColor
            memo.append([posX,posY+1])
        if isValid(screen,m,n,posX,posY-1,oldColor,newColor):
            screen[posX][posY-1] = newColor
            memo.append([posX,posY-1])

screen = [ 
[1, 1, 1, 1, 1, 1, 1, 1],  
[1, 1, 1, 1, 1, 1, 0, 0],  
[1, 0, 0, 1, 1, 0, 1, 1],  
[1, 2, 2, 2, 2, 0, 1, 0],  
[1, 1, 1, 2, 2, 0, 1, 0],  
[1, 1, 1, 2, 2, 2, 2, 0],  
[1, 1, 1, 1, 1, 2, 1, 1],  
[1, 1, 1, 1, 1, 2, 2, 1],  
    ]

#print(screen)

m = len(screen)
n = len(screen[0])
for i in range(m): 
    for j in range(n): 
        print(screen[i][j], end =' ') 
    print() 
floodFill(screen,m,n,4,4,screen[4][4],3)
print()
print()
print()
print()
print() 
    
for i in range(m): 
    for j in range(n): 
        print(screen[i][j], end =' ') 
    print() 
