#26. Remove Duplicates from Sorted Array
#https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        unique_numbers = set()
        duplicated_index = []
        for i in range(len(nums)):
            if nums[i] not in unique_numbers:
                unique_numbers.add(nums[i])
            else:
                duplicated_index.insert(0, i)
        for j in duplicated_index:
            nums.pop(j)