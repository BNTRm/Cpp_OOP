
#include <iostream>

using namespace std;

class Power {
private:
    float a, b;

public:
    Power() {
        a = 2;
        b = 2;
    }

    void set(float newA, float newB) {
        a = newA;
        b = newB;
    }
    float calculate() {
        return pow(a, b);
    }
};

class RGBA {
private:
    uint8_t m_red, m_green, m_blue, m_alpha;

public:
    RGBA() {
        m_red = 0;
        m_green = 0;
        m_blue = 0;
        m_alpha = 255;
    }
    RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
        m_red = red;
        m_green = green;
        m_blue = blue;
        m_alpha = alpha;
    }

    void print() {
        cout << m_red << " " << m_green << " " << m_blue << " " << m_alpha << endl;
    }
};

class Stack {
private:
    int arr[10], length;
public:
    void reset() {
        for (size_t i = 0; i < 10; i++) {
            arr[i] = 0;
        }

        length = 0;
    }
    bool push(int val) {
        for (size_t i = 0; i < 10; i++) {
            if (arr[i] == 0) {
                arr[i] = val;
                return true;
            }
        }

        return false;
    }
    int pop() {
        for (size_t i = 9; i >= 0; i--) {
            if (arr[i] != 0) {
                arr[i] = 0;
                return arr[i];
            }
        }

        cout << "Stack is empty" << endl;
        return 0;
    }
    void print() {
        cout << "( ";

        for (size_t i = 0; i < 10; i++) {
            if (arr[i] != 0) {
                cout << arr[i] << " ";
            }
        }

        cout << ")" << endl;
    }
};

int main()
{
    Power pow1;
    cout << pow1.calculate() << endl;

    Power pow2;
    pow2.set(3, 3);
    cout << pow2.calculate() << endl;

    RGBA rgba1;
    rgba1.print();

    RGBA rgba2(100, 100, 128, 64);
    rgba2.print();

    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

}