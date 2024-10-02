/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* adding=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* Current= adding;
    int carry =0;
    int sum =carry;
    while(l1 != NULL || l2 != NULL)
    {
        sum =carry;
        if(l1 != NULL)
        {
            sum += l1->val;
            l1=l1->next;
        }
        if(l2 != NULL)
        {
            sum += l2->val;
            l2=l2->next;
        }
        Current->next =(struct ListNode*)malloc(sizeof(struct ListNode));
        Current=Current->next;
        Current->val= sum %10;
        carry= sum /10;
    }
    if(carry!=0)
    {
        Current->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        Current=Current->next;
        Current->val=carry;
        Current->next=NULL;
    }
    else
    {
      Current->next=NULL;  
    }
    return adding->next;
}