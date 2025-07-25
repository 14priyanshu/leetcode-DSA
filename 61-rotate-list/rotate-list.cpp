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
    ListNode* rotateRight(ListNode* head, int k)
    { if(!head||!head->next)
         return head;
        ListNode* temp=head;
        int c=0;
        while(temp->next!=NULL)
            {
                temp=temp->next;
                c++;
            }
            c++;
            temp->next=head;
        k=k%c;
        temp=head;
        for(int i=1;i<c-k;i++)
            {
               temp=temp->next;
            }
            ListNode* newhead;
            newhead=temp->next;
            temp->next=NULL;
            return newhead;
        
    }
};