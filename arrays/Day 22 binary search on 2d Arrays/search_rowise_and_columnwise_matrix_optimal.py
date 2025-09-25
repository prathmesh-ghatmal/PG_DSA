class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        rows=len(matrix)
        cols=len(matrix[0])
        row=0
        col=cols-1
        print (col)
        while row<rows and col>=0:
            print(row,col)
            current=matrix[row][col]
            if current==target:
                return True
            if current<target:
                row+=1
            else:
                col-=1
        return False
        