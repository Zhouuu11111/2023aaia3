#week17-2.py
#LeetCode 66.
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        #python
        N = len(digits) #���X���
        carry = 1
        for i in range(N-1,-1,-1): #��L�Ӫ��j��
            digits[i] = digits[i] + carry #�[1
            if digits[i] >= 10:
                carry = 1
                digits[i] = digits[i] %10
            else:#�S���ɬ�
                    carry=0 #�N�g�{0

        if carry == 0:
            return digits
        else:
            return [carry] + digits
