def median_of_two_sorted_arrays(a,b):
    n1=len(a)
    n2=len(b)
    avg=(n1+n2)//2
    left=0
    right=0
    if (n1+n2)%2==0:
        first=0
        second=0
        for i in range(avg+1):
            if a[left]<=b[right]:
                if i == (avg-1):
                    first=a[left]
                if i==avg:
                    second=a[left]
                left+=1
            else :
                if i == (avg-1):
                    first=b[right]
                if i==avg:
                    second=b[right]
                right+=1
        return (first+second)/2
    else:
        for i in range(avg+1):
            if a[left]<=b[right]:
                if i==avg:
                    first=a[left]
                left+=1
            else:
                if i==avg:
                    first=b[right]
                right+=1

        return first
    
a = [1, 4, 7, 10, 12]
b = [2, 3, 6, 15]
print(median_of_two_sorted_arrays(a,b)) 

        
