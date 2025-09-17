def can_we_place_cow(stalls,dist,k):
    cnt=1
    last=stalls[0]
    for i in range(1,len(stalls)):
        if stalls[i]-last>=dist:
            last=stalls[i]
            cnt+=1
        if cnt>=k:
            return True
    return False

def aggressive_cows(stalls,k):
    stalls.sort()
    n=len(stalls)
    if n<k:
        return -1
    
    limit=max(stalls)-min(stalls)

    for i in range(1,limit+1):
        if not can_we_place_cow(stalls,i,k):
            return i-1
    return limit

stalls = [0, 3, 4, 7, 10, 9]
k = 4
print(aggressive_cows(stalls, k))


