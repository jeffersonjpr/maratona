import unittest

class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        for i in range(1,n+1):
            nums1[-i] = nums2[-i]
        nums1 = nums1.sort()

class Test(unittest.TestCase):
    def test_merge(self):
        nums1 = [1,2,3,0,0,0]
        m = 3
        nums2 = [2,5,6]
        n = 3
        s = Solution()
        s.merge(nums1, m, nums2, n)
        self.assertEqual(nums1, [1,2,2,3,5,6])

class Test2(unittest.TestCase):
    def test_merge(self):
        nums1 = [0]
        m = 1
        nums2 = [1]
        n = 1
        s = Solution()
        s.merge(nums1, m, nums2, n)
        self.assertEqual(nums1, [1])

if __name__ == '__main__':
    unittest.main()