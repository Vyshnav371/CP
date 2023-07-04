class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if(x<0):
            return False;
        else:
            num = str(x)
            if(num==num[::-1]):
                return True
            else:
                return False