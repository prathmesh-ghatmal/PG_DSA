def nth_root(m,n):
    low=1
    high=m
    while low<=high:
        mid=low+(high-low)//2
        if mid**n==m:
            return mid
        if mid**n<m:
            ans=mid
            low=mid+1
        else:
            high=mid-1
    return ans

        
        
print(nth_root(8, 3))   # Cube root of 8 → 2
print(nth_root(16, 4))  # 4th root of 16 → 2
print(nth_root(9, 2))   # Square root of 9 → 3
print(nth_root(50, 3))  # Cube root of 50 → 3
print(nth_root(1, 5))   # 5th root of 1 → 1


