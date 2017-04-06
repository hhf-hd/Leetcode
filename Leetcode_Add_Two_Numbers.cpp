/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode Res(0), *p=&Res;
	int More = 0;
	int sum=0;
	while(l1||l2||More)
	{
		sum=(l1?l1->val:0)+(l2?l2->val:0);
		More =sum/10;
		p->next=new ListNode (sum%10);
		p=p->next;
		l1=(l1?l1->next:l1);
		l2=(l2?l2->next:l2);
	}
	return Res.next;
		
    }
};

int main()
{
	ListNode *l1=new ListNode(1);
	ListNode *l2=new ListNode(2);
	l1->next=new ListNode(2);
	l1=l1->next;
	l1->next=new ListNode(2);
	l1=l1->next;
	l2->next=new ListNode(4);
	l2=l2->next;
	cout<<l2->val<<endl;
	
	return 0;
}


