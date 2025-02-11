
class Node:
    def _init_(self, data):
        self.data = data
        self.prev = None
        self.next = None


class DoublyLinkedList:
    def _init_(self):
        self.head = None

    
    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return

        temp = self.head
        while temp.next:
            temp = temp.next

        temp.next = new_node
        new_node.prev = temp

    def count_nodes(self):
        temp = self.head
        count = 0
        while temp:
            count += 1
            temp = temp.next
        return count

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data, end=" <-> ")
            temp = temp.next
        print("None")

dll = DoublyLinkedList()
dll.append(10)
dll.append(20)
dll.append(30)
dll.append(40)

print("Doubly Linked List:")
dll.print_list()

num = dll.count_nodes()
print(f"Number of elements in the list: {num}")