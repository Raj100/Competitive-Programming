class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        n= len(matrix)
        m=len(matrix[0])
        l=[]
        for i in range(n):
            for j in range(m):
                if matrix[i][j]==0:
                    l.append([i,j])
        
        for e in l:
            for i in range(m):
                matrix[e[0]][i]=0
            for j in range(n):
                matrix[j][e[1]]=0
        

        