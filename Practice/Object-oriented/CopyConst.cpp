#include<iostream>

using namespace std;

class Sample{
    private:
        int id;
        static int count;
    public:
        Sample(int id){
            this->id = id;
            count++;
        }
        Sample(Sample& t){
            this->id = t.id;
            count++;
        }

        void display(){
            cout << "Object "<< count << "'s ID : " << id << endl;
        }
};

int Sample :: count = 0;

int main(){
    Sample s1(10);
    s1.display();

    Sample s2(s1);
    s2.display();
}