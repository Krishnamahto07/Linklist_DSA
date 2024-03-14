public class DoublyLL {
    public class Node {
        int data;
        Node next;
        Node prev;
        Node(int data) {
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }
    public static Node head = null,tail=null;
    public static int size;
    public void addFirst(int data) {
        Node x = new Node(data);
        if(head == null) {
            head = tail = x;
        }
        else {
        x.next = head;
        head.prev = x;
        head = x;
        }
    }
    public void addLast(int data) { 
        Node y = new Node(data);
        if(head == null) {
            head = tail = y;
        }
        else {
            tail.next = y;
            y.prev = tail;
            tail = y;
        }
    }
    public void deleteFirst() {
        if(head == null || head.next == null) {
            head = tail = null;
            System.out.println("Empty");
        }
        else {
            head = head.next;
            head.prev = null;
        }
        System.out.println("Delete complete");
    }
    public void deleteLast() {
        if(head == null || head.next == null) {
            head = tail = null;
            System.out.println("Empty now");
        }
        else {
            tail = tail.prev;
            tail.next = null;
        }
        System.out.println("Delete complete");
    }
    public static void print() {
        if(head == null) 
        System.out.println("List is Empty");
        else {
            Node temp = head;
            while(temp != null) {
                System.out.print(temp.data+"<-->");
                temp= temp.next;
            }            
        }
    }
    public Node reverseDLL(Node head) {
        if(head == null || head.next == null) {
            return head;
        }
        Node p = null;
        Node c = head;
        Node n;
        while(c != null) {
            n = c.next;
            c.next = p;
            c.prev = n;
            p = c;
            c = n;
        }
        return p;
    }
    public static void main(String[] args) {
        DoublyLL ll = new DoublyLL();
        ll.addFirst(5);
        ll.addFirst(10);
        ll.addFirst(15);
        ll.addLast(20);
        ll.print();
        System.out.println("in reverse : ");
        // ll.deleteFirst();
        // ll.print();
        // ll.deleteLast();
        // ll.print();
        // ll.deleteFirst();
        // ll.deleteFirst();
        // ll.print();
        head = ll.reverseDLL(head);
        ll.print();
    }
    
}
