BuscaValorMax

#include <iostream>

struct Node {
    int value;
    Node* next;
    
    Node(int val) : value(val), next(nullptr) {}
};

class List {
private:
    Node* head;

public:
    List() : head(nullptr) {}
    ~List() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
    
    int Max() const {
        if (head == nullptr) {
            return 0;
        }
        return MaxRecursive(head);
    }

    void insert(int valor){
     Node* node = new Node(valor);
     node->next = head;
     head = node;
     
    }
    
private:

    int MaxRecursive(Node* node) const {
        if (node->next == nullptr) {
            return node->value;
        }
        int nextMax = MaxRecursive(node->next);
        return (node->value > nextMax) ? node->value : nextMax;
    }
};

int main() {
    List list;
    list.Max();  // Retorna 0 pois a lista está vazia
    
    list.insert(5);
    list.insert(10);
    list.insert(3);
    list.insert(25);
    list.insert(2);
    
    int max = list.Max();  // Retorna o maior elemento da lista (10)
    std::cout << "Maior elemento: " << max << std::endl;
    
    return 0;
}

------------------------------------------------------------------------
buscaPorfrequencia

#include <iostream>
#include <string>

struct Node {
    std::string value;
    int accessCount;
    Node* next;
    Node* prev;
    
    Node(const std::string& val) : value(val), accessCount(0), next(nullptr), prev(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;
    
public:
    LinkedList() : head(new Node("Head")), tail(new Node("Tail")) {
        head->next = tail;
        tail->prev = head;
    }
    
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
    //realiza a busca e incrementa o contador de frequencia
    Node* searchCF(const std::string& key) {
        Node* current = head->next;
        while (current != tail) {
            if (current->value == key) {
                current->accessCount++;
                rearrangeNodes();
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }
    
private:
  //rearranja a lista encadeada com base na frequencia
    void rearrangeNodes() {
        Node* current = head->next;
        while (current != tail && current->accessCount >= current->prev->accessCount) {
            std::swap(current->accessCount, current->prev->accessCount);
            std::swap(current->value, current->prev->value);
            current = current->prev;
        }
    }

};

int main() {
    LinkedList list;
    list.searchCF("key1");
    list.searchCF("key2");
    list.searchCF("key1");
    
    return 0;
}


--------------------------------------------------------------------
stack

//	stack::push/pop
#include	<iostream>	 //	std::cout
#include	<stack> //	std::stack
using	namespace	std;
int	main	()
{
			string	s	=	"ABCDEFG";
				stack<char>	pilha;
				//	Itera	sobre	cada	caractere	da	string
				for(	char	ch	:	s	){
								//	Insere	um	caractere	na	pilha
								pilha.push(ch);
				}
				while(	!	pilha.empty()	){
								//	Imprime	o	topo da	pilha
								cout <<	pilha.top()	<<	"	";
								//	Remove	um	elemento	da	pilha
								pilha.pop();
				}
return	0;
}


--------------------------------------------------------
stack classee

#include <iostream>

class Queue {
private:
    static const int MAX_SIZE = 100; // Tamanho máximo da fila
    int arr[MAX_SIZE]; // Array para armazenar os elementos
    int front; // Índice do elemento da frente da fila
    int rear; // Índice do último elemento da fila

public:
    Queue() {
        front = -1; // Inicializa a frente da fila
        rear = -1; // Inicializa o fim da fila
    }

    bool isEmpty() {
        return (front == -1 && rear == -1); // Verifica se a fila está vazia
    }

    bool isFull() {
        return (rear + 1) % MAX_SIZE == front; // Verifica se a fila está cheia
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "A fila está cheia. Não é possível adicionar elementos.\n";
            return;
        } else if (isEmpty()) {
            front = rear = 0; // Se a fila estiver vazia, inicializa a frente e o fim
        } else {
            rear = (rear + 1) % MAX_SIZE; // Atualiza o índice do último elemento
        }

        arr[rear] = value; // Insere o elemento no fim da fila
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "A fila está vazia. Não é possível remover elementos.\n";
            return;
        } else if (front == rear) {
            front = rear = -1; // Se houver apenas um elemento na fila, redefinir a frente e o fim
        } else {
            front = (front + 1) % MAX_SIZE; // Atualiza o índice do elemento da frente
        }
    }

    int frontElement() {
        if (isEmpty()) {
            std::cout << "A fila está vazia. Não há elementos na frente.\n";
            return -1;
        }

        return arr[front]; // Retorna o elemento da frente da fila
    }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Elemento da frente: " << queue.frontElement() << std::endl;

    queue.dequeue();

    std::cout << "Elemento da frente após remover um elemento: " << queue.frontElement() << std::endl;

    return 0;
}