class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        cur, prev = head, None  
        while cur:
            cur.next, prev, cur = prev, cur, cur.next  #
        return prev
		
		
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if(not head or not head.next):
            return head
        node = self.reverseList(head.next)
        head.next.next = head
        head.next = None
        return node
        
