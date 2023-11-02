package samueleStabile.dataStructures;

import samueleStabile.exceptions.EmptyStackException;
import samueleStabile.exceptions.FullStackException;

public class StackStudenti {
    private Studente[] stack;
    private int size;
    private int capacity;

    public StackStudenti(){
        this.capacity = 50;
    }

    public StackStudenti(int capacity){
        if (capacity <= 0) {
            throw new IllegalArgumentException("La capaticitá deve essere maggiore di 0");
        }
        this.capacity = capacity;
        this.stack = new Studente[capacity];
        this.size = 0;
    }

    public boolean isEmpty(){
        return size == 0;
    }

    public boolean isFull(){
        return size == capacity;
    }

    public void push(Studente studente) throws FullStackException{
        if(isFull()){
            throw new FullStackException();
        }
        stack[size] = studente;
        size++;
    }

      public Studente pop() throws EmptyStackException{
        if(isEmpty()){
            throw new EmptyStackException();
        }
        size--;
        return stack[size];
    }
    
    public Studente top() throws EmptyStackException {
        if (isEmpty()) {
            throw new EmptyStackException();
        }
        return stack[size - 1];
    }
}
