
class Node:
    def _init_(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def _init_(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        
        temp = self.head
        while temp.next:
            temp = temp.next
        
        temp.next = new_node


    def delete_node_by_value(self, key):
        temp = self.head

        if temp and temp.data == key:
            self.head = temp.next  
            temp = None  
            return

        prev = None
        while temp and temp.data != key:
            prev = temp
            temp = temp.next

        if not temp:
            print(f"Node with value {key} not found!")
            return

        prev.next = temp.next
        temp = None  

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

sll = SinglyLinkedList()
sll.append(10)
sll.append(20)
sll.append(30)
sll.append(40)

print("Original list:")
sll.print_list()

sll.delete_node_by_value(20)

print("List after deleting node with value 20:")
sll.print_list()

sll.delete_node_by_value(50)