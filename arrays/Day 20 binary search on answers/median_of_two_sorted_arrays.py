def median_of_two_sorted_arrays(arr1,arr2):
    n1=len(arr1)
    n2=len(arr2)
    temp=[]

    left=0
    right=0
    median=0
    while left<n1 and right<n2:
        if arr1[left]<=arr2[right]:
            temp.append(arr1[left])
            left+=1
        else:
            temp.append(arr2[right])
            right+=1

    while left<n1:
        temp.append(arr1[left])
        left+=1

    while right<n2:
        temp.append(arr2[right])
        right+=1
        

    if n1+n2%2==0:
        avg=(n1+n2)/2
        median=(temp[avg]+temp[avg-1])//2
    else:
        avg=(n1+n2)//2
        return temp[avg]


    return median

a = [1, 4, 7, 10, 12]
b = [2, 3, 6, 15]

print(median_of_two_sorted_arrays(a,b))