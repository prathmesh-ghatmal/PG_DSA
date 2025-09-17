def count_painters(boards,time):
    painters=1
    unit=0
    for i in range(len(boards)):
        if unit+boards[i]<=time:
            unit+=boards[i]
        else:
            painters+=1
            unit=boards[i]
    return painters

def painter_allocation(boards,k):
    low=max(boards)
    high=sum(boards)

    while low<=high:
        mid=low+(high-low)//2
        if count_painters(boards,mid)>k:
            low=mid+1
        else:
            high=mid-1
    return low

boards=[10, 20, 30, 40]
k=2

print(painter_allocation(boards,k))
