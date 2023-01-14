//    HUFFMAN  CODING


#include<bits\stdc++.h>
using namespace std;

struct Node
{
    char data;
    int freq;
    Node* left, *right;

    Node(char ch, int d)
    {
        data = ch;
        freq = d;
        left = NULL;
        right = NULL;
    }
};

struct compare{
bool operator()(Node* a, Node*b)
{
    return a -> freq > b -> freq;
}
};

void display(Node* pq, string str)
{
    if(pq)
    {
        if(pq -> data != '@')
          cout << pq -> data << " " << str << endl;
        display(pq -> left, str + '0');
        display(pq -> right, str + '1');
    }
}

void huffman_coding(char data[], int freq[], int n)
{
    priority_queue<Node*, vector<Node*>, compare>pq;

    for(int i = 0; i < n; i++)
    {
        pq.push(new Node(data[i], freq[i]));
    }

    while(pq.size() != 1)
    {
        Node* l = pq.top();
        pq.pop();
        Node* r = pq.top();
        pq.pop();

        Node* t = new Node('@', l -> freq + r -> freq);

        t -> left = l;
        t -> right = r;
        pq.push(t);
    }
    display(pq.top(), " ");
}


int main()
{
    int size;
    cout<<"Enter the number of items : ";
    cin>>size;

    char data[size];
    int  freq[size];
    cout<<"Enter the character and its frequency : ";
    for(int i = 0; i < size; i++)
    {
        cin>>data[i]>>freq[i];
    }
    cout<<"Output is : " <<endl;
    huffman_coding(data, freq, size);
}
