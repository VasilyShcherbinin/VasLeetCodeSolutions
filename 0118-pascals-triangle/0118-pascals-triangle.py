class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        resultList = []
        row = 0
        while row < numRows:
            if row == 0:
                innerList = [1]
            elif row == 1:
                innerList = [1, 1]
            else:
                prevList = resultList[row - 1]
                innerList = [1]
                for i in range(len(prevList) - 1):
                    innerList.append(prevList[i] + prevList[i + 1])
                innerList.append(1)
            resultList.append(innerList)
            row += 1
        return resultList
        