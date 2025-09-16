class Solution(object):
    def minDays(self, bloomDay, m, k):
        """
        :type bloomDay: List[int]
        :type m: int
        :type k: int
        :rtype: int
        """
        n=len(bloomDay)
        if m*k>n:
            return -1
        def possible(day):
            cnt=0
            nobof=0
            for i in bloomDay:
                if i<=day:
                    cnt+=1
                else:
                    if nobof>=m:
                        return True
                    nobof+=cnt//k
                    cnt=0     
            nobof+=cnt//k
            return nobof>=m

  

        low=min(bloomDay)
        high=max(bloomDay)

        while low<=high:
            mid=low+(high-low)//2

            if possible(mid):
                high=mid-1
            else:
                low=mid+1

        return low

      
    
