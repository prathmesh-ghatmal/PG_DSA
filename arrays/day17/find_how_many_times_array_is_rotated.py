def find_rotation_count(nums):
    low=0
    high=len(nums)-1
    minimum=nums[0]
    while low<=high:
        mid=low+(high-low)//2
        if nums[low]<=nums[mid]:
            minimum=min(minimum,nums[low])
            low=mid+1
        else:
            minimum=min(minimum,nums[mid])
            high=mid-1
    return nums.index(minimum)

test_list1 = [15, 18, 2, 3, 6, 12]
test_list2 = [7, 9, 11, 12, 5]
test_list3 = [3, 4, 5, 1, 2]
test_list4 = [1, 2, 3, 4, 5]  # Not rotated

print("Test case 1 index:", find_rotation_count(test_list1))  # Expected output: 2
print("Test case 2 index:", find_rotation_count(test_list2))  # Expected output: 4
print("Test case 3 index:", find_rotation_count(test_list3))  # Expected output: 3
print("Test case 4 index:", find_rotation_count(test_list4))