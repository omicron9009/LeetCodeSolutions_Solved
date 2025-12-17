class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        map1 = {")":"(" , "]":"[" , "}":"{"}

        for c in s :
            if c in map1:
                if stack and stack[-1]==map1[c]:
                    stack.pop()
                else:
                    return False 
            else:
                stack.append(c) 
        return True if not stack else  False 