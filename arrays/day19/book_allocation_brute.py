def count_students(books,pages):
    student=1
    pagestostudent=0
    for i in range(len(books)):
        if pagestostudent+books[i]<=pages:
            pagestostudent+=books[i]
        else:
            student+=1
            pagestostudent=books[i]
    return student

def book_allocation(books,k):
    n=len(books)
    if n<k:
        return -1
    high=sum(books)

    if k==1:
        return high
    low=max(books)
    

    for i in range(low,high+1):
        if count_students(books,i)==k:
            return i
        
arr= [12, 34, 67, 90]
k=2

print(book_allocation(arr,k))
