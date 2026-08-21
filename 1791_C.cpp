#include<iostream>
#include<string>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        int front = 0, rear = n-1;
        while(front < rear){
            if(s[front] == s[rear]) break;
            else {
                front++;
                rear--;
            }
        }
        std::cout << rear - front + 1 << '\n';
    }
    return 0;
}
