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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* c1=l1;
        ListNode* c2=l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp=dummy;
        int carry=0;
        while(c1||c2||carry){
            int v1=(c1==nullptr)?0:c1->val;
            int v2=(c2==nullptr)?0:c2->val;
            int num=v1+v2+carry;
            int digit = num%10;
            carry = num/10;
            ListNode* newNode = new ListNode(digit);
            temp->next=newNode;
            temp=temp->next;
            c1=(c1==nullptr)?nullptr:c1->next;
            c2=(c2==nullptr)?nullptr:c2->next;
        }
        return dummy->next;
    }
};