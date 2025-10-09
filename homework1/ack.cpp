#include<iostream>
#include <stack>
using namespace std;
int ack(int m, int n) {
	if (m == 0)return n + 1;
	if (n == 0)return ack(m - 1, 1);
	else return ack(m - 1, ack(m, n - 1));
}
int nack(int m, int n) {
    stack<int> st;
    while (true) {
        if (m == 0) {
            n = n + 1;
            if (st.empty()) {
                return n; 
            }
            m = st.top();
            st.pop();
        }
        else if (n == 0) {
            m = m - 1;
            n = 1;
        }
        else {
            st.push(m - 1); 
            n = n - 1;      
        }
    }
}
int main() {
	int m, n;
	cin >> m>>n;
	cout << ack(m, n) << endl;
	cout << nack(m, n) << endl;
}