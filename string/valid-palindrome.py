class Solution(object):
    import re
    def isPalindrome(self, s):
        s=re.sub(r'[^a-zA-Z0-9]', '', s)
        s=s.lower()
        res=s[::-1]
        if(s==res):
            return True
        else:
            return False
        
        