class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        unordered_set<ListNode *> set;
        set.insert(head);
        while (true)
        {
            if (head == NULL)
                break;
            if (set.find(head->next) != set.end())
                return true;
            set.insert(head->next);
            head = head->next;
            if (head == NULL)
                break;
        }
        return false;
    }
};