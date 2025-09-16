import math
class Solution(object):
    def smallestDivisor(self, nums, threshold):
        """
        :type nums: List[int]
        :type threshold: int
        :rtype: int
        """
     
        low=1
        high=max(nums)

        while low<=high:
            mid=low+(high-low)//2
            sum=0
            for j in nums:
                sum+=math.ceil(j/float(mid))
            if sum<=threshold:
                high=mid-1
            else:
                low=mid+1
        return low
