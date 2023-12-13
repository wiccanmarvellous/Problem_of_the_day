class Solution:
    def check(self, i, j, m, n, mat):
        for a in range(m):
            if mat[a][j] == 1 and a != i:
                return False
        for b in range(n):
            if mat[i][b] == 1 and b != j:
                return False
        return True
    def numSpecial(self, mat: List[List[int]]) -> int:
        count, m, n = 0, len(mat), len(mat[0])
        for i in range(len(mat)):
            for j in range(len(mat[i])):
                if mat[i][j] == 1 and self.check(i, j, m, n, mat):
                    count += 1
        return count