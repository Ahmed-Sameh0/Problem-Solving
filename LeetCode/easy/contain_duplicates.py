# leetCode 217 https://leetcode.com/problems/contains-duplicate/
class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        numbers_seen = set()

        for num in nums:
            if(num in numbers_seen):
                return True
            else:
                numbers_seen.add(num)
        return False
    