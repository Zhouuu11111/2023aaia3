// week12-3.cpp
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(0);//下一筆才是真的答案
        ListNode* now = ans;
        while(list1 != nullptr || list2 != nullptr){
            if(list1==nullptr){//左邊是空的
                now->next = list2;//就把右邊全接下
                break;//結束了
            }else if(list2== nullptr){//右邊是空的
                now->next = list1;//就把左邊全接下
                break;//結束了
            }
            if(list1->val < list2->val){//list! 比較小
                now->next = new ListNode(list1->val);//小的,放入
                list1 = list1->next;//換下一筆
                now = now->next;
            }else{//list2 比較小
                now->next = new ListNode(list2->val);//小的,放入
                list2 = list2->next;//換下一筆
                now = now->next;
            }
        }
        return ans->next;
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
