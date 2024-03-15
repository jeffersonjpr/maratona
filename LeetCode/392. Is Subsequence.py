import unittest

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        s_index = 0
        for char in t:
            if s[s_index] == char:
                s_index +=1
        return s_index == len(s)
    
class test_is_subsequence_true(unittest.TestCase):
    def test_isSubsequence(self):
        s = "abc"
        t = "ahbgdc"
        sol = Solution()
        self.assertEqual(sol.isSubsequence(s, t), True)

class test_is_subsequence_true2(unittest.TestCase):
    def test_isSubsequence(self):
        s = ""
        t = "ahbgdc"
        sol = Solution()
        self.assertEqual(sol.isSubsequence(s, t), True)

class test_is_subsequence_false(unittest.TestCase):
    def test_isSubsequence(self):
        s = "axc"
        t = "ahbgdc"
        sol = Solution()
        self.assertEqual(sol.isSubsequence(s, t), False)

if __name__ == '__main__':
    unittest.main()