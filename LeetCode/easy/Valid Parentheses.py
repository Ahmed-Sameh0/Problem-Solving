#20. Valid Parentheses
#https://leetcode.com/problems/valid-parentheses/description/

class Solution:
    def isValid(self, s: str) -> bool:
        brackets_stack = []

        for char in s:
            if char in {'(', '{', '['}:
                brackets_stack.append(char)

            # check if the stack is not empty
            elif brackets_stack:

                # if the closed bracket is the same as the opening bracket at the top of the stack then the order is correct
                if (char == ')' and brackets_stack[-1] == '(') or (char == '}' and brackets_stack[-1] == '{') or (char == ']' and brackets_stack[-1] == '['):
                    brackets_stack.pop()

                # the order is false 
                else:
                    return False

            # The char is not an opening bracket and the length of the stack equals zero so the first bracket is a closed bracket which breaks the order
            else:
                return False

        # if the brackets stack is empty then all the opening brackets got closed with the correct order and the string is valid
        return not brackets_stack