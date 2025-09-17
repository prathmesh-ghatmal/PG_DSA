class Solution(object):
    def splitArray(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if len(nums)==k:
            return max(nums)
        def is_possible(checksum):
            array=1
            cnt=0
            for i in range(len(nums)):
                if cnt+nums[i]<=checksum:
                    cnt+=nums[i]
                else:
                    array+=1
                    cnt=nums[i]
            return array

        low=max(nums)
        high=sum(nums)
        result=max(nums)
        while low<=high:
            mid=low+(high-low)//2
            if is_possible(mid)<=k:
                
                high=mid-1
            else:
                low=mid+1
                
        return low
            