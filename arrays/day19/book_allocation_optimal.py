def count_students(books,pages):
    student=1
    pagecount=0
    for i in range(len(books)):
        if pagecount+books[i]<=pages:
            pagecount+=books[i]
        else:
            student+=1
            pagecount=books[i]
    return student

def book_allocation(books,k):
    n=len(books)

    if n<k:
        return -1
    
    if k==1:
        return sum(books)
    
    low=max(books)
    high=sum(books)

    while low<=high:
        mid=low+(high-low)//2
        if count_students(books,mid)<=k:
            high=mid-1
        else:
            low=mid+1

    return low

arr= [12, 34, 67, 90]
k=2

print(book_allocation(arr,k))