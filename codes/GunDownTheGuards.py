from math import atan2,sqrt

def coordinates_atan(node, dimensions, distance):
    nodes= []
    for i in range(len(node)):
        points = []
        for j in range(-(distance // dimensions[i])-1, (distance//dimensions[i]+2)):
            points.append(mirror_coordinates(j,node[i],dimensions[i]))
        nodes.append(points)
    return nodes

def mirror_coordinates(mirror,coordinates, dimensions):
    result = coordinates
    mirror_rotation = [2*coordinates,2*(dimensions-coordinates)]
    if mirror < 0:
        for i in range(mirror,0):
            result -= mirror_rotation[(i+1)%2]
    else:
        for i in range(mirror,0,-1):
            result += mirror_rotation[i%2]

    return result

def solution(dimensions, your_position, guard_position, distance):
    #Your code here
    mirrored = [coordinates_atan(your_position,dimensions,distance),coordinates_atan(guard_position,dimensions,distance)]
    countDirections = set()
    angles_dist = {}
    for i in range(0,len(mirrored)):
        for j in mirrored[i][0]:
            for k in mirrored[i][1]:
                beam = atan2((your_position[1]-k),(your_position[0]-j))
                linedistance = sqrt((your_position[0]-j)**2 + (your_position[1]-k)**2)
                if [j,k] != your_position and distance >= linedistance:
                    if((beam in angles_dist and angles_dist[beam] > linedistance) or beam not in angles_dist):
                        if i == 0:
                            angles_dist[beam] = linedistance
                        else:
                            angles_dist[beam] = linedistance
                            countDirections.add(beam)
    return len(countDirections)


print(solution([3,2], [1,1], [2,1], 4))
