#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {

int n , m, t;
int book = 1;
char d;
stack <int> box;
vector<int> output;
cout << "請輸入書的數量及動作次數:";
cin >> n >> m;


for (int i=0; i < m;i++) {
 cout << "請輸入第" << i+1 <<"次的動作為何，及移動書的數量:",
 cin >> d >> t;  
 if (d == 'a') {
   for (int j = 0; j < t ; j++) {
    box.push(book);
    book++;
  }
 }

 else if (d == 'b') {
   for (int j = 0; j < t ; j++) {
    output.push_back(box.top());
    box.pop();
  }
 }
}
for(int i = 0; i < n; i++) {
  cout <<(char) output[i]+'a'-1; 
  if (i != n - 1) {
    cout << " ";
  }
 }

}
