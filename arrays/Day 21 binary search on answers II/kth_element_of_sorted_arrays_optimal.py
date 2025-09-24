def find_kth_element(a,b,k):
    n1=len(a)
    n2=len(b)

    if n1==0 and n2==0:
        return -1
    if n1==0 and n2>k:
        return b[k-1]
    if n2==0 and n1>k:
        return a[k-1]
    
    if n1>n2:
        return find_kth_element(b,a,k)
    
    low=0
    high=min(k,n1)

    while low<=high:
        mid1=(low+high)//2
        print(mid1)
        mid2=k-mid1

        l1,l2,r1,r2=float('-inf'),float('-inf'),float('+inf'),float('+inf')

        if mid1<n1:
            r1=a[mid1]
        if mid2<n2:
            r2=b[mid2]
        if mid1-1>=0:
            l1=a[mid1-1]
        if mid2-1>=0:
            l2=b[mid2-1]

        if l1<=r2 and l2<=r1:
            return max(l1,l2)
        
        elif l1>r2:
            high=mid1-1
        else:
            low=mid1+1
a = [2, 3, 6, 7, 9]
b = [1, 4, 8, 10]

print(find_kth_element(a,b,5))