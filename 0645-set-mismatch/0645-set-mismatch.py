
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)

        total = n * (n + 1) // 2
        total_sq = n * (n + 1) * (2*n + 1) // 6

        s = sum(nums)
        s_sq = sum(x*x for x in nums)

        diff = s - total          # d - m
        diff_sq = s_sq - total_sq # d^2 - m^2 = (d - m)(d + m)

        sum_dm = diff_sq // diff  # d + m

        duplicate = (diff + sum_dm) // 2
        missing = duplicate - diff

        return [duplicate, missing]