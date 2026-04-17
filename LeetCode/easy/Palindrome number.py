#9. palindrome number
#https://leetcode.com/problems/palindrome-number/description/
class Solution:
    def isPalindrome(self, x: int) -> bool:
        copy = x
        reverse = 0
        while (copy > 0):
            last_digit = copy % 10
            reverse = (reverse * 10) + last_digit
            #integer division
            copy //= 10
        if x == reverse:
            return True
        else:
            return False
        