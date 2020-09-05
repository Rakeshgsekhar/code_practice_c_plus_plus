def towerOfHanoi(n,src_rod,to_rod,aux_rod):
    if n == 1:
        print("Move disk from "+src_rod+" to "+to_rod)
        return
    towerOfHanoi(n-1,src_rod,aux_rod,to_rod)
    print("Move "+str(n)+" from "+src_rod+" to "+to_rod)
    towerOfHanoi(n-1,aux_rod,to_rod,src_rod)

#n = 3
#towerOfHanoi(n,'A','C','B')


def towerOfHanoiStack(n,src_rod,to_rod,aux_rod):
    if n == 1:
        to_rod.append(src_rod.pop())
        return
    towerOfHanoiStack(n-1,src_rod,aux_rod,to_rod)
    to_rod.append(src_rod.pop())
    towerOfHanoiStack(n-1,aux_rod,to_rod,src_rod)


A=[4,3,2,1]
n = len(A)
B = []
C = []
print("Source Rode : ",end='')
print(A)
print("Destination Rode : ",end='')
print(C)
print("--------------------")
towerOfHanoiStack(n,A,C,B)
print("After recursion ")
print("******************")
print("Source Rode : ",end='')
print(A)
print("Destination Rode : ",end='')
print(C)
