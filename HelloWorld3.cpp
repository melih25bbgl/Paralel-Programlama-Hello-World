#include <iostream> // cout
#include <cctype> // isdigit
#include <cstdlib> //atoi
#include <cstring> // strlen
using namespace std;

int main(int argc,char* argv[]){

        if(argc == 2){
                for(int j=0;j<strlen(argv[1]);j++){;
                        if(isdigit(argv[1][j])){
                                if(argv[1][j+1] == '\0' ) {
                                        int number = atoi(argv[1]);
                                        for(int i=0;i<number;i++){
                                                cout << "Hello World !" << endl;
                                        }
                                }
                        }
                        else{
                                cout << "Number is not integer ! " << endl;
                                break;
                        }
                }
        }
        else{
                cout << "Two input not given ! " << endl;
        }
        return 0;
}
