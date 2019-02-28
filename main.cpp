#include <iostream>

using namespace std;

class test{
    private:
        string name;
        int age;

    public:
        test(){};
        test(string iName, int iAge){
            name = iName;
            age = iAge;
        };
        ~test(){};

        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        void setName(string iName){
            name = iName;
        }
        void setAge(int iAge){
            age = iAge;
        }

};

template<class T>
class myVector{
    public:

        struct Node{
            T data;
            Node * next;
        };

        Node * head{NULL};

        void pushBack(T iData){
            if(head == NULL){
                Node * tmpPtr;
                tmpPtr = new Node;
                tmpPtr->data = iData;
                tmpPtr->next = NULL;
                head = tmpPtr;
            } else {
                Node * tmpPtr;
                tmpPtr = new Node;
                tmpPtr->data = iData;
                tmpPtr->next = head;
                head = tmpPtr;
            }
        }
        void printVector(){
            Node * tmp;
            tmp = head;
            while(true){
                cout << tmp->data << endl;
                if(tmp->next == NULL)
                    break;
                tmp = tmp->next;
            }
        }
};


int main()
{
    cout << "***************************" << endl;
    myVector<int> Numbers;
    Numbers.pushBack(5);
    Numbers.pushBack(1);
    Numbers.pushBack(2);
    Numbers.printVector();
    cout << "***************************" << endl;
    myVector<string> Strings;
    Strings.pushBack("Batman");
    Strings.pushBack("is");
    Strings.pushBack("Name");
    Strings.pushBack("My");
    Strings.printVector();
    cout << "***************************" << endl;
    myVector<test> tracking;
    test Batman("Batman",35);
    test Robin("Robin",15);
    test Batgirl("Batgril",18);
    tracking.pushBack(Batman);
    tracking.pushBack(Robin);
    tracking.pushBack(Batgirl);

    cout << "***************************" << endl;
    cout << "Hello world!" << endl;
    return 0;
}
