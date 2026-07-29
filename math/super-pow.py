class Solution(object):
    def superPow(self, a, b):
        """
        :type a: int
        :type b: List[int]
        :rtype: int
        """
        res=0
        for i in range(len(b)):
            res=res*10+b[i]
        num = pow(a,res,1337)
        return num