#include <iostream>
#include <set>

using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    int n;
    cin >> n;
    
    string input;
    set<int> s;
    //set<int>::iterator it;

    while(n--){
        int x;
        cin >> input;
        
        if (input == "add") {
            cin >> x;
            s.insert(x);
        }
        
        else if (input == "remove") {
            cin >> x;
            s.erase(x);
        }
        
        else if (input == "check") {
            cin >> x;
            cout << (s.find(x)!=s.end())<< '\n';
        }
        
        else if (input == "toggle") {
            cin >> x;
            if(s.find(x)==s.end())
                s.insert(x);
            
            else s.erase(x);
        }
        
        else if (input == "all") {
            for (int k = 1; k <= 20; k++){
                s.insert(k);
            }
        }
        
        else if (input == "empty") {
            s.clear();
        }
        /*
        cout << '\n' << input <<" Set Status\nSet: ";
        
        for (it = s.begin(); it != s.end(); it++) {
            cout << *it << " ";
        }
        cout << '\n';*/
        
    }
    
    
    
    
}
