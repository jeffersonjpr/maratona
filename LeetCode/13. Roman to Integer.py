# dict and for loop
import unittest

class Solution:
    def romanToInt(self, s: str) -> int:
        roman_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        result = 0
        
        for i in range(len(s)):
            if i < len(s) - 1 and roman_dict[s[i]] < roman_dict[s[i+1]]:
                result -= roman_dict[s[i]]
            else:
                result += roman_dict[s[i]]
        return result

class TestRomanToInt(unittest.TestCase):
    def test_romanToInt(self):
        s = "III"
        sol = Solution()
        self.assertEqual(sol.romanToInt(s), 3)

    def test_romanToInt2(self):
        s = "IV"
        sol = Solution()
        self.assertEqual(sol.romanToInt(s), 4)

    def test_romanToInt3(self):
        s = "IX"
        sol = Solution()
        self.assertEqual(sol.romanToInt(s), 9)

    def test_romanToInt4(self):
        s = "LVIII"
        sol = Solution()
        self.assertEqual(sol.romanToInt(s), 58)

    def test_romanToInt5(self):
        s = "MCMXCIV"
        sol = Solution()
        self.assertEqual(sol.romanToInt(s), 1994)

if __name__ == '__main__':
    unittest.main()