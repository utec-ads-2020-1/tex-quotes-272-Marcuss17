#include <iostream>
#include <string>

using namespace std;

int main(){
    string line;
    int count = 1;
    while(getline(cin,line)){
        for(int i = 0; i < line.size(); i++){
            if(line[i] == '"'){
                if(count % 2 != 0){
                    cout << "``";
                }else{
                    cout << "''";
                }
                count++;
            }else{
                cout << line[i];
            }
        }
        cout << endl;
    }
    return 0;
}

