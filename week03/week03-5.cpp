# Definition for singly-linked list.
# class ListNode:
#   def _init__(self, x):
#       self.val = X
#       self.next = None

class Solution:
def hasCycle(self, head: Optional [ListNode]) -> bool:
    fast, slow = head, head

    while fast!=None and fast.next!=None:
        fast = fast.next.next
        slow = slow.next
        if fast==slow: return True
    return False
