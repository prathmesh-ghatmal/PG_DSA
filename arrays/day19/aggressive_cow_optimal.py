def can_we_place_cow(stalls,dis,k):
    cnt=1
    last=stalls[0]
    for i in range (1,len(stalls)):
        if stalls[i]-last>=dis:
            last=stalls[i]
            cnt+=1
        if cnt>=k:
            return True
    return False

def aggressive_cow(stalls,k):
    stalls.sort()
    n=len(stalls)
    high=max(stalls)-min(stalls)
    low=1
    result=0
    while low<=high:
        mid=low+(high-low)//2
        if  can_we_place_cow(stalls,mid,k):
            result=mid
            low=mid+1
        else:
            high=mid-1
          
            
    return result

stalls = [0, 3, 4, 7, 10, 9]
k = 4
print(aggressive_cow(stalls, k))
