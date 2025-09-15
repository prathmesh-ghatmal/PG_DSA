import math
def find_max(piles):
    maxi=int("-inf")
    for i in range (len(piles)):
        maxi=max(maxi,piles[i])
    return maxi
def find_hourly(piles,h):
    total=0
    for i in range(len(piles)):
        total+=math.ceil(piles[i]/h)
    return total


def koko_eats_banana(piles,h):
    max=find_max(piles)

    for i in range(1,max+1):
        req=find_hourly(piles,i)
        if req<=h:
            return i
        
v = [3,6,7,11]
h = 8

print(koko_eats_banana(v,h))