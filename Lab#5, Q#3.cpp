
class Node:
    def _init_(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def _init_(self):
        self.head = None

    def insert_at_beginning(self, data):
        new_node = Node(data)  # Create a new node
        new_node.next = self.head  # Point new node's next to old head
        self.head = new_node  # Update head to new node

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

sll = SinglyLinkedList()
sll.insert_at_beginning(10)
sll.insert_at_beginning(20)
sll.insert_at_beginning(30)

print("Singly Linked List after insertion:")
sll.print_list()