#week01-2.py
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #�r�����
        N = len(needle)   #�r�����
        for i in range(H-N+1): #�O�o+1
            #����slicing
            if haystack[i : i+N] == needle: #��쪺��
                return i #���m����
        return -1 #�S�����

#week01-2b.py �ϥ�.find()�禡
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
