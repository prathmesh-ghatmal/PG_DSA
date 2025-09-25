class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        rows=len(matrix)
        col=len(matrix[0])
        low=0
        high=rows*col-1
        while low<=high:
            mid=low+(high-low)//2
            m=mid//col
            n=mid%col
            print(matrix[m][n])
            if matrix[mid//col][mid%col]==target:
                return True
            if matrix[mid//col][mid%col]<target:
                low=mid+1
                print(mid)
            else:
                high=mid-1         
        return False