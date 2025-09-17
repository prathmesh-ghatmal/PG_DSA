class Solution(object):
    def findKthPositive(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        """
        for i in range(len(arr)):
            if (arr[i]-i)-1>=k:
                rem=(arr[i-1]-(i-1))-1
                return arr[i-1]+(k-rem)
        n=len(arr)-1
        rem=arr[n]-n-1
        return arr[n]+(k-rem)
              
        