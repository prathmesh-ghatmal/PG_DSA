def lowerbound(a,k,n):
    low=0
    high=len(a)-1
    ans=n
    while low<=high:
        mid=low+(high-low)//2

        if a[mid]>=k:
            ans=mid
            high=mid-1
        else:
            low=mid+1
    return ans


def find_row_with_max_1(a,m,n):
    maxi=0
    ans=-1

    for i in range(len(a)):
        cnt=m-lowerbound(a[i],1,m)

        if cnt>maxi:
            maxi=cnt
            ans=i
    print("this is",ans)
    return ans

matrix = [[1, 1, 1], [0, 0, 1], [0, 0, 0]]

print(find_row_with_max_1(matrix,3,3))
