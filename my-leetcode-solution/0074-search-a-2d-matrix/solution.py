class Solution(object):

    def searchInRow(self, matrix, target, row):

        st = 0
        end = len(matrix[0]) - 1

        while st <= end:

            mid = st + (end - st) // 2

            if target == matrix[row][mid]:
                return True

            elif target > matrix[row][mid]:
                st = mid + 1

            else:
                end = mid - 1

        return False


    def searchMatrix(self, matrix, target):

        m = len(matrix)
        n = len(matrix[0])

        st_row = 0
        end_row = m - 1

        while st_row <= end_row:

            mid = st_row + (end_row - st_row) // 2

            if target >= matrix[mid][0] and target <= matrix[mid][n - 1]:
                return self.searchInRow(matrix, target, mid)

            elif target >= matrix[mid][0]:
                st_row = mid + 1

            else:
                end_row = mid - 1

        return False
