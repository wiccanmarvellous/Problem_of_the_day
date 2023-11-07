

//User function Template for javascript

/**
 * @param {number[][]} mat
 * @param {number} N
 * @returns {number[]} 
*/
class Solution 
{
    //Function to return sum of upper and lower triangles of a matrix.
    sumTriangles(mat, N)
    {
        let upperSum = 0, lowerSum = 0;
        for (let i = 0; i < N; i++) {
            for (let j = 0; j < N; j++) {
                if (i <= j)
                    upperSum += mat[i][j];
                if (i >= j)
                    lowerSum += mat[i][j];
            }
        }
        return [upperSum, lowerSum];
    } 
}