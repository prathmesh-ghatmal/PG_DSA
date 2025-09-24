def find_row_with_max_1(a):
    max=-1
    ans=-1

    for i in range(len(a)):
        cnt=sum(a[i])
        if cnt>max:
            ans=i
            max=cnt
       
    return ans

matrix = [[1, 1, 1], [0, 0, 1], [0, 0, 0]]

print(find_row_with_max_1(matrix))