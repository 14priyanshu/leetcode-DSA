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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL||head->next==nullptr)
          return head;
        map<int,int> mp;
         ListNode* temp=head;
         
         while(temp)
         {
            mp[temp->val]++; 
            temp=temp->next;
         }  
         bool first=true;
        ListNode* rear=nullptr;ListNode* front=head;
        head=nullptr;
         while(front!=nullptr)

            {
                

                if(mp[front->val]>1)
                    {
                        front=front->next;
                    }
                else 
                    { if(first)
                        {
                            head=front;
                            rear=front;
                            first =false;
                        }
                      else
                       {rear->next=front;
                       rear=front;}
                        front=front->next;
                    }
            }  if(rear)
               rear->next=nullptr;

               
            return head;   
    }
};