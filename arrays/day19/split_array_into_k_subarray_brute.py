class Solution(object):
    def splitArray(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        def is_possible(checksum):
            array=1
            cnt=0
            for i in range(len(nums)):
                if cnt+nums[i]<=checksum:
                    cnt+=nums[i]
                else:
                    array+=1
                    cnt=nums[i]
                if array>k:
                    return False
            if array==k:
                return True

        low=max(nums)
        high=sum(nums)

        for i in range(low,high+1):
            if is_possible(i):
                return i
        return max(nums)
            