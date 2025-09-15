def find_sqrt(n):
    for i in range(1,n):
        if i*i<=n:
            ans=i
        else:
            return ans
        
print(find_sqrt(37))