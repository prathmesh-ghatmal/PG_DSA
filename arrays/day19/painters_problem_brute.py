def count_painters(boards,area):
    painter=1
    unit=0

    for i in range(len(boards)):
        if unit+boards[i]<=area:
            unit+=boards[i]
        else:
            painter+=1
            unit=boards[i]
    return painter

def painter_allocation(boards,k):
    low=max(boards)
    high=sum(boards)

    for i in range(low,high+1):
        if count_painters(boards,i)==k:
            return i
    

boards=[10, 20, 30, 40]
k=2

print(painter_allocation(boards,k))