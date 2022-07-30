#include <iostream>
#include <queue>
#include <stdio.h>

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);
    
    // 반복 횟수
    int n;
    std::cin >> n;

    // 빈 큐
    std::queue<int> q;

    int X;
    std::string fnc;

    for (int i = 0; i < n; i++){

        std::cin >> fnc;

        if (fnc == "push"){
            std::cin >> X;
            q.push(X);
        }

        else if ((fnc == "pop") && (q.size() == 0)){
            std::cout << -1 << '\n';
        }
        
        else if ((fnc == "pop") && (q.size() != 0)){
            std::cout << q.front() << '\n';
            q.pop();
            
        }

        else if(fnc == "size"){
            std::cout << q.size() << '\n';
        }

        else if(fnc == "empty"){
            std::cout << q.empty() << '\n';
        }

        else if((fnc == "front") && (q.size() == 0)){
                std::cout << -1 << '\n';
            }
        
        else if((fnc == "front") && (q.size() != 0)){
                std::cout << q.front() << '\n';
        }

        else if((fnc == "back") && (q.size() == 0)){
                std::cout << -1 << '\n';
            }
        
        else if((fnc == "back") && (q.size() != 0)){
                std::cout << q.back() << '\n';
            
        }
    }

    return 0;
}
