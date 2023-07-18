
//  /* Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };

 /*
   https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/submissions/
 */
 
#include<stdio.h>

int pairSum(struct ListNode* head){
    struct ListNode* slow=head;
    struct ListNode* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    struct ListNode* prev=NULL;
    struct ListNode* nextNode=NULL;

    while(slow!=NULL)
    {
        nextNode=slow->next;
        slow->next=prev;
        prev=slow;
        slow=nextNode;
    }

    int sum=0;

    while(prev!=NULL)
    {
        sum = fmax(sum, prev->val + head->val);
        prev=prev->next;
        head=head->next;
    }

    return sum;
}