class Solution(object):
    def shipWithinDays(self, weights, days):
        """
        :type weights: List[int]
        :type days: int
        :rtype: int
        """
        def find_days(capacity):
            day=1
            load=0

            for i in weights:
                if load+i>capacity:
                    day+=1
                    load=i
                else:
                    load+=i
            return day

        low=max(weights)
        high=sum(weights)+1

        while low<=high:
            mid=low+(high-low)//2

            day=find_days(mid)
            if day<=days:
                high=mid-1
            else:
                low=mid+1
        return low
           
            
