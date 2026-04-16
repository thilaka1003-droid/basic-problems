class Solution:
    def minAnd2ndMin(self, arr):
        a = []
        min1 = arr[0]
        min2 = float('inf')  

        for i in range(0, len(arr)):
            if arr[i] < min1:
                min2 = min1
                min1 = arr[i]
            elif arr[i] < min2 and arr[i] != min1:
                min2 = arr[i]

        if min2 == float('inf'):
            return [-1]

        a.append(min1)   
        a.append(min2)

        return a