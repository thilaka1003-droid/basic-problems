#optimised
class Solution:
    def findMissing(self, a, b):
        c = []
        b_set = set(b)   

        for i in range(len(a)):
            if a[i] not in b_set:   
                c.append(a[i])

        return c
#normal
class Solution:
    def findMissing(self, a, b):
        c = []
        
        for i in range(len(a)):
            found = False   
            
            for j in range(len(b)):
                if a[i] == b[j]:
                    found = True   
                    break
            
            if not found:          
                c.append(a[i])
        
        return c