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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


    ListNode* answer = NULL;
     ListNode* answer1 = NULL;
    int num1 = 0,num2,num3;

    while (l1 != NULL || l2 != NULL)

    {
            num2 = 0;
            num3 = 0;
            if(l1 != NULL) num2 = l1->val;
            if(l2 != NULL) num3 = l2->val;

            num1  = (num1/10) + num2 +  num3;

            if(answer == NULL)
            {
                answer = new ListNode(num1%10);
                answer1 = answer;
            }
            else
            {
                answer->next =  new ListNode(num1%10);
                answer = answer->next;
            }
                
                if(l1!= NULL)l1 = l1->next;
                
                if(l2!= NULL)l2 = l2->next;
                

    }
     if(num1/10){   

        answer->next =  new ListNode(num1/10);

     }
        return answer1;
    }
};