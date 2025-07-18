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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    { if(!list1)
        return list2;
      if(!list2)
         return list1;
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* newhead;
        if(t1->val>t2->val)
          {newhead=t2;t2=t2->next;}
        else if(t1->val<=t2->val)
          {newhead=t1;t1=t1->next;}
           list1=newhead;
        while(t1&&t2)
            {
               if(t1->val<t2->val)
                {
                    newhead->next=t1;
                    newhead=t1;
                    t1=t1->next;

                }
                else
                    {
                       newhead->next=t2;
                       newhead=t2;
                       t2=t2->next;
                    }
            }
            while(t1)
             {
                newhead->next=t1;
                newhead=newhead->next;
                t1=t1->next;
             }
             while(t2)
              {
                newhead->next=t2;
                newhead=newhead->next;
                t2=t2->next;
              }
        

        return list1;
    }
};