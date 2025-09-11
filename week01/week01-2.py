#week01-2.py
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #字串長度
        N = len(needle)   #字串長度
        for i in range(H-N+1): #記得+1
            #切片slicing
            if haystack[i : i+N] == needle: #找到的話
                return i #把位置當答案
        return -1 #沒有找到

#week01-2b.py 使用.find()函式
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
