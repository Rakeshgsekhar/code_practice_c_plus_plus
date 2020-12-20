def getMostVisited(n, sprints):
    # Write your code here
    inc = [0 for i in range(n+2)]
    for i in range(len(sprints)):
        start = min(sprints[i],sprints[i+1])
        end = max(sprints[i],sprints[i+1])
        inc[start ] =inc[start] + 1
        inc[end+1] =inc[end+1] - 1
    
    scores = {}
    score = 0
    for i in range(1,n+1):
        score = score + inc[i]
        scores[i] = score
    
    res = max(scores,key = scores.get)
    print (inc)
    print (scores)
    return res

getMostVisited()