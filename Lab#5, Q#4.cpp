# Node class for a singly linked list
class Node:
    def _init_(self, data):
        self.data = data
        self.next = None

# Singly Linked List class
class SinglyLinkedList:
    def _init_(self):
        self.head = None

    def insert_sorted(self, data):
        new_node = Node(data)

        if self.head is None:
            self.head = new_node
            return

        if self.head.data >= data:
            new_node.next = self.head
            self.head = new_node
            return

        temp = self.head
        while temp.next and temp.next.data < data:
            temp = temp.next

        new_node.next = temp.next
        temp.next = new_node

    def find_last_node_location(self):
        if self.head is None:
            print("List is empty!")
            return

        temp = self.head
        location = 1  # Start at position 1 for the head

        while temp.next:
            temp = temp.next
            location += 1

        return location

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

sll = SinglyLinkedList()
sll.insert_sorted(10)
sll.insert_sorted(20)
sll.insert_sorted(30)
sll.insert_sorted(15)

print("Sorted Singly Linked List:")
sll.print_list()

loc = sll.find_last_node_location()
print(f"The location of the last node is: {loc}")