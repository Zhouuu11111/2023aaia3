// week12-2.cpp
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ///ListNode* ans = list1; �ŧi���� (1)
        //ListNode* ans = new ListNode(99); //�s�W �ȬO99 (2)
        ListNode* ans = new ListNode(99,new ListNode(88));
        // (3) �s�W1�� �ȬO99 �B�k��S �s�W1�� �ȬO90


        return ans;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
