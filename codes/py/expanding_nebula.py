def findSol(g, a=0, b=0, past=0, solutions={}, history=[]):
    if past == 0:
        past = [[True]*(len(g[0])+1) for i in range(len(g)+1)]
        solution = {}
        history = []

    if b == len(g[0])+1 :
        return True
    res = 0
    index = ((a,b),tuple(history[-(len(g)+2):]))

    if index in solutions:
        return solutions[index]

    for cell in [True,False]:
        if (not a or not b) or len(set([((past[a][b-1] + past[a-1][b] + past[a-1][b-1]+cell) == 1),g[a-1][b-1]])) == 1:
            history.append(cell)
            past[a][b] = cell
            res += findSol(g,a=(a+1)%(len(g)+1),b=b+(a+1)//(len(g)+1),past = past,solutions=solutions,history=history)
            history.pop()

    solutions[index] = res

    return res
def solution(g):
    # Your code here
    result = findSol(g)
    return result

print(solution([[True, False, True], [False, True, False], [True, False, True]]))
