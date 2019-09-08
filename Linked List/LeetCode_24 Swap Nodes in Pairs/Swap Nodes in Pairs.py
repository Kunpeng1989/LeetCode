class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        pre, pre.next = self, head
        while pre.next and pre.next.next:
            a = pre.next  #1st node
            b = a.next  #2nd node
            
            pre.next, b.next, a.next = b, a, b.next  #swap
            pre = a
            
        return self.next


class Solution:
    def swapPairs(self, head):
        if not head or not head.next:
            return head
        p = head.next
        head.next = self.swapPairs(head.next.next)
        p.next = head
        return p
