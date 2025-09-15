class Solution(object):
    def findPeakElement(self, nums):
        if len(nums) == 1:
            return 0
        if nums[0] > nums[1]:
            return 0
        if nums[-1] > nums[-2]:
            return len(nums) - 1
        
        low = 1
        high = len(nums) - 2
        
        while low <= high:
            mid = low + (high - low) // 2
            if nums[mid] > nums[mid - 1] and nums[mid] > nums[mid + 1]:
                return mid
            if nums[mid - 1] < nums[mid]:
                low = mid + 1
            else:
                high = mid - 1

# Testing the function
solution = Solution()

test_cases = [
    [1, 2, 3, 1],           # peak at index 2
    [1, 2, 1, 3, 5, 6, 4],  # peak at index 5
    [1],                    # single element, peak at index 0
    [3, 2, 1],              # peak at index 0
    [1, 3, 2],              # peak at index 1
]

for i, nums in enumerate(test_cases, 1):
    peak_index = solution.findPeakElement(nums)
    print(f"Test case {i}: Peak at index {peak_index}, value = {nums[peak_index]}")
