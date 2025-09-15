class Solution:
    def singleNonDuplicate(self, nums):
        if len(nums) == 1:
            return nums[0]
        if nums[0] != nums[1]:
            return nums[0]
        if nums[-1] != nums[-2]:
            return nums[-1]
        
        low = 2
        high = len(nums) - 2
        
        while low <= high:
            mid = low + (high - low) // 2
            
            if nums[mid] != nums[mid - 1] and nums[mid] != nums[mid + 1]:
                return nums[mid]
            
            if mid % 2 == 0:
                if nums[mid] == nums[mid + 1]:
                    low = mid + 1
                else:
                    high = mid - 1
            else:
                if nums[mid] == nums[mid + 1]:
                    high = mid - 1
                else:
                    low = mid + 1

# Testing the function
solution = Solution()

test_cases = [
    [1,1,2,3,3,4,4,8,8],     # single element is 2
    [3,3,7,7,10,11,11],      # single element is 10
    [1],                      # single element is 1
    [1,1,2],                  # single element is 2
    [1,2,2],                  # single element is 1
]

for i, nums in enumerate(test_cases, 1):
    result = solution.singleNonDuplicate(nums)
    print(f"Test case {i}: single element is {result}")
