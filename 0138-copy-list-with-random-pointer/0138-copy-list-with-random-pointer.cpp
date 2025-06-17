/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        // if(head->next==NULL){
        //     Node* newHead = 
        // }
        Node* temp=head;
        int prevVal;

        while(temp!=NULL){
            prevVal = temp->val;
            Node* newNode = new Node(prevVal);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=temp->next->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->random==NULL){
                temp->next->random=NULL;
            }
            else{
                temp->next->random=temp->random->next;
            }
            temp=temp->next->next;
        }
        Node* copyHead = head->next;
        temp = head;
        Node* copytemp = copyHead;

        while(temp!=NULL&&copytemp->next!=NULL){
            temp->next=temp->next->next;
            temp=temp->next;
            copytemp->next=copytemp->next->next;
            copytemp=copytemp->next;
        }
        temp->next=NULL;
        return copyHead;
    }
};