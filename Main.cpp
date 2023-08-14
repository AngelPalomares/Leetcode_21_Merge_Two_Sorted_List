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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        //if list 1 happens to be null//
        // We will simply return list 2//

        if(list1 == NULL)
        {
            return list2;
        }
        
        //If list2 happens to be NULL//
        // We will return list1 since there is nothing in the null//
        if(list2 == NULL)
        {
            return list1;
        }

        //if value pointend by list 1 is less than equal to value pointed by list 2 pointer
        // We will call recursively list 1 -> next and whole list 2 list
        if(list1 -> val <= list2 -> val)
        {
            list1 -> next = mergeTwoLists(list1 -> next,list2);
            return list1;
        }
        else
        {
            list2 -> next = mergeTwoLists(list1, list2 -> next);
            return list2;
        }
    }
};
