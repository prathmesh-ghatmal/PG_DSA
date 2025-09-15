def find_sqrt(n):
    low=1
    high=n
    while low<=high:
        mid=low+(high-low)//2
        if mid*mid==n:
            return mid
        if mid*mid<n:
            ans=mid
            low=mid+1
        else:
            high=mid-1
    return ans

print(find_sqrt(50))