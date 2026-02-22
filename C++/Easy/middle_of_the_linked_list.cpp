//876. Middle of the Linked List
/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
*/


//Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        auto current = head;
        int num_nodes = 1;
        while (current->next) {
            current = current->next;
            num_nodes++;
        }
        if(num_nodes == 1) {
            return head;
        }
        int target_node = (num_nodes / 2) + 1;
        current = head;
        for (int i = 1; i < target_node; i++) {
            current = current->next;
        }
        return current;
    }
};
//A more efficient solution would keep track of the middle node as the list is being traversed, avoiding the need to traverse the list twice.