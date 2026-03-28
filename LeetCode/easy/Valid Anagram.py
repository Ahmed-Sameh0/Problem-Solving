# 242. Valid Anagram https://leetcode.com/problems/valid-anagram/description/
class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        letters_in_s = {}
        letters_in_t = {}

        for char in s:
            letters_in_s[char] = letters_in_s.get(char, 0) + 1
        for char in t:
            letters_in_t[char] = letters_in_t.get(char, 0) + 1
        if letters_in_s == letters_in_t:
            return True
        return False