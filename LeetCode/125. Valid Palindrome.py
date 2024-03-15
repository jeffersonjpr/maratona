class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s = ''.join([i for i in s if i.isalnum()]) # make a string with only alphanumeric characters
        return s == s[::-1] # invert the string and compare with the original