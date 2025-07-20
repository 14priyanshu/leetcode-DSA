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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
dummy.next = head;
ListNode* prev = &dummy;
ListNode* curr = head;

while (curr && curr->next) {
    ListNode* next = curr->next;
    
    // Perform swap
    curr->next = next->next;
    next->next = curr;
    prev->next = next;

    // Advance pointers
    prev = curr;
    curr = curr->next;
}

return dummy.next;

    // { if(!head||!head->next)
    //     return head;
    //     ListNode temp(0);
        
    //    // temp->val=(0);
    //     int c=0;
    //     ListNode* prev=head;
    //     ListNode* front=head->next;
    //     if(!head->next->next)
    //         {
    //             prev->next=NULL;
    //             front->next=prev;
    //             return front;
    //         }
    //     while(prev&&prev->next)
    //         {
    //             prev->next=front->next;
    //             front->next=prev;

    //             if(c==0)
    //                 {
    //                   temp.next=front;
    //                 }
    //             prev=prev->next;
    //             front=prev->next->next;
    //         }
    //     return temp.next;
    }
};