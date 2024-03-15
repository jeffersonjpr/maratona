# dict and for loop

class Solution:
    def romanCharacterMapper(c: str) -> int:
        roman_dict = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }

        return roman_dict.get(c, 0)

    def romanToInt(self, s: str) -> int:
        result = 0
        for i in range(len(s) - 1):
            if Solution.romanCharacterMapper(s[i]) < Solution.romanCharacterMapper(s[i + 1]):
                result -= Solution.romanCharacterMapper(s[i])
            else:
                result += Solution.romanCharacterMapper(s[i])
        result += Solution.romanCharacterMapper(s[-1])
        return result