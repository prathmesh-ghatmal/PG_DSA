def find_kth_element(a,b,k):
    left=0
    right=0
   
    for i in range(1,k+1):
        if i==k:
            if a[left]<=b[right]:
                return a[left]
            else:
                return b[right]
        else:
            if a[left]<=b[right]:
                left+=1
            else:
                right+=1
    return -1

a = [2, 3, 6, 7, 9]
b = [1, 4, 8, 10]

print(find_kth_element(a,b,5))