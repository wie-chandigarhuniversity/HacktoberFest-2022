public class DoublyLinkedList {

    class Node {

        int data;
        Node next;
        Node prev;

        Node(int data) {
            this.data = data;
            next = null;
            prev = null;
        }
    }

    void addFirst(int data) {

        Node n = new Node(data);
        n.next = head;
        n.prev = null;

        if(head==null)
        {
            tail = head = n;
            size = 1;
            return;
        }

        head.prev = n;
        head = n;

        size++;

    }

    void addLast(int data) {


        Node n = new Node(data);
        n.next = null;

        if(head==null)
        {
            tail = head = n;
            size = 1;
            return;
        }

        n.prev = tail;
        tail.next = n;
        tail = n;

        size++;

    }

    void removeFirst(){
        if(head==null)
        return;

        head = head.next;
        head.prev = null;
        size--;
    }

    void removeLast(){

        if(head==null)
        return;

        tail.prev.next = null;
        tail = tail.prev;

        size--;
    }


    void print() {

        Node curr = head;
        while (curr != null) {
            System.out.println(curr.data);
            curr = curr.next;
        }


    }

    public Node head = null;
    public Node tail = null;
    public static int size;

    public static void main(String[] args) {

        DoublyLinkedList dl = new DoublyLinkedList();
        dl.addLast(1);
        dl.addLast(2);
        dl.addLast(3);
        dl.print();

    }
}
