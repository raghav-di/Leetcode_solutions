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
    ListNode* midOf(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
    ListNode* merge(ListNode* &left,ListNode* &right){
        if(left==nullptr){
            return right;
        }
        if(right==nullptr){
            return left;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* temp=dummy;
        while(left!=nullptr&&right!=nullptr){
            if(left->val<=right->val){
                temp->next=left;
                temp=temp->next;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=temp->next;
                right=right->next;
            }
        }
        while(left!=nullptr){
            temp->next=left;
            temp=temp->next;
            left=left->next;
        }while(right!=nullptr){
            temp->next=right;
            temp=temp->next;
            right=right->next;
        }
        return dummy->next;
    }
    ListNode* mergeSort(ListNode* &left){
        if(left==nullptr||left->next==nullptr){
            return left;
        }
        ListNode* mid = midOf(left);
        ListNode* right = mid->next;
        mid->next=nullptr;
        left = mergeSort(left);
        right = mergeSort(right);
        ListNode* result = merge(left,right);
        return result;
    }
public:
    ListNode* sortList(ListNode* head) {
        
        return mergeSort(head);
    }
};