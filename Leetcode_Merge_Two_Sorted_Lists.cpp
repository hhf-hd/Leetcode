class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *Head=new ListNode(0);
        ListNode *p=Head;
        while(l1!=NULL||l2!=NULL)
        {
                ListNode * t=NULL;
                if(l1==NULL)
                {
                    t=l2;
                    l2=l2->next;
                }
                else if(l2==NULL)
                {
                    t=l1;
                    l1=l1->next;
                }
                else
                {
                    if(l1->val>l2->val)
                    {
                        t=l2;
                        l2=l2->next;
                    }
                    else
                    {
                        t=l1;
                        l1=l1->next;
                    }
                }
                p->next=t;
                p=p->next;
        }
        return Head->next;
    }
};
