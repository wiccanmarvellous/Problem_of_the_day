class Solution:
    def spiralOrder(self, matrix):
        return matrix and [*matrix.pop(0)] + self.spiralOrder([*zip(*matrix)][::-1])

matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
obj = Solution()
print(obj.spiralOrder(matrix))