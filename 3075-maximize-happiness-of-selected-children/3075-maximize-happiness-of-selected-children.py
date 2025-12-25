class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        if not happiness : return 0 
        happiness = sorted(happiness)
        n = len(happiness)
        count = 0 
        countK=0
        for i in range(n-1,-1,-1):
            if countK == k :
                return count
            else:
                if ( happiness[i] - countK) > 0 :
                    count += (happiness[i] - countK) 
            countK+=1
        return count 