class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        rows=len(matrix)
        cols=len(matrix[0])
        for i in range(rows):
            low=0
            high=cols-1
            while low<=high:
                mid=(low+high)//2
                if matrix[i][mid]==target:
                    return True
                if matrix[i][mid]<target:
                    low=mid+1
                else:
                    high=mid-1

        return False
        