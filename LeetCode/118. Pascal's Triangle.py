class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        matrix=[[0 for j in range(i+1)] for i in range(numRows)]
        for i in range(numRows):
            for j in range(i+1):
                if j ==0:
                    matrix[i][j]=1
                elif j == i:
                    matrix[i][j]=1
                else:
                    matrix[i][j]=(matrix[i-1][j]+matrix[i-1][j-1])
        return (matrix)