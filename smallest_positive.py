class Solution:
    def missingNumber(self, arr):
        a = max(arr)
        
        for i in range(1, a+2):   # extended range
            if i not in arr:      # same idea
                return i